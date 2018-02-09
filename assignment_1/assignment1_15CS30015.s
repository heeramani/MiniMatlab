	.file "test.c" # Starting of new logical file name
	# directive begin with dot and give information about program structure and linker
	.text # 0 is used as subsection is omitted.
	.globl func # .globl make func visible ld.
	.type func, @function # .type directive to set type of func
						  #	here it is ELF version
func:
.LFB0:
	.cfi_startproc
	pushq %rbp # Use base pointer address
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq %rsp, %rbp # mov_ determine amount of data to and from memory
					# set new base pointer as %rbp = %rsp
					# %rsp is stack pointer
	.cfi_def_cfa_register 6
	pushq %rbx		# Save registers
	subq $56, %rsp	# Allocate 56 bytes of space on stack for local variables
	.cfi_offset 3, -24 # previous value of register is saved at offset -24 from CFA.
	movl %edi, -52(%rbp) # %edi:first argument;-52(%rbp) = %edi = 9, -52(%rbp): values at memory location 56 bytes below the address  indicated by %rbp(from base pointer).
	movq %fs:40, %rax # Extra segment register 
	movq %rax, -24(%rbp) # -24(%rbp) = %rax, -24(%rbp): values at memory location 24 bytes below the address  indicated by %rbp(from base pointer).
	xorl %eax, %eax # Bitwise of destination(%eax) with source(%eax) is 0. Set %eax(itself to 0).
	movq %rsp, %rax # Copy stack pointer address to %rax.
	movq %rax, %rsi # Copy %rax into %rsi
	movl -52(%rbp), %eax #%eax = 9; Copy register from values at memory location 56 bytes below the address indicated by %rbp(from base pointer) into %eax.
	addl $1, %eax # add constant 1 to value stored at register %eax. (n+1) array of size 10.
	movslq %eax, %rdx # %rdx = 9;Copy from %eax to %rdx; It is sign extend. %eax is 32 bits and %rdx is 64 bits. %rdx = signextend(%eax)
	subq $1, %rdx # subtract 1 from %rdx; %rdx = %rdx - 1
	movq %rdx, -40(%rbp) # value at memory loaction 40 bytes below below address indicated by %rbp is overwritten by value at %rdx
	movslq %eax, %rdx # sign extend; %rdx = signextend(%eax); where %rdx is 64 bits and %eax is 32 bits.  
	movq %rdx, %r8 # %rdx into %r8; %r8 = %rdx (8 bytes)
	movl $0, %r9d # Copy long constant(4 bytes) 0 to register %r9d (8 bytes)
	movslq %eax, %rdx # sign extend; %rdx = signextend(%eax); where %rdx is 64 bits and %eax is 32 bits.
	movq %rdx, %rcx # Copy %rdx to %rcx; %rcx = %rdx
	movl $0, %ebx # Copy long constant(4 bytes) 0 to register %ebx (4 bytes)
	cltq # Convert doubleword in %eax to quadword
	salq $2, %rax # left shift; %rax = %rax << 2
	leaq 3(%rax), %rdx # %rdx = address of 3(%rax)
	movl $16, %eax # Copy long constant(4 bytes) 16 to register %eax (4 bytes); %eax = 16
	subq $1, %rax # Subtract 1 from register %rax; %rax = %rax - 1
	addq %rdx, %rax # %rax = %rax + %rdx
	movl $16, %edi # Copy long constant (4 bytes ) 16 to register %edi (4 bytes); %edi = 16
	movl $0, %edx# Copy long constant (4 bytes ) 0 to register %edi (4 bytes); %edx = 0
	divq %rdi # Unsigned divide by %rdi
	imulq $16, %rax, %rax # Signed multiplication
	subq %rax, %rsp # %rsp = %rsp - %rax
	movq %rsp, %rax # %rax = %rsp
	addq $3, %rax # %rax = 3
	shrq $2, %rax # %rax = 2
	salq $2, %rax # %rax = 2
	movq %rax, -32(%rbp) # value at memory loaction 32 bytes below address indicated by %rbp is overwritten by value at %rax
	movq -32(%rbp), %rax # %rax = value at memory location 32 bytes below address indicated by %rbp
	movl $0, (%rax) # f[0] = 0;(%rax): refer to value pointed to by (%rax) is overwritten by 0. *p = 0 
	movq -32(%rbp), %rax # %rax = -32(%rbp);(Copied from value at memory loaction 32 bytes below address indicated by %rax)
	movl $1, 4(%rax) # f[1] = 1;4(%rax): value at memory location 4 bytes upper from address indicated by %rax = 1
	movl $2, -44(%rbp) # i = 2; -44(%rax): value at memory location 4 bytes below from address indicated by %rbp = 2
	jmp .L2 # Jump to level .L2
