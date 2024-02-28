#include <stdio.h>

//Prototipos funciones:

int menu();
float volumen_cono(float radio, float altura);
float volumen_ortoedro(float lado1,float lado2, float altura);

//Funcion Main
int main()
{
	int num = menu();
	switch (num){
		case 1:
			float radioc,alturac;
			printf("Radio: ");
			scanf("%f",&radioc);
			printf("Altura: ");
			scanf("%f",&alturac);
			float resultadoc = volumen_cono(radioc,alturac);
			printf("El volumen del cono es %.2f\n",resultadoc);
			break;
		case 2:
			float lado1,lado2,alturao;
			printf("Lado1: ");
			scanf("%f",&lado1);
			printf("Lado2: ");
			scanf("%f",&lado2);
			printf("Altura: ");
			scanf("%f",&alturao);
			float resultadoo = volumen_ortoedro(lado1,lado2,alturao);
			printf("El volumen del ortoedro es %.2f\n",resultadoo);
			break;
		default: printf("Saliendo...");
			break;
	}
	
return 0;
}

//Definición de funciones
int menu(){
	int c=0,num;
	do{
		if(c!=0){
			printf("Error, selecciona una opción válida\n");
		}
		printf("Opciones:\n1.- Volumen de un cono\n2.- Volumen de un ortoedro\n3.- Salir\nSelecciona una opción: ");
		scanf("%d",&num);
		c++;
	}while((num!=1)&&(num!=2)&&(num!=3));
	return num;
}

float volumen_cono(float radio, float altura){
	float resultado = 3.14/3 * radio * radio * altura;
	return resultado;
}

float volumen_ortoedro(float lado1,float lado2, float altura){
	float resultado = lado1*lado2*altura;
	return resultado;
}
