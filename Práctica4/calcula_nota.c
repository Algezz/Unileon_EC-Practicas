#include <stdio.h>

//Prototipos funciones:
void calcula_nota(int num);

//Funcion Main
int main()
{
	int num;
	printf("Escribe tu nota (entre 0 y 10): ");
	scanf("%d",&num);
	calcula_nota(num);
return 0;
}

//Definición de funciones
void calcula_nota(int num){
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
			break;
	}
}
