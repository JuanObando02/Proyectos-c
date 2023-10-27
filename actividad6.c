#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{   int x=0,y=0,i,j,estudiante,elec=1,pos_m=0;
    float suma=0,promedio=0,mayor=0;
    printf("Digite cuantos estudiantes tiene el curso:\n");
    scanf("%i",&x);
    printf("Digite la cantidad de notas por estudiante:\n");
    scanf("%i",&y);
    float notas [x][y];
    float promedios[y];
    
    // se guardan los datos de las notas de cada estudiante en cada corte.
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("Digite la nota %i del estudiante %i:\n",j+1,i+1);
            scanf("%f",&notas[i][j]);
        }
    }
    printf("Notas guardas.");
    while(elec!=0){
        printf("\nQue accion de sea realizar:\n1.Mostar las notas de los estudiantes.\n2.Sacar el promedio de las notas de cada estudiante.\n3.Sacar el promedio de cada corte.\n4.Sacar el promedio del curso total.\n0.Finalizar.\n");
        scanf("%i",&elec);    
    switch(elec){
    // se imprimen las notas de los estudiantes de cada corte. 
    case 1:
        for(i=0;i<x;i++){
            printf("\n %i ",i+1);
            for(j=0;j<y;j++){
                printf(" %.1f ",notas[i][j]);
            }
        }
        printf("\n");
        break;
    //se saca el promedio de los estudiantes en los tres cortes. 
    case 2:    
        for(i=0;i<x;i++){
            suma=0;
            for(j=0;j<y;j++){
                suma+=notas[i][j];
            }
            promedio=suma/y;
            printf("\nEl promedio del estudiante %i es: %.2f",i+1,promedio);
        }
        printf("\n");
        break;
    //se saca el promedio del corte de todas las notas de los estudiantes. 
    case 3:    
        for(j=0;j<y;j++){
            suma=0;
            for(i=0;i<x;i++){
                suma+=notas[i][j];
            }
            promedio=0;
            promedio=suma/x;
            promedios[j]=promedio;
            printf("\nEste es el promedio de notas de el corte %i: %.2f",j+1,promedio);
            if(mayor<promedio){
                mayor=promedio;
            }
            if(mayor=promedio){
                pos_m=j+1;
            }
        }
        suma=0;
        printf("\n\nEl corte %i tuvo mayor promedio de nota: %.2f\n",pos_m,mayor);
        break;
    //el promedio de los tres cortes.
    case 4:    
        for (i=0;i<y;i++){
            suma+=promedios[i];
        }
        promedio=0;
        promedio=suma/y;
        printf("\nEl promedio final del curso es: %.2f\n",promedio);
        break;
    case 0:
        printf("Programa finalizado. Gracias.");
        break;
    default:
        printf("Error numero incorrecto.\nIntente de nuevo.\n");
        
    }
    }
}

