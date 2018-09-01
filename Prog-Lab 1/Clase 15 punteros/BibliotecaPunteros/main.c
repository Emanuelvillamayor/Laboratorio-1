#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
int main()
{

int valor;
char valorArray[50];

if(!getStringNumeros("Ingrese un numero",valorArray))
{
    printf("Error al ingresar numero\n");
}
valor=atoi(valorArray);
printf("valor--%d",valor);


return 0;
}
