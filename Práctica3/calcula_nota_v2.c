#include <stdio.h>

int main()
{
	int num;
	printf("Escribe la nota numérica: ");
	scanf("%d",&num);
	switch (num){
		case 5:
		case 6: printf("Aprobado\n");
			break;
		case 7:
		case 8: printf("Notable\n");
			break;
		case 9:
		case 10: printf("Sobresaliente\n");
			break;
		default: printf("Suspenso\n");
	}
return 0;
}
