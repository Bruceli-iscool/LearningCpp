; Everything that comes after a semicolon (;) is a comment

WEIGHT_OF_EMPTY_BOX equ 500
TRUCK_HEIGHT equ 300
PAY_PER_BOX equ 5
PAY_PER_TRUCK_TRIP equ 220

section .text

; You should implement functions in the .text section
; A skeleton is provided for the first function

; the global directive makes a function visible to the test files
global get_box_weight
get_box_weight:
    imul rdi, rsi
    imul rdx, rcx
    add rdi, rdx
    mov rax, rdi
    add rax, WEIGHT_OF_EMPTY_BOX
    ret

global max_number_of_boxes
max_number_of_boxes:
    mov rax, TRUCK_HEIGHT
    mov rdx, 0
    div rdi
    ret

global items_to_be_moved
items_to_be_moved:
    sub rdi, rsi
    mov rax, rdi
    ret

global calculate_payment
calculate_payment:
    imul rsi, 5
    imul rdx, 220
    imul rcx, r8
    add rsi, rdx
    sub rsi, rcx
    sub rsi, rdi
    mov rax, rsi
    cqo
    inc r9
    idiv r9
    add rax, rdx
    ret

%ifidn __OUTPUT_FORMAT__,elf64
section .note.GNU-stack noalloc noexec nowrite progbits
%endif
