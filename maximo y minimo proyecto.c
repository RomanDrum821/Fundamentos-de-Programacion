#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv)
{
	int a;
	int b=0;

    printf("Cuantos numeros ingresara: ");        
    scanf("%d",&a);
    float array[a];
    
	for(b=0; b<=a-1; b++)
    	{
        scanf("%f",&array[b]);
    	}
    	
    b=0;
    
    float minimo=array[0];
    float maximo=array[0];
    for(b=0; b<=a-1; b++)
		{
		if(array[b]<minimo)
			{
			minimo=array[b];
			}
		if(array[b]>maximo)	
			{
			maximo=array[b];
			}
		}	
	printf("\n El valor minimo es: %f",minimo);
	printf("\n El valor maximo es: %f",maximo);
	
	return 0;
	
}
