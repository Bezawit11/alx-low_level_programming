section .data
    msg db "Hello, Holberton",10;

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall
    
    mov rax, 60
    mov rdi, 0
    syscall

#include <unistd.h>

#define STDOUT 1

int main()
{
    write(STDOUT, "Hello, Holberton\n", 17);
    _exit(0);
}
