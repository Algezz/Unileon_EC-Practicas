#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void init(char abc[26]);

//Funcion Main
int main()
{
	srand(time(NULL));
	char abc[26];
	init(abc);
	int ale[8];
	int i;
	for(i=0;i<8;i++){
		ale[i]=rand()%26;
	}
	char pass[9];
	for(i=0;i<8;i++){
		pass[i]=abc[ale[i]];
	}
	pass[8]='\0';
	printf("%s\n",pass);	
return 0;
}

//Definición de funciones
void init(char abc[26]){
	int i;
	for(i=0;i<26;i++){
		abc[i]=97+i;
	}
}
