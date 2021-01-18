#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//definicion de prototipo de funcion
float multiplicar (float,float);
//definicion de prototipo de funcion
float AreaTriangulo(float,float);

//comienza el programa
int main(int argc, char** argv)
{
	float base, altura;
	printf("Dame la base del triangulo: ");
	scanf("%f",&base);
	printf("Dame la altura del triangulo: ");
	scanf("%f",&altura);
	
	printf("\nEl area del triangulo es: %f", AreaTriangulo(base,altura));
	
	return 0;	
}
//funcion ya esta implementada
float multiplicar (float x,float y)
{
	float res= x*y;
	return res;	
}
//funcion ya esta implementada
float AreaTriangulo (float base,float altura)
{
	float area=(base*altura)/2;
	return area;	
}





