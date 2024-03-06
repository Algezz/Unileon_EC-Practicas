def main():
    i=int(input("EScribe un entero: "))
    print("El factorial de "+str(i)+" es "+str(factorial(i)))
def factorial(n):
    resultado=1
    for i in range(1,n+1):
        resultado = resultado*i
    return resultado
main()