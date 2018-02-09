#include "myl.h"

int main() {
	printStr ((char *)("Program is running\n"));
	int n;
	printStr ((char *)("Enter an integer : "));
	int status = readInt (&n);
	if (status == OK) {
		printStr ((char *)("Read integer successfully! You entered : "));
		int count = printInt (n);
		printStr ((char *)("\nTotal number of character printed = "));
		printInt (count);
		printStr ((char *)("\n"));
	} else {
		printStr ((char *)("Error : Invalid integer\n"));
	}

	float f;
	printStr ((char *)("Enter a floating point number : "));
	status = readFlt (&f);
	if (status == OK) {
		printStr ((char *)("Read float successfully! You entered : "));
		int count = printFlt (f);
		printStr ((char *)("\nTotal number of character printed = "));
		printInt (count);
		printStr ((char *)("\n"));
	} else {
		printStr ((char *)("Error : Invalid float\n"));
	}

	return 0;
}
