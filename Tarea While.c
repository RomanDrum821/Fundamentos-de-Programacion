#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//comienza el programa
int main(int argc, char** argv) 
{
//declarar variables
    int l=0; 
    int w=1; 
    int x=0; 
    int y=1; 
    int z=0;
//pedrir la cantidad de numeros que desea ver de la sucesion
    printf("Ingrese la cantidad de numeros que desea ver de la sucesion de fibonacci:\n");
//escriba la cantidad de numeros a calcular
    scanf("%d",&l);
//se imprime el mensaje
    printf("\nla sucesion es:\n");
//se imprime el primer numero de la sucesion    
    printf("%d",x);
//comienza el ciclo while  
    while(w<l)
    	{
    		printf ("\n%d",y);
		 	z=x+y;
        	x=y;
        	y=z;
        	w++;
    	}
//fin del ciclo while
    return (0);
}
