#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv)
{
	int x;
	int y;
    printf("Cuantos numeros ingresara: ");
            
    scanf("%d",&x);

    int array[x];
    
    
    for(y=0; y<=x-1; y++)
    	{
        scanf("%d",&array[y]);
    	}
    printf(" Los numeros guardados son: \n");
    	for(y=0; y<=x-1; y++)
    		{
        	printf("%d \n",array[y]);
    		}
    
	
	return 0;
}
