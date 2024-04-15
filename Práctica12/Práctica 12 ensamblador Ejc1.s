	.text
	.globl main
    
main:
	li t0, 15
    li t1, 11
    
    xor t0, t0, t1
    xor t1, t1, t0
    xor t0, t0, t1
    
    
    li a7,10
    ecall