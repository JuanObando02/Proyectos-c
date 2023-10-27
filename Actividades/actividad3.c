
#include <stdio.h>

int main()
{   float notas [20];
    float promedio=0,suma=0,mayor_nota=0,menor_nota=5;
    int i,x=0,y=0,mayor_que_promedio=0;
    
    for  (i=1;i<=20;i++){
    printf("Digite las notas del estudiante %i\n",i);
    scanf("%f",&notas[i]);
    }
while(x!=5){
    printf("Marque 1 si desea saber la nota de un estudiante en especifico.\n");
    printf("Marque 2 si desea saber la nota de todos los del curso.\n");
    printf("Marque 3 si desea saber el promedio de las notas del curso y la cantidad que sacaron mas que el promedio.\n");
    printf("Marque 4 si desea saber el la nota mas alta y la mas baja.\n");
    printf("Marque 5 si desea finalizar.\n");
    scanf("%i",&x);
        if (x==1){
            printf("Digite el numero del estudiante del cual desea saber la nota:\n");
            scanf("%i",&y);
            if (y<=20){
            printf("La nota de ese estudiante es: %.1f.\n\n",notas[y]);
            } else {
            printf("Ese estudiante no tiene nota.\n\n");
            }
        }
        if(x==2){
            for (i=1;i<=20;i++){
	            printf("Esta es la nota del estudiante %i: %.1f\n",i,notas[i]);
            }
        }
        if(x==4){
            for (i=1;i<=20;i++){
                if (notas[i]>mayor_nota){
                mayor_nota=notas[i];
                }
                if (notas[i]<menor_nota){
                menor_nota=notas[i];
                }
            }
        printf("La mejor nota es:%.1f\nLa mas baja es:%.1f\n\n",mayor_nota,menor_nota);
        }
    
    if (x==3){
        for(i=1;i<=20;i++){
            suma = suma+notas[i];
        }
        promedio=suma/20;
        for (i=1;i<21;i++){
            if (notas[i]>promedio){
            mayor_que_promedio=mayor_que_promedio+1;    
            }       
        }
        printf("\nEl promedio de las notas es %.2f\n",promedio);
        printf("La cantidad de estudiantes con mayor nota que el promedio son: %i.\n\n",mayor_que_promedio);
    }
}
}
