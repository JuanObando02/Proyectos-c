
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplos(int x, int y);
void matrizmultiplos(int x);


int main(){
int x=1,numero1,numero2;        
     while(x!=0){
            printf("\t------Bienvenivo------\t");
            printf("\n1.Verificar Multiplos\n2.Construir matriz de multiplos. \n3.salir\n");
            scanf("%i",&x);
        switch(x){
            case 1:
                printf("\nDigite los dos numeros para verificar sus multiplos\n");
                scanf("%i",&numero1);
                printf("Digita el segundo numero.\n");
                scanf("%i",&numero2);
                multiplos(numero1,numero2);
                x=1;
            break;
            case 2:
                printf("Ingresa el numero del cual deseas saber sus multiplos.\n");
                scanf("%i",&numero1);
                matrizmultiplos(numero1);
                
            break;
            case 3:
                printf("Felicidades ha concluido el curso con exito, es un ganad@r.\n");
                printf("Saliendo....\n");
                x=0;
            break;
        }
     }   
}

void multiplos(int x, int y){
    int multiplo=0,resultado;
        if(x%y==0){
            printf("El numero %i si es multiplo de %i.\n",x,y);
            for(int i=1;i<x;i++){
                resultado=y*i;
                if(x==resultado){
                    printf("Ya que: %i=%ix%i\n\n",x,y,i);
                }
            }
        } else {
        printf("El %i no es multiplo de %i.\n\n",x,y);
        }
}

void matrizmultiplos(int x){
    
    int matriz[3][3];
    int numero;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            numero=rand()%50+1;
            matriz[i][j]=x*numero;
        }
    }
    printf("Esta es una matriz de multiplos aleatoreos del %i.\n",x);
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
        printf(" %i ",matriz[j][i]);    
        }
    }
    printf("\n");
    printf("\n");
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            numero=matriz[i][j];
            multiplos(numero,x);
        }
    }
    printf("\n");
    }




