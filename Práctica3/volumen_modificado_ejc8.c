#include <stdio.h>

int main()
{
	int num = 0;
	do{
		printf("Cálculo de volúmenes:\n0.- Salir\n1.- Volúmen de un cono\n2.- Volúmen de un ortoedro\nSelecciona una opción: ");
		scanf("%d",&num);
		switch (num){
		case 1:
			float radio,alturac,volumenc;
			printf("Radio: ");
			scanf("%f",&radio);
			printf("Altura: ");
			scanf("%f",&alturac);
			if ((radio>0) && (alturac>0)){
				volumenc = (3.14/3 * radio * radio * alturac);
				printf("El volúmen del cono es %.2f\n", volumenc);
			}else{
				printf("Error, los valores deben ser positivos\n");
			}
			break;
		case 2:
			float lado1,lado2,alturao,volumeno;
			printf("Lado 1: ");
			scanf("%f",&lado1);
			printf("Lado 2: ");
			scanf("%f",&lado2);
			printf("Altura: ");
			scanf("%f",&alturao);
			if ((lado1>0)&&(lado2>0)&&(alturao>0)){
				volumeno = (lado1 * lado2 * alturao);
				printf("El volúmen del ortoedro es %.2f\n", volumeno);
			}else{
				printf("Error, los valores deben ser positivos\n");
			}
			break;
		default:
			printf ("Seleccione una opción válida\n");
			break;
	}
	}while (num!=0);
			printf ("Saliendo...\n");
return 0;
}
