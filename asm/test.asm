SECTION .text
	msg:	db "Hello World", 10
	len:	equ $-msg
	qnum1:  dq 1.0
	qnum2:  dq 2.0

	dnum1:  dd 1.0
	dnum2:  dd 2.0

	dinum1: dd 666666
	wnum1: dw 6666
global _start
_start:

	fldz
	fadd qword [qnum1]
	fadd qword [qnum1]
	fldz
	fadd dword [dnum2]
	fadd dword [dnum2]

	fld qword [qnum1] ;1
	fld qword [qnum2] ;2
	faddp ;3
	fldz ;0
	faddp ;3

c1:
	fld qword [qnum2] ;2
	fld qword [qnum1] ;1
	fadd st0, st1
	fadd st1, st0

	fldz
	fiadd dword [dinum1]
	fiadd word [wnum1]

	mov	edx, len
	mov	ecx, msg
	mov	ebx, 1
	mov	eax, 4
	int	0x80

	mov	ebx, 0
	mov	eax, 1
	int	0x80

