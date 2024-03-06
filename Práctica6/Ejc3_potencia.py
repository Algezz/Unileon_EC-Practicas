def main():
    base=0;exponente=0;c=0;
    while(base<=0 or exponente<=0):
        if c!=0:
            print("Error, los números deben ser mayores de 0")
        c+=1
        base = int(input("Introduce la base: "))
        exponente = int(input("Introduce el exponente: "))
    print("El resultado de "+str(base)+" elevado a "+str(exponente)+" es igual a "+str(potencia(base,exponente)))
def potencia(b,e):
    res = 1
    for i in range(0,e):
        res = res * b
    return res
main()