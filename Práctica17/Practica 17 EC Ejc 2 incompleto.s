.data


.text
.globl main
main:
    
    li a7, 5
    ecall
    
    li a1, 0
    li t6, 1
    jal ra, fib
    
    li a7, 1
    ecall
    
    li a7, 10
    ecall
fib:
   addi sp, sp, -4
   sw ra, 0(sp)
   addi sp, sp, -4
   sw a0, 0(sp)
   addi sp, sp, -4
   sw a1, 0(sp)
   
   mv a0, t3
   
   li t0, 2
   blt a0, t0, fin
   
   addi a0, a0, -1
   jal ra, fib
   mv a1, a0
   
   addi a0, a0, -1
   jal ra, fib
   
   addi t4, a0, 2
   add a0, a1, a0
   beq t4, t3, igual
fin:
    lw a1, 0(sp)
    addi sp, sp, 4
    lw a0, 0(sp)
    addi sp, sp, 4
	lw ra, 0(sp)
    addi sp, sp, 4
    beq t5, t6, finigual
    fuefinigual:
	ret
igual:
	li t5, 1
    mv a5, a0
    j fin
finigual:
	mv a0, a5
	j fuefinigual