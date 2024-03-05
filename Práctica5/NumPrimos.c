#include <stdio.h>

//Prototipos funciones:
int calcula_divisores(int n);
int calcula_si_es_primo(int n);

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
	
	if(calcula_si_es_primo(num)==1){
		printf("El número %d es primo\n",num);
	}else{
		printf("El número %d no es primo\n",num);
	}
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

int calcula_si_es_primo(int n){
	int s=calcula_divisores(n);
	switch (s){
		case 2: return 1;
			break;
		default: return 0;
			break;
	}
}
