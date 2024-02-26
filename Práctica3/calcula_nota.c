#include <stdio.h>

int main()
{
	int num;
	printf("Escribe la nota numérica: ");
	scanf("%d", &num);
	if ((num==5) || (num==6)){
		printf("Aprobado\n");
	}
	else{
		if ((num==7) || (num==8)){
			printf("Notable\n");
		}
		else{
			if ((num==9) || (num==10)){
				printf("Sobresaliente\n");
			}
			else{
				if ((num>=0) && (num<5)){
					printf("Suspenso");
				}
				else{
					printf("Error, tiene que estar entre 0 y 10");
				}
			}
		}
	}
return 0;
}
