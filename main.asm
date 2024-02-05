; Include netcac inc file
INCLUDE netcac.inc

SECTION .text
global _start

_start:
    ; Call the do function from netcac library
    call netcac.do

    ; Exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80
    
