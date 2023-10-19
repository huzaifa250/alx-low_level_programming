section .data
    format db "Hello, Holberton", 10, 0  ; Define the format string with a new line (10) and null terminator (0)

section .text
    global main

main:
    ; Prepare the arguments for printf
    mov rdi, format  ; Load the address of the format string into rdi

    ; Call printf
    mov rax, 0       ; The syscall number for printf (0 for printf)
    call printf

    ; Exit the program
    mov rax, 60      ; The syscall number for exit (60 for exit)
    xor rdi, rdi     ; Status code (0 for success)
    syscall

