#include <stdio.h>
#include <string.h>


int main()
{
    int titulos,x,valido,y,total=0;
    printf("Ingrese cuantos titulos desea poner: \n");
      
    scanf("%i",&titulos);
      
    char nombre[titulos][20];
    
     for(x=0;x<titulos;x++){
		printf("Ingresa un nombre: ");
		scanf("%s", nombre[x]);
	} 
	
	
	for(x=0;x<titulos;x++){
	    valido=0;
            if(strcmp(nombre[x],nombre[x+1])>0){
                printf("%s va antes de %s\n",nombre[x],nombre[x+1]);
                valido=1;
            }
        if(valido=1){
            total++;
        }
	}
	printf("%i",total);
	
	
    
}

