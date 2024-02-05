section .data
    done_msg db "Done", 0

section .text
    global _start

_start:
    ; Call main function
    call main

    ; Exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80

main:
    ; Function prologue
    push ebp
    mov ebp, esp

    ; Call do function
    call do

    ; Function epilogue
    mov esp, ebp
    pop ebp
    ret

do:
    ; Function prologue
    push ebp
    mov ebp, esp

    ; Print "Done" message
    mov eax, 4
    mov ebx, 1
    mov ecx, done_msg
    mov edx, 4
    int 0x80

    ; Function epilogue
    mov esp, ebp
    pop ebp
    ret
    
