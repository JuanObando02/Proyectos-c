
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void muestra(int arreglo[], int t);//prototipo de la funcion
void par(int arreglo[], int t);//prototipo de la funcion
void rellenar(int ma[3][3]);//prototipo de la funcion


void muestra(int arreglo[], int t){
    
    int i;
    for(i=0;i<t;i++){
        printf(" %d ", arreglo[i]);
    }
}

void par(int arreglo[], int t){
    
    int i,x=0,tama;
    int posiciones[t];
    
    for(i=0;i<t;i++){
        
        if (arreglo[i]%2==0){
                posiciones[i]=1;
                x++;
        } else {
                posiciones[i]=0;
        }
    }
    
    printf("\n\nHay %i pares en las posiciones:\n",x);
    
    for(i=0;i<t;i++){
        if(posiciones[i]==1){
            printf(" %i ",i+1);
        }
    }
    
}

void rellenar(int ma[3][3]){
    srand(time(NULL));
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            ma[x][y]=rand()%99+1;
        }
    }
    for(int x=0;x<3;x++){
        printf("\n");
        for(int y=0;y<3;y++){
            printf(" %i ",ma[x][y]);
        }
    }
}

int main()
{   
    printf("\t Bienvenido \t\n");
    int y=1,j=1;
    int matriz[3][3];
    while(y!=0){
        printf("1.arreglo\n2.matriz\n3.finalizar\n");
        scanf("%i",&y);
        switch(y){
            case 1:
                while(j!=0){
                    int a[] = {1,1,3,4,5,67,7,89,9,101, -5};
                    int t;
                    t = sizeof(a)/sizeof(int);
                    printf("tamaño del arreglo: %d\n", t);
                    muestra(a,t); // imprime el arreglo
                    par(a,t); // imprime cantidad de pares y posiciones
                    printf("\n¿Desea volver a mostrar? (1)si (2)no\n");
                    scanf("%i",&j);
                    switch(j){
                        case 1:
                            j=1;
                        break;
                        case 2:
                            j=0;
                        break;
                        default:
                            printf("Numero no valido, volviendo al menu\n");
                            j=0;
                        break;
                    }
                }
            break;
            case 2:
                j=1;
                while(j!=0){
                    rellenar(matriz);
                    printf("\n\n");
                    printf("\n¿Desea volver a mostrar? (1)si (2)no\n");
                    scanf("%i",&j);
                     switch(j){
                        case 1:
                            j=1;
                        break;
                        case 2:
                            j=0;
                        break;
                        default:
                            printf("Numero no valido, volviendo al menu\n");
                            j=0;
                        break;
                    }
                }
            break;
            case 3:
                y=0;
                return 0;
            break;
            default:
                printf("Error marca un numero valido\n");
                y=1;
            break;
        }
        
    }
}



