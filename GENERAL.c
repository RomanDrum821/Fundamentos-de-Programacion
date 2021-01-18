#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=3;
	int b=2;	
	int c;
	float area;
	char inicial;
	
	c=suma(a,b);
	printf("c: %d\n",c);
	
	c=resta(a,b);
	printf("c: %d\n",c);
	
	area=area_circulo(2);
	printf("area: %f\n",area);
	
	inicial=primer_caracter("partido");
	printf("primer caracter: %c",inicial);
	
	return 0;
}
