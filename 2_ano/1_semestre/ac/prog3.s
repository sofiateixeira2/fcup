	.file	"prog3.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Write text to encrypt: "
.LC1:
	.string	"%s"
.LC2:
	.string	"MyPassword"
.LC3:
	.string	"crypt(%s) = %s\n"
.LC4:
	.string	"Done!"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	leaq	.LC0(%rip), %rdi
	subq	$112, %rsp
	.cfi_def_cfa_offset 128
	movq	%fs:40, %rax
	movq	%rax, 104(%rsp)
	xorl	%eax, %eax
	movq	%rsp, %rbx
	call	printf@PLT
	leaq	.LC1(%rip), %rdi
	movq	%rbx, %rsi
	xorl	%eax, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rsi
	movq	%rbx, %rdi
	call	crypt@PLT
	leaq	.LC3(%rip), %rdi
	movq	%rax, %rdx
	movq	%rbx, %rsi
	xorl	%eax, %eax
	call	printf@PLT
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
	movq	104(%rsp), %rcx
	xorq	%fs:40, %rcx
	jne	.L5
	addq	$112, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L5:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
