#include <stdio.h>

int main()
{
	int num;
	printf("Escribe un número: ");
	scanf("%d",&num);
	if (num==3){
		printf("\nHas introducido un 3\n");
	}
	else{
		printf("\nNo has introducido un 3 sino un %d\n",num);
	}
	printf("Fin del algoritmo\n");
return 0;
}
