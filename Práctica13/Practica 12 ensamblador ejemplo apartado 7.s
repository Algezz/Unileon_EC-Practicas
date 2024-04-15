	.data
datos:	.word 34, -23
		.half 8
      .globl main
      .text
main:
	la t0, datos
    lw t1, (t0)
    lw t2, 4(t0)
    lh t3, 8(t0)
    
    add t3, t3, t2
    
    sw t3, 4(t0)

    li a7,10
    ecall