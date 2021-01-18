#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	printf("Se muestra un programa con uso de arreglos: \n");
	int x[5] ={5,7,10,15,21};
	int fila;
	
	for(fila = 0;fila < 5;fila++)
	{
		printf("%i ", x[fila]);
	}
	
	printf("\n \n \n");
	
	printf("Se muestra un programa con uso de arrays de dos dimensiones: \n");
	
	int array[4][9]={20,21,23,24,25,26,27,28,29 , 29,28,27,26,25,24,23,22,21 , 10,11,12,13,14,15,16,17,18 , 18,17,16,15,14,13,12,11,10};
    int filas,columnas;

    for (filas = 0;filas < 4; filas++){
        for (columnas = 0; columnas < 9; columnas++){
            printf("%i ",array[filas][columnas]);
        }
        printf("\n");
    }
    
    

	return 0;
}
