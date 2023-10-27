
#include <stdio.h>

int main()
{   
    
    int tablas[10][10];
    int x,y;
    for(x=0;x<10;x++){
        for(y=0;y<10;y++){
            tablas[x][y]=(x+1)*(y+1);
        }    
    }
    for(x=0;x<10;x++){
        printf("\ntabla del %i: ",x+1);
        for(y=0;y<10;y++){
            printf(" %ix%i=%i ",x+1,y+1,tablas[x][y]);
        }
    }
    
}

