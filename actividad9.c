
#include <stdio.h>

int main()
{
    int matriz_1[4][4];
    int matriz_2[4][4];
    int suma_ma[4][4];
    int resta_ma[4][4];
    int i,j,x=3,y=1;
    
    printf("Digite los numeros de la matriz 1\n");
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%i",&matriz_1[i][j]);
        }
    }
    printf("Digite los numeros de la matriz 2\n");
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%i",&matriz_2[i][j]);
        }
    }
    printf("\n\nMatriz 1\n");
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf(" %i ",matriz_1[i][j]);
        }
    }
    printf("\n\nMatriz 2\n");
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf(" %i ",matriz_2[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            suma_ma[i][j]=matriz_1[i][j]+matriz_2[i][j];
        }
    }
    
    while(x!=5){
        printf("\nDesea restar a la matriz 1 la matriz 2 marque (1) o la matriz 2 la matriz 1(2)\n");
        scanf("%i",&x);
        if(x==1||x==2){
        } else {
            printf("No marco ni 1 ni 2.\n");
            x=3;
        }
        if (x==1){
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    resta_ma[i][j]=matriz_1[i][j]-matriz_2[i][j];
                    x=5;
                }
            }
        } 
        if (x==2){
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    resta_ma[i][j]=matriz_2[i][j]-matriz_1[i][j];
                    x=5;
                }
            }
        }
        
    }
while(y!=0){
    printf ("\nQue desea saber: la suma (1) o resta (2) o las dos marque (3).\n");
    scanf("%i",&x);
    if(x==1||x==2||x==3){
        y=0;
    } else {
        printf("Error.\n no marco correctamente\n");
    }
}
    switch (x){
        case 1:// suma
        printf("\nla suma es:\n");
        for(i=0;i<4;i++){
            printf("\n");
            for(j=0;j<4;j++){
                printf(" %i ",suma_ma[i][j]);
            }
        }    
        break;
        case 2: 
        printf("\nLa resta es:\n");
          for(i=0;i<4;i++){
            printf("\n");
            for(j=0;j<4;j++){
                printf(" %i ",resta_ma[i][j]);
            }
        }
        break;
        case 3:
        printf("\nla suma es:\n");
        for(i=0;i<4;i++){
            printf("\n");
            for(j=0;j<4;j++){
                printf(" %i ",suma_ma[i][j]);
            }
        }
        printf("\nLa resta es:\n");
        for(i=0;i<4;i++){
            printf("\n");
            for(j=0;j<4;j++){
                printf(" %i ",resta_ma[i][j]);
            }
        }
        break;
    }
     
    
}


