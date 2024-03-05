#include <stdio.h>

//Prototipos funciones:
int calcula_multiplos_intervalo(int a, int b, int c);

//Funcion Main
int main()
{
	int num,c=0,num1,num2,num3;
	do{
		if(c!=0){
			printf("Error, o el primer número no es menor que el segundo o el tercero no es positivo\n");
		}
		c++;
	printf("Escribe el 1 núm: ");
	scanf("%d",&num1);
	printf("Escribe el 2 núm: ");
	scanf("%d",&num2);
	printf("Escribe el 3 núm: ");
	scanf("%d",&num3);
	}while(num1>=num2 || num3<=0);
	
	printf("Hay %d múltiplos de %d entre %d y %d\n",calcula_multiplos_intervalo(num1,num2,num3),num3,num1,num2);
return 0;
}

//Definición de funciones
int calcula_multiplos_intervalo(int a, int b, int c){
	int i,total=0;
	for(i=a+1;i<b;i++){
		if(i%c==0){
			total++;
		}
	}
	return total;
}
