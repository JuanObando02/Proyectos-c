/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int entero; 
    float decimal; 
    char nombre[100];
    char nombre2[10];
    char apellido[10];
    char  apellido2[10];
    
    
    printf("Digite el entero \n");
        scanf("%i",&entero);
        
    printf("digite el decimal \n");
        scanf("%f",&decimal);
        
    printf("digite el Nombre \n");
       scanf("%s %s %s %s ",nombre,nombre2,apellido,apellido2);
      
        
    printf("\nLa variable INT es: %i",entero);
    
    printf("\nLa variable float es: %f",decimal);
    
    printf("\nEl nombre del estudiante es: %s %s %s %s",nombre,nombre2,apellido,apellido2);
    
    
 

}
