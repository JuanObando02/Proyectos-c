
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{   int x=0,y=0,i,j,estudiante,elec=0;
    float suma=0,promedio=0,mayor=0;
    printf("Digite cuantos estudiantes tiene el curso:\n");
    scanf("%i",&x);
    printf("Digite la cantidad de notas por estudiante:\n");
    scanf("%i",&y);
    float notas [x][y];
    float promedios[x];
    // se guardan los datos de las notas de cada estudiante en cada corte.
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("Digite la nota %i del estudiante %i:\n",j+1,i+1);
            scanf("%f",&notas[i][j]);
        }
    }
    // se imprimen las notas de los estudiantes de cada corte. 
    for(i=0;i<x;i++){
        printf("\n %i ",i+1);
        for(j=0;j<y;j++){
            printf(" %.1f ",notas[i][j]);
        }
    }
    //se saca el promedio de los estudiantes en los tres cortes. 
    for(i=0;i<x;i++){
        suma=0;
        for(j=0;j<y;j++){
            suma+=notas[i][j];
        }
        promedio=suma/y;
        printf("\nEl promedio del estudiante %i es: %.2f",i+1,promedio);
        promedios[i]=promedio;
    }
    //se saca el promedio del corte de todas las notas de los estudiantes. 
    for(j=0;j<y;j++){
        suma=0;
        for(i=0;i<x;i++){
            suma+=notas[i][j];
        }
        promedio=0;
        promedio=suma/x;
        printf("\nEste es el promedio de notas de el corte %i: %.2f",j+1,promedio);
        if(mayor<promedio){
            mayor=promedio;
        }
        printf("\nEste es el corte con mayor promedio de nota:%.2f",mayor); 
    }
}
