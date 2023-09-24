section .data
	hello db "Hello, Holberton",10,0 ; The string to print with a newline

section .text
	global main

main:
	; Call printf
	mov rdi, hello ; Set the format string
	call printf     ; Call the printf function;

	; Exit the program
	mov rax, 60    ; syscall number for exit
	xor rdi, rdi   ; Exit status 0
	syscall
