
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int x=1,op,i,j,y=1,operacion;
    while(x!=0){
        printf("Que desea realizar:\n1.Crear un arreglo de numeros aleatoreos de 0 a 9 de un tamaño dado por el usuario y buscar pares e impares.\n");
        printf("2.Crear una TABLA de numeros aleatoreos entre 0 a 9 con una longitud dada por el usuario y buscar pares e impares.\n");
        printf("3.Salir\n");
        scanf("%i",&x);
        if(x==1||x==2||x==3){
            switch(x){
                case 1:
                {
                    srand(time(NULL));
                    printf("De cuantas posiciones va a crear el arreglo?\n");
                    scanf("%i",&op);
                int arreglo[op];
                    for(i=0;i<op;i++){
                        arreglo[i]=rand()%9+1;
                    }
                    printf("\nAsi queda el arreglo.\n");    
                    for(i=0;i<op;i++){
                        printf(" [%i] ",arreglo[i]);
                    }
                    while(y!=0){
                        printf("\nQue desea saber:\n");
                        printf("1.Saber los numeros impares del arreglo.\n");
                        printf("2.Saber los numeros pares del arreglo.\n");
                        printf("3.Volver al menu anterior.\n");
                        scanf("%i",&y);
                        if(y==1||y==2||y==3){
                            switch(y){
                                case 1:
                                    for(i=0;i<op;i++){
                                        operacion=arreglo[i]%2;
                                        if (operacion==1){
                                            printf("El numero %i es impar en la posicion %i.\n",arreglo[i],i+1);
                                        }
                                    }
                                    break;
                                case 2:
                                    for(i=0;i<op;i++){
                                        operacion=arreglo[i]%2;
                                        if (operacion==0){
                                            printf("El numero %i es par en la posicion %i.\n",arreglo[i],i+1);
                                        }
                                    }
                                    break;
                                case 3:
                                y=0;
                                    break;
                            }
                        } else {
                            printf("Opcion no valida.\n");
                        }
                    }
                }
                y=1;
                break;
                case 2:
                {   
                    srand(time(NULL));
                    int filas,columnas;
                    printf("De cuantas filas va a crear la matriz?\n");
                    scanf("%i",&filas);
                    printf("De cuantas columnas va a crear la matriz?\n");
                    scanf("%i",&columnas);
                int matriz[filas][columnas];
                    for(i=0;i<filas;i++){
                        for(j=0;j<columnas;j++){
                            matriz[i][j]=rand()%9+1;
                        }
                    }
                    printf("Asi queda la matriz:\n");
                    for(i=0;i<filas;i++){
                        printf("\n");
                        for(j=0;j<columnas;j++){
                            printf(" %i ",matriz[i][j]);
                        }
                    }
                    while(y!=0){
                        printf("\nQue desea saber:\n");
                        printf("1.Saber los numeros impares de la matriz.\n");
                        printf("2.Saber los numeros pares de la matriz.\n");
                        printf("3.Volver al menu anterior.\n");
                        scanf("%i",&y);
                        if(y==1||y==2||y==3){
                            switch(y){
                                case 1:
                                    for(i=0;i<filas;i++){
                                        for(j=0;j<columnas;j++){
                                            operacion=matriz[i][j]%2;
                                            if (operacion==1){
                                                printf("El numero %i es impar en la posicion (%i,%i).\n",matriz[i][j],i+1,j+1);
                                            }
                                        }
                                    }
                                    break;
                                case 2:
                                    for(i=0;i<filas;i++){
                                        for(j=0;j<columnas;j++){
                                            operacion=matriz[i][j]%2;
                                            if (operacion==0){
                                                printf("El numero %i es par en la posicion (%i,%i).\n",matriz[i][j],i+1,j+1);
                                            }
                                        }
                                    }
                                break;
                                case 3:
                                y=0;
                                break;
                            }
                        }
                    }
                }
                y=1;
                break; 
                case 3:
                x=0;
                break;
            }
        } else {
            printf("Opcion no valida.\n");
            x=1;
        }
    }
}