.L3: # Start of level .L3
	movl -44(%rbp), %eax # %eax = -44(%rbp):value at memory location 44 bytes below address indicated by %rbp
	leal -1(%rax), %edx # f[i-1];%edx = -1(%rax):value at memory location 1 bytes below address indicated by %rax
	movq -32(%rbp), %rax # %rax = -32(%rbp):value at memory loaction 32 bytes below address indicated by %rbp
	movslq %edx, %rdx # sign extend; %rdx = signextend(%edx); where %rdx is 64 bits and %edx is 32 bits.
	movl (%rax,%rdx,4), %ecx # %ecx = %rax + %rdx * 4;%rdx is initial pointer address
	movl -44(%rbp), %eax # %eax = -44(%rbp): value at memory location 44 bytes below address indicated by %rbp
	leal -2(%rax), %edx  # f[i-2];%rdx = address of -2(%rax):value at memory location 2 bytes below address indicated by %rax
	movq -32(%rbp), %rax # %rax = -32(%rbp): value at memory location 32 bytes below address indicated by %rax
	movslq %edx, %rdx # sign extend; %rdx = signextend(%edx); where %rdx is 64 bits and %edx is 32 bits.
	movl (%rax,%rdx,4), %eax # %eax = %rax + %rdx * 4;%rdx is initial pointer address
	addl %eax, %ecx # %ecx = %ecx + %eax; f[i-2] = f[i-2] + f[i-1]
	movq -32(%rbp), %rax # %rax = -32(%rbp): value at memory location 32 bytes below address indicated by %rbp
	movl -44(%rbp), %edx # %edx = -44(%rbp): value at memory location 44 bytes below address indicated by %rbp
	movslq %edx, %rdx # sign extend; %rdx = signextend(%edx); where %rdx is 64 bits and %edx is 32 bits.
	movl %ecx, (%rax,%rdx,4) # moved to initial point; %rax + %rdx * 4 = %ecx
	addl $1, -44(%rbp) # i = i + 1;-44(%rbp) = -44(%rbp) + 1;-44(%rbp):value at memory location 44 bytes below address indicated by %rbp

.L2: # Start of level .L2
	movl -44(%rbp), %eax # %eax = 2;%eax = -44(%rbp): value at memory location 44 bytes below address indicated by %rbp; value for for loop
	cmpl -52(%rbp), %eax # compared with -52(%rbp):value stored was 9
	jle .L3 # <= 0 ? jump to .L3

	movq -32(%rbp), %rax 
	movl -52(%rbp), %edx
	movslq %edx, %rdx
	movl (%rax,%rdx,4), %eax
	movq %rsi, %rsp
	movq -24(%rbp), %rbx
	xorq %fs:40, %rbx
	je .L5 # jump to level .L5
	call __stack_chk_fail@PLT
.L5: # start of level 5
	movq -8(%rbp), %rbx # return as f[n];%rbx = -8(%rbp) = f[n]
	leave # destroy stack frame
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size func, .-func
	.section .rodata
.LC0:
	.string "%d" # printf first argument
	.text
	.globl main
	.type main, @function
main: # Start of main
.LFB1:
	.cfi_startproc
	pushq %rbp # Use base pointer address
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq %rsp, %rbp # mov_ determine amount of data to and from memory
					# set new base pointer as %rbp = %rsp
					# %rsp is stack pointer
	.cfi_def_cfa_register 6
	subq $16, %rsp # %rsp = %rsp - 16
	movl $9, -4(%rbp) # -4(%rbp) = 9;-4(%rbp):value at memory location 4 bytes below address indicated by %rbp
	movl -4(%rbp), %eax # 9 is copied to %eax; %eax = 9
	movl %eax, %edi # 9 is copied to %edi; %edi = 9;First argument
	call func # func is called
	movl %eax, %esi #Second argument %esi = %eax
	leaq .LC0(%rip), %rdi
	movl $0, %eax
	call printf@PLT # Print returned valued by func
	call getchar@PLT # Wait for any input
	movl $0, %eax
	leave # destroy stack frame
	.cfi_def_cfa 7, 8 # .cfi_def_cfa defines a rule for computing CFA as: take address from 7 and add offset 8 to it. 
	ret
	.cfi_endproc # .cfi_endproc is used at the end of a function where it closes its unwind entry previously opened by .cfi_startproc. and emits it to .eh_frame. 
.LFE1:
	.size main, .-main
	.ident "GCC: (GNU) 7.1.1 20170630"
	# This is original C program from which following upper source file is generated.
#int func(int n)
#{
#  int f[n+1];
#  int p;
#  f[0] = 0;
#  f[1] = 1;
# 
#  for (p=2;p<= n;p++)
#  {
#      f[p]=f[p-1] + f[p-2];
#  }
#   return f[p];
#}
#int main(){
#  int n = 9;
#  printf("%d",func(n));
#  getchar();
#  return 0;}
	.section .note.GNU-stack,"",@progbits
