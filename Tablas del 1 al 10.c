#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//comienza el programa

int main(int argc, char** argv) 
{
	int x=1;
	int y=1;
	int r;
	
	while (x<=10)

	{	
	printf("\n \n Tabla del  %d \n",x);
	
		while (y<=10)

		{
		
			r = x * y;
			printf("\n %d * %d = %d\n",y,x,r);			
			y = y + 1 ;
			}

	y = 1;
	x = x + 1 ;
	}
	

return 0;

}
