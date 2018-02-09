#include "myl.h"
#define BUFF 20
#define SYS_READ 0
#define STDIN_FILENO 0


int printStr(char *String){
  //int size = *(&String + 1) -String;
  int i= 0;
  while (String[i] != '\0') {
                i++;
        }
  //int i = size;
  char buff[i + 2];
  int bytes = i + 1;
  for(int i=0;i<bytes - 1;i++) buff[i] = String[i];
  buff[i] = '\n';

  __asm__ __volatile__ (
		"movl $1, %%eax\n\n"
		"movq $1, %%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(buff), "d"(bytes)
	);
  return bytes-1;

}


int printInt (int n) {
	char buff[BUFF];
	char zero = '0';
	int i = 0, j, k, bytes;
	if (n == 0)
		buff[i++] = zero;
	else {
		if (n < 0) {
			buff[i++] = '-';
			n = -n;
		}

		while (n) {
			int digit = n % 10;
			buff[i++] = (char) (zero + digit);
			n /= 10;
		}

		if (buff[0] == '-')
			j = 1;
		else
			j = 0;

		k = i - 1;

		while ( j < k) {
			char temp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
	buff[i] = '\n';
	bytes = i + 1;
	__asm__ __volatile__(
		"movl $1, %%eax\n\n"
		"movq $1, %%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(buff), "d"(bytes)
	);
	return bytes;
}


int printFlt (float f) {
  char buff[BUFF];
	char zero = '0';
	int i = 0, j, k, bytes;
  //char point = '.';
  int fInt = (int)f;
  float fFloat = f - fInt;


	if (f == 0)
		buff[i++] = zero;
	else {
		if (fInt < 0.0) {
			buff[i++] = '-';
			fInt = -fInt;
		}

		while (fInt) {
			int digit = fInt % 10;
			buff[i++] = (char) (zero + digit);
			fInt /= 10;
		}

		if (buff[0] == '-')
			j = 1;
		else
			j = 0;

		k = i - 1;

		while ( j < k) {
			char temp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
  buff[i++] = '.';
  int fCountDecr = 6;
  while(fCountDecr-- ){
    fFloat = fFloat * 10;
    int tempInt = (int)fFloat;
    buff[i++] = (char)(zero + tempInt);
    fFloat = fFloat - (float)tempInt;
  }
  bytes = i;

  	__asm__ __volatile__(
		"movl $1, %%eax\n\n"
		"movq $1, %%rdi\n\t"
		"syscall\n\t"
		:
		:"S"(buff), "d"(bytes)
	);
	return bytes;
}


int readFlt (float *f) {
	char buff[20]; /*hold the returned string. */
    int noOfCharacterReturn; /* No of characters returned. */


    asm volatile("syscall" /* Call the syscall interrupt. */
      : "=a" (noOfCharacterReturn)
      : "0" (SYS_READ), "D" (STDIN_FILENO), "S" (buff), "d" (20)
      : "rcx", "r11", "memory", "cc");

	int i = 0;
  int ifNeg = 0;
  int sum = 0;


	if (buff[i] == '-') {
		ifNeg = 1;
		i++;
	} else if (buff[i] == '+') {
		i++;
	}

	for (; i < noOfCharacterReturn - 1; i++) {
		if (buff[i] == '.') {
			i++;
			break;
		}
		if (buff[i] < '0' || buff[i] > '9') {
			*f = (float) sum;
			return ERR;
		}
		sum *= 10;
		sum += (int) (buff[i] - '0');
	}

	float sum2 = 0.0;
	float j = 10.0;

	while (i < noOfCharacterReturn - 1) {
		if (buff[i] < '0' || buff[i] > '9') {
			return ERR;
		}
		sum2 += (float) (buff[i++] - '0') / j;
		j *= 10.0;
	}

	*f = (float) sum + sum2;
	if (ifNeg == 1)
		*f = -(*f);
  	return OK;
}



int readInt (int *n) {
	char buff[20];
    int noOfCharacterReturn;

    asm volatile("syscall" // Instruction of assembly language
      : "=a" (noOfCharacterReturn)// output of funtion saved here in noOfCharacterReturn
      : "0" (SYS_READ), "D" (STDIN_FILENO), "S" (buff), "d" (20) // 0:scan 1:write D:Where to write S:read from buff  d: maximum 20 characters read or write
      : "rcx", "r11", "memory", "cc");

	int i = 0;
  int ifNeg = 0;
  int sum = 0;


	if (buff[i] == '-') {
		ifNeg = 1;
		i++;
	} else if (buff[i] == '+')i++;

	for (; i < noOfCharacterReturn - 1; i++) {
		if (buff[i] < '0' || buff[i] > '9') {
			return ERR;
		}
		sum = sum + 10;
		sum = sum +  buff[i] - '0';
	}

	if (ifNeg == 1)
		*n = -sum;
	else
		*n = sum;
  	return OK;
}
