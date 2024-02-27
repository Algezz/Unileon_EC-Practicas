#include <stdio.h>

int main()
{
	int num1,num2,i;
	i=0;
	do{
	if (i!=0){
		printf("Error, el primer número debe ser menor que el segundo.\n");
	}
	printf("Escribe el primer número: ");
	scanf("%d",&num1);
	printf("Escribe el segundo número: ");
	scanf("%d",&num2);
	i++;
	}while (num1>=num2);
	printf("Lista de números pares entre %d y %d:\n",num1,num2);
	for(i=num2-1;i>num1;i--)
	{
		int r = i % 2;
		if (r==0){
			printf("%d\n",i);
		}
	}
	printf("Fin del programa\n");
return 0;
}
