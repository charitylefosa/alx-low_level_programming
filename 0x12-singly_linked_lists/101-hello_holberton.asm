section .data 
	format: dp 'Hello, Helberton\n', 0
section .text
	global main
	extern printf

main:
	mov rdi, format
	xor eax, eax
	call printf
	mov	eax, 0
	ret
