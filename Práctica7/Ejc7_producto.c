#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipos funciones:
void init(int m[3][3]);
void producto(int m1[3][3],int m2[3][3],int m3[3][3]);
void matrizAFila(int m1[3][3],int fil,int vf[3]);
void matrizAColumna(int m1[3][3],int col,int vc[3]);
int FilaPorColumna(int vf[3],int vc[3]);
void imprime(int m[3][3]);
//Funcion Main
int main()
{
	srand(time(NULL));
    int m1[3][3],m2[3][3],m3[3][3];
    init(m1);
    init(m2);
    producto(m1,m2,m3);
    imprime(m1);
    imprime(m2);
    imprime(m3);
return 0;
}

//Definición de funciones
void init(int m[3][3]){
    int q,w;
    for(q=0;q<3;q++){
        for(w=0;w<3;w++){
            m[q][w]=rand()%6;
        }
    }
}

void producto(int m1[3][3],int m2[3][3],int m3[3][3]){
    int i,j;
        for(i=0;i<3;i++){
                int vf[3],vc[3];
                matrizAFila(m1,i,vf);
                for(j=0;j<3;j++){
                    matrizAColumna(m2,j,vc);
                    m3[i][j]=FilaPorColumna(vf,vc);
                }
            }
}

void matrizAFila(int m1[3][3],int fil,int vf[3]){
    int x;
    for(x=0;x<3;x++){
            vf[x]= m1[fil][x];
    }
}

void matrizAColumna(int m1[3][3],int col,int vc[3]){
    int y;
    for(y=0;y<3;y++){
            vc[y]= m1[y][col];
    }
}

int FilaPorColumna(int vf[3],int vc[3]){
    int z,tot=0;
    for(z=0;z<3;z++){
        tot = tot + (vf[z]*vc[z]);
    }
    return tot;
}

void imprime(int m[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}