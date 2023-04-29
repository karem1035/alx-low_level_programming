section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 10, 0

section .text
    global main
    extern printf

main:
    ; call printf with hello string and format specifier
    push rbp
    mov rbp, rsp
    mov rsi, hello
    mov rdi, format
    xor eax, eax
    call printf

    ; return 0
    xor eax, eax
    pop rbp
    ret

