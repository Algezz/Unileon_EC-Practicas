#include <stdio.h>

//Prototipos funciones:
void imprime_pares_intervalo(int num1,int num2);

//Funcion Main
int main()
{
	int num1,num2,c=0;
	do{
		if(c!=0){
			printf("Error, el primer número debe ser menor que el segundo\n");
		}
		printf("Escribe el primer número: ");
		scanf("%d",&num1);
		printf("Escribe el segundo número: ");
		scanf("%d",&num2);
		c++;
	}while(num1>=num2);
	imprime_pares_intervalo(num1,num2);
return 0;
}

//Definición de funciones
void imprime_pares_intervalo(int num1,int num2){
	int i;
	for(i=num2-1;i>num1;i--){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
