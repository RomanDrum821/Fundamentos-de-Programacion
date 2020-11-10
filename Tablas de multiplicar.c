#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//comienza el programa
int main(int argc, char** argv) 
{
 
 
 	int x  = 1;
    int t = 0;
    int tope = 10;
    
    printf("Escriba el numero de el cual desea conocer la tabla:\n");
  	scanf("%d",&t); 
    
    while(x<=tope){
        printf("%d X %d = %d\n",t,x,t*x);
        x = x + 1;
       
    }
    
    return (0);
}
