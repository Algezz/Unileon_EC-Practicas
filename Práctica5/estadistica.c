#include <stdio.h>
#include <math.h>

//Prototipos funciones:
int menu();
float media();
float desviacion();
//Funcion Main
int main()
{
	switch (menu()){
		case 1:	float medi = media();
			printf("La media aritmética es %f\n",medi);
			break;
		case 2:	float desviacio = desviacion();
			printf("La desviación media es %f\n",desviacio);
			break;
		case 3:printf("Saliendo...\n");
			break;
		default: break;
	}
return 0;
}

//Definición de funciones
int menu(){
	int num,c=0;
	do{
		if(c!=0){
			printf("Error, el número debe de ser una de las opciones\n");
		}
		printf("Opciones:\n1.- Media\n2.- Deviación típica\n3.- Salir\n");
		scanf("%d",&num);
	}while(num!=1 && num!=2 && num!=3);
	return num;
}

float media(){
	printf("Introduce los 5 números: ");
	int i;
	float n,total=0;
	for(i=1;i<=5;i++){
		scanf("%f",&n);
		total = total + n;
	}
	total = total/5;
	return total;
}

float desviacion(){
	int i;
	float total=0,nums[4];
	for(i=0;i<5;i++){
		printf("Introduce número %d: ",(i+1));
		scanf("%f",&nums[i]);
		total = total + nums[i];
	}
	float m = total/5,tot=0;
	for(i=0;i<5;i++){
		float cua = nums[i] - m;
		tot = tot + cua * cua;
	}
	float div =tot/5;
	float des = sqrt(div);
	return des;
}











