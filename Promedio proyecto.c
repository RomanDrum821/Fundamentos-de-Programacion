#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv)
{
	int a;
	int b;
	float c=0;
    printf("Cuantos numeros ingresara: ");
            
    scanf("%d",&a);

    int array[a];
    
	for(b=0; b<=a-1; b++)
    	{
        scanf("%d",&array[b]);
    	}
    	
		for(b=0; b<=a-1; b++)
    		{
        	c=array[b]+c;
    		}
    		
	printf("\n El promedio es: %f",c/a);
	
	return 0;
}
