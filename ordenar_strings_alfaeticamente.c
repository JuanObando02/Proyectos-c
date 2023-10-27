#include <stdio.h>
#include <string.h>

int main(void) {
    
    int x,y;
    int titulos;
	char copia[20]; 
	
      printf("Ingrese cuantos titulos  desea poner: ");
      
      scanf("%i",&titulos);
      
      char nombre[titulos][20];
      
      for(x=0;x<titulos;x++){
	    
		printf("Ingresa un nombre: ");
		scanf("%s", nombre[x]);
		
	} 
	
	
	for(x=1;x<titulos;x++){
  		for(y=0;y<titulos-x;y++){ 
    		 if(strcmp(nombre[y],nombre[y+1])>0){ //la primera es mayor que la segunda osea va despues alfabeticamente
    		    printf("%s va primero que %s\n",nombre[y+1],nombre[y]);
        		strcpy(copia,nombre[y]); 
        		strcpy(nombre[y],nombre[y+1]); 
        		strcpy(nombre[y+1],copia);
    		 }
  		}
    }
    	    
	printf("\n \n---- NOMBRES ORDENADOS ---- \n");
	
	for(x=0;x<titulos;x++){
		printf("%s \n",nombre[x]);
	}
}


