.data
.text
.globl main
main:
    
    li a7, 5
    ecall
    
    jal ra, factorial
    
    li a7, 1
    ecall
    
    li a7, 10
    ecall
factorial:
	addi sp, sp, -4
    sw ra, 0(sp)
    
    li t0, 2
    blt a0, t0, ret_1
    
    addi sp, sp, -4
    sw a0, 0(sp)
    addi a0, a0, -1
    jal ra, factorial
    
    lw t0, 0(sp)
    addi sp, sp, 4
    mul a0, t0, a0
    j fin
ret_1:
	li a0, 1
fin:
	lw ra, 0(sp)
    addi sp, sp, 4
    ret