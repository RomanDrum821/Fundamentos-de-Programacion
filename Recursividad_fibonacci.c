#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci (int f)
{
   if ((f == 0) || (f == -1))
   return 1;
   else
   return fibonacci(f-1) + fibonacci(f-2);
}

int main (void)
{
    int r, valor;
	int tope;
    scanf("%d \n",&tope);
	printf("0");
    printf("\n1");
    printf("\n1");
	

    for (valor = 1; valor <= tope ; valor++)
		{
		r = fibonacci(valor);
        printf("\n%d", r);
        }


    return 0;
}
