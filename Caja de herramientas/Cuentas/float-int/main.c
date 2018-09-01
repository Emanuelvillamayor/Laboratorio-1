#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ;
    printf("ingrese num :");
scanf("%f",&x);
int x_entero = (int) x;


if(x - x_entero) // Sobra 0.24 por lo que devuelve verdadero
{
   printf("Es decimal");
}
else
{
   printf("No es decimal");
}
    return 0;
}
