	.text
	.globl main
    
main:
	li t0, 64
    li t1, 2
    
   	srl t2, t0, t1
    li t0, 17
    li t1, 3
    rem t3, t0, t1
    
    
    li a7,10
    ecall