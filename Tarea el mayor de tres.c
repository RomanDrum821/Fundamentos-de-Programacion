#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	
	float x = 10;
	float y = 15;
	float z = 13;

	//bloque para el veradero o falso
	
	printf 	("\n x: %f", x); 
	printf 	("\n y: %f", y);
	printf 	("\n z: %f", z); 
		
	if ( z < x > y )
	{
		printf 	("\n El mayor es x");
	}
		else
		{
			if ( x < z > y )
			{
			printf 	("\n El mayor es z");	
			}
				else
				{
					printf ("\n El mayor es y");
				}
		}
	

	return 0;
	
	
	
	
}
