.data
datos1:	.half 4,7,2
	.align 2
    .word 1, -5
    .byte 4
    .align 1
    .half 3
    .align 2
    .word -3
    .zero 2
.globl main
.text
main:
	la t0,datos1
    lw t1,8(t0)
    lh t2,18(t0)
    add t3,t1,t2
    sh t3,24(t0)
    
    li a7,1
    mv a0,t3
    ecall

	lw t1,12(t0)
    lw t2,20(t0)
	add t3,t1,t2
	sh t3,4(t0)
    
    mv a0,t3
    ecall
    
li a7,10
ecall