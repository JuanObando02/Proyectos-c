
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{   int x=0,y=0,i,j,estudiante,elec=0;
    float suma=0,promedio_estu=0;
    printf("Digite cuantos estudiantes tiene el curso:\n");
    scanf("%i",&x);
    printf("Digite la cantidad de notas por estudiante:\n");
    scanf("%i",&y);
    float notas [x][y];
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("Digite la nota %i del estudiante %i:\n",j+1,i+1);
            scanf("%f",&notas[i][j]);
        }
    }
    for(i=0;i<x;i++){
        printf("\n %i ",i+1);
        for(j=0;j<y;j++){
            printf(" %.1f ",notas[i][j]);
        }
    }
    printf("\n¿Quiere saber el promedio de notas de un estudiante?\n Marque: 1 (Si) 2 (No)");
    scanf("%i",&elec);
    if (elec==1){
        while(elec==1){
            printf("De que estudiante necesita saber el promedio:\n");
            scanf("%i",&estudiante);
            for(j=0;j<y;j++){
                suma+=notas[estudiante-1][j];
            }
            promedio_estu=suma/y;
            printf("El promedio de las notas del estudiante %i es: %.2f\n",estudiante,promedio_estu);
            printf("Desea saber el promedio de otro estudiante?. Si(1) No(0)");
            scanf("%i",&elec);
        }
    }
    
}
