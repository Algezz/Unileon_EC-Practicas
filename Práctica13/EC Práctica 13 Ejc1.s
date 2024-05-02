	.data
    word:	.word	3, 7
    cad1:	.string "A+B: "
    cad2:	.string "C-D: "
    cad3:	.string "A+B+C+D: "
    cad4:	.string "A al cubo: "
    cad5:	.string "A<<2"
    cad6:	.string "Resto de 7/3: "
    .globl main
    .text
main:
	li a7, 5
    ecall
    mv t0, a0
    
    ecall
    mv t1, a0
    
    ecall 
    mv t2, a0
    
    ecall
    mv t3, a0
    
    add t5, t0, t1
    
    la a0, cad1
    li a7, 4
    ecall
    
    mv a0, t5
    li a7, 1
    ecall
    
    sub t6, t2, t3
    
    la a0, cad2
    li a7, 4
    ecall
  	
    mv a0, t6
    li a7, 1
    ecall
    
    add t5, t5, t2
    add t5, t5, t3
    
    la a0, cad3
    li a7, 4
    ecall
    
    mv a0, t5
    li a7, 1
    ecall
    
    mul t5, t0, t0
    
    la a0, cad4
    li a7, 4
    ecall
    
    mv a0, t5
    li a7, 1
    ecall
    
    slli t5, t0, 2
    
    la a0, cad5
    li a7, 4
    ecall
    
    mv a0, t5
    li a7, 1
    ecall
    
    la t0, word
    lw t1, 0(t0)
    lw t2, 4(t0)
    
    rem t3, t2, t1
    
    la a0, cad6
    li a7, 4
    ecall
    
    mv a0, t3
    li a7, 1
    ecall
    
    li a7, 10
    ecall