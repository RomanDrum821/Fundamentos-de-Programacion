#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main() {

    int a=3, b=2, c;
    float area = 0;
    char inicial; 
    
    c=suma(a,b);
    printf("suma: %d\n",c);
    c=resta(a,b);
    printf("resta: %d\n",c);
    
    area=area_circulo(4);
    printf("area: %f\n", area);
    
    inicial=primer_caracter("Partido");
    printf("primer caracter: %c", inicial);
    
    return 0;
}

