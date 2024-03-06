def main():
    c = 0
    n=0
    #Comprobar que el valor es positivo y si no da error hasta que lo sea
    
    while(n<=0):
        if c!=0:
            print("Error, el número debe ser mayor de 0")
        c+=1
        n = int(input("Introduzca un valor entero positivo: "))
    
    #Llamada a una funcion que lee los n primeros numeros enteros

    print("La suma de los "+str(n)+" primeros números enteros es "+str(suma_n_primeros_nums(n)))

def suma_n_primeros_nums(num):
    total = 0
    for i in range(0,num+1):
        total = total + i
    return total
main()