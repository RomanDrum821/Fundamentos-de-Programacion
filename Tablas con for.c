#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv) 
{	
	int a;
	int b;
	int c;
	
	for(a=1; a<=10; a++)
	{
		printf("\n Tabla de multiplicar del %d \n",a);
		for (b=1; b<=10; b++)
		{
			c = a*b;
		printf("%d X %d = %d\n",a,b,c);
		}
		
	}
	
	
	return (0);
}
