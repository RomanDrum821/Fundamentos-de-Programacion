#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	
	float w = 16;
	float x = 10;
	float y = 15;
	float z = 13;

	//bloque para el veradero o falso
	
	printf 	("\n w: %f", w); 
	printf 	("\n x: %f", x); 
	printf 	("\n y: %f", y);
	printf 	("\n z: %f", z); 

	//bloque para el veradero o falso		
	if ( w > x && w > y && w > z)
	{
		printf 	("\n El mayor es w");
	}
		else
		{
			if ( x > w && x > y && x > z)
			{
			printf 	("\n El mayor es x");	
			}
				if ( y > w && y > x && y > z)
				{
				printf 	("\n El mayor es y");	
				}
					else
					{
					printf ("\n El mayor es z");
					}
		}
	

	return 0;	
	
}
