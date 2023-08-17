section .data
    correct_password db "ABCD1234",0

section .bss
    user_input resb 32

section .text
    global _start

_start:
    ; Read user input
    mov eax, 3          ; syscall number for sys_read
    mov ebx, 0          ; file descriptor 0 (stdin)
    lea ecx, [user_input]
    mov edx, 32         ; maximum number of bytes to read
    int 0x80            ; interrupt to invoke syscall

    ; Compare input with correct password
    lea edi, [correct_password]
    call compare_strings

    ; Check result of comparison
    test eax, eax
    jnz .incorrect

    ; Print "OK" and exit
    mov eax, 4          ; syscall number for sys_write
    mov ebx, 1          ; file descriptor 1 (stdout)
    lea ecx, [ok_message]
    mov edx, 2
    int 0x80            ; interrupt to invoke syscall

    ; Exit
    mov eax, 1          ; syscall number for sys_exit
    xor ebx, ebx        ; exit status 0
    int 0x80            ; interrupt to invoke syscall

.incorrect:
    ; Print "Incorrect" and exit
    mov eax, 4
    mov ebx, 1
    lea ecx, [incorrect_message]
    mov edx, 9
    int 0x80

    ; Exit
    mov eax, 1
    xor ebx, ebx
    int 0x80

compare_strings:
    ; Compare strings pointed by edi and ecx
    xor eax, eax
.loop:
    mov al, byte [edi]
    cmp al, byte [ecx]
    jne .not_equal
    cmp al, 0           ; End of string
    je .equal
    inc edi
    inc ecx
    jmp .loop

.not_equal:
    sub al, byte [ecx]  ; Calculate the difference
    ret

.equal:
    xor al, al          ; Set zero flag
    ret

section .data
    ok_message db "OK", 0
    incorrect_message db "Incorrect", 0

