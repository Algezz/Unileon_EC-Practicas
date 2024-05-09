.data
cad1:	.string	"Introduce número 1: "
cad2:	.string	"Introduce número 2: "
cad3:	.string "Introduce la cadena a copiar: "
cad4:	.zero 100
cad5:	.zero 100
cad6:	.string "La cadena resultado es: "
.text
.globl main
main:
	#Pedimos el 1 número por pantalla
    li a7, 4
    la a0, cad1
    ecall
	#Lee número 1 y lo almacena en t0
    li a7, 5
    ecall
    mv t0, a0
    #Pedimos el 1 número por pantalla
    li a7, 4
    la a0, cad2
    ecall
    #Lee número 1 y lo almacena en t1
    li a7, 5
    ecall
    mv t1, a0
    #Comparamos y si no saltamos al main
    blt t0, x0, main
    blt t1, x0, main
    bge t0, t1, main
    
    addi t1, t1,1
    #Pedimos la cadena por pantalla
    li a7, 4
    la a0, cad3
    ecall
    #Leemos la cadena
    li a7, 8
    la a0, cad4
    li a1, 100
    ecall
    #Almacenamos los argumentos para llamar a la función
    add a1, t0, x0
    add a2, t1, x0
    li a3, 0
    la a4, cad4
    la a5, cad5
    #Llamamos a la función que copia
    jal x1, copia
  	#Imprimimos aviso de resultado:
    li a7, 4
    la a0, cad6
    ecall
    #Imprimimos la cadena resultado
    li a7, 4
    la a0, cad5
    ecall
li a7, 10
ecall
copia:
	lb t0, 0(a4)
    bge a3, a1, incluido
    fue:
    addi a4, a4, 1
    addi a3, a3, 1
    j copia
incluido:
	blt a3, a2, ambos
    ret
ambos:
	sb t0, 0(a5)
    addi a5, a5, 1
    li a7, 1
    mv a0, a3
    ecall
    j fue
