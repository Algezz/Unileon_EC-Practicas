#include <stdio.h>

int main()
{
	int num, total, i;
	printf("Escribe cuantos números quieres sumar: ");
	scanf(" %d", &num);
	total = 0;
	i = 1;
	if (num >= 1) {
		for(i=1;i<=num;i++){
			total = total + i;
		}
		printf("La suma es: %d \n", total);
	}
	else{
		printf("Error, el número ha de ser mayor o igual a 1");
	}
return 0;
}
