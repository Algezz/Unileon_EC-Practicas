def main():
    n1=0;n2=0;c=0
    while(n1>=n2):
        if c!=0:
            print("Error, el primer numero debe ser menor que el segundo\n")
        c+=1
        n1=int(input("Escribe el primer número: "))
        n2=int(input("Escribe el segundo número: "))
    imprime_pares_intervalo(n1,n2)

def imprime_pares_intervalo(n1,n2):
    for i in range(n2-1,n1,-1):
        if i%2==0:
            print(str(i))
main()