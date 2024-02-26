#include <stdio.h>

int main()
{
	float celsius, farenheit;
	printf("Temperatura en Celsius: ");
	scanf("%f",&celsius);
	farenheit = celsius * 9 / 5 + 32;
	printf("Temperatura en Farenheit: %.2f\nFin del algoritmo\n",farenheit);
return 0;
}
