section .data
    correct_password db "ABCD1234",0

section .bss
    user_input resb 32

section .text
global main

main:
    ; Your existing code here

    ; Call main function
    call _start

_start:
    ; Your existing code here

    ; Exit
    mov eax, 1
    xor edi, edi
    syscall

