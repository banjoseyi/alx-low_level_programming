extern printf

section .text
	global main

main:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp

	mov rax,0
	rat

section .data
	msg: db "hello, holberton",0
	fant: db "%s", 10, 0

