#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
long fact(int n) 
{
    if (n==1)
	{           
        return 1;
	}
 	else
 	{
 	return n * fact (n-1);  	
	}
    
}
 
int main() 
{
    int num;
    printf("Introduzca un numero entero: ");
    scanf("%d",&num);
    printf("Su factorial es: %d",fact(num) );
 
    return 0;
}
