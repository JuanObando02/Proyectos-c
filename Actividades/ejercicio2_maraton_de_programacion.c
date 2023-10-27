#include <stdio.h>
#include <string.h>

int main()
{
    int long_cadena,caracter_repetido,i,j,diferencia,repite;
    char nombre[100];
    
    printf("Ingresa tu nombre: ");
    fgets(nombre, 100, stdin);
    
    long_cadena=strlen(nombre)-1;
    caracter_repetido=0;
    
    for(i=0;i<long_cadena;i++){
        repite=0;
        for(j=i+1;j<long_cadena;j++){
            if(nombre[i] == nombre[j] && i != j){
                repite=1;
            }
        }
        if (repite==1){
            caracter_repetido++;
        }
    }
    
    diferencia=long_cadena-caracter_repetido;
    
    
    if(diferencia%2==0){
        printf("Es chica.");
    }
    else{ 
        printf("Es chico.");
    }

}

