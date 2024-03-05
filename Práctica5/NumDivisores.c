#include <stdio.h>

//Prototipos funciones:
int calcula_divisores(int n);

//Funcion Main
int main()
{
	int num,c=0;
	do{
		if(c!=0){
			printf("Error, el número debe de ser positivo\n");
		}
		c++;
		printf("Escribe un número: ");
		scanf("%d",&num);
	}while(num<=0);
	printf("EL número %d tiene %d divisores\n",num,calcula_divisores(num));
	
return 0;
}

//Definición de funciones
int calcula_divisores(int n){
	int total=0,i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			total++;
		}
	}
	return total;
}
