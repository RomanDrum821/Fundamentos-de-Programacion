#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definicion de funciones
float primero(float);
float segundo(float);
float tercero(float);
float cuarto(float);
float quinto(float);
float sexto(float);
//comienza el programa
int main(int argc, char** argv)
{
	
	float n;
	int opcion;

    do
    {
    	printf("\n Se muestra un menu con las opciones de convertidores que se pueden usar");
        printf( "\n          1. Convertir grados centigrados a farenheit. " );
        printf( "\n          2. Convertir grados farenheit a centigrados." );
        printf( "\n          3. Convertir grados centigrados a Kelvin." );
        printf( "\n          4. Convertir grados Kelvin a centigrados." );
        printf( "\n          5. Convertir grados kelvin a farenheit." );
        printf( "\n          6. Convertir grados farenheit a kelvin." );
        printf( "\n          7. Salir." );
        printf( "\n\n   Introduzca la opcion que desea: " );

        scanf( "%d",&opcion );
        
       // Inicio del anidamiento
		switch ( opcion )
        {
            case 1: printf( "\n Introduzca grados en centigrados: ");
                    scanf( "%f",&n);
                    printf( "\n Grados que ingreso pero en farenheit:  %f\n\n", primero(n) );
                    break;

            case 2: printf( "\n Introduzca grados  en farenheit: ");
                    scanf( "%f",&n);
                    printf( "\n Grados que ingreso pero en centigrados:  %f\n\n", segundo(n) );
                    break;

            case 3: printf( "\n Introduzca grados en centigrados: ");
                    scanf( "%f",&n);
                    printf( "\n Grados que ingreso pero en kelvin:  %f\n\n", tercero(n) );
                    break;
                    
            case 4: printf( "\n Introduzca grados en kelvin: ");
                    scanf( "%f",&n);
                    printf( "\n Grados que ingreso pero en centigrados:  %f\n\n", cuarto(n) );
                    break;

            case 5: printf( "\n Introduzca grados en kelvin: ");
                    scanf( "%f",&n);
                    printf( "\n Grados que ingreso pero en farenheit:  %f\n\n", quinto(n) );
                    break;

            case 6: printf( "\n Introduzca grados en farenheit: ");
                    scanf( "%f",&n);
                    printf( "\n Grados que ingreso pero en kelvin:  %f\n\n", sexto(n) );
         }
		//Termina el anidamiento
	
    } while ( opcion != 7 );

    return 0;
	
}

//funcion ya esta implementada
float primero(float n)
{
	float res=((n*9/5)+32);
	return res;
}
float segundo(float n)
{
	float res=((n-32)*(0.55555));
	return res;
}
float tercero(float n)
{
	float res=((n+273.15));
	return res;
}
float cuarto(float n)
{
	float res=((n-273.15));
	return res;
}
float quinto(float n)
{
	float res=(((n-273.15)*(1.8))+(32));
	return res;
}
float sexto(float n)
{
	float res=(((n-32)*(0.55555))+(273.15));
	return res;
}

