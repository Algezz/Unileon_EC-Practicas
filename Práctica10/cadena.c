#include <stdio.h>
#include <stdlib.h>
void quitaespacios(char *c,char *s);

int main(){
    int num;
    char *cadena;
    char *cadena2;     
    scanf("%d", &num);
    while(getchar()!='\n' & getchar()!=EOF);
    cadena = (char *)malloc(sizeof(char)*num);
    cadena2 = (char *)malloc(sizeof(char)*num);
    fgets(cadena, num, stdin);
    printf("%s", cadena);
    quitaespacios(cadena,cadena2);
    printf("%s", cadena2);
    return 0;
}

void quitaespacios(char *c,char *s){
    int i,i2=0;
    for(i=0;c[i]!='\0';i++){
        if(c[i]!=' '){
            s[i2]=c[i];
            i2++;
        }
    }
    s[i2]='\0';
}