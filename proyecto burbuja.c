#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv)
{
	int a;
	int b=0;
	int c;
	int d;

    printf("Cuantos numeros ingresara: ");        
    scanf("%d",&a);
    float array[a];
    
	for(b=0; b<=a-1; b++)
    	{
        scanf("%f",&array[b]);
    	}	
    b=0;
    
    for(b=0; b<a; b++)
    	{
    	for(c=0; c<a; c++)
			{
			if(array[c]>array[c+1])
				{
				d=array[c];
				array[c]=array[c+1];
				array[c+1]=d;	
				}	
			}	
		}		
	printf("\n Valores que el usuario introdujo ordenados de forma ascendente:\n ");
	for(b=0; b<a; b++)
		{
		printf("\n %f",array[b+1]);	
		}		
		
	return 0;		
}


