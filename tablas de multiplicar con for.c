#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv) 
{	
	int a;
	int b;
	int c;
	
	for(a=1; a<=10; a= a+1)
	{
		for (b=1; b<=10; b= b+1)
		{
			c = a*b;
		printf("%d X %d = %d\n",a,b,c);
		}
		
	}
	
	
	return (0);
}
