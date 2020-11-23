#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv)
{
 	int array[100]; 
	int x=2;
	int y=3;
	int aux=0;
	int z;
    
    for(z=0; z<=99; z++)
    	{
        array[z]=x;
        aux=x+y;
        x=y;
        y=aux;
    
    	}

 		for(z=0; z<=99; z++)
    		{
       		printf("%llu \n", array[z]);
    		}

	return 0; 
} 
