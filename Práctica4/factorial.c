#include <stdio.h>

//Prototipos funciones:

int factorial(int num);

//Funcion Main
int main()
{
	int num;
	printf("Escribe un número (entero positivo): ");
	scanf("%d",&num);
	printf("El factorial de %d es %d\n",num,factorial(num));
return 0;
}

//Definición de funciones
int factorial(int num){
	int i, resultado = num;
	if(num!=0){
		for(i=(num-1);i>=1;i--){
			resultado = resultado * i;
		}
	}else{
		resultado = 1;
	}
	return resultado;
}
