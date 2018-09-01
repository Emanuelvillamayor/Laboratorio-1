#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a;
    printf("Direccion de memoria del puntero '&a' : %d\n",&a);
    printf("Contenido del puntero 'a' : %d\n",a);
    printf("\n");

    int* b;
    printf("Direccion de memoria del puntero '&b' : %d\n",&b);
    printf("Contenido del puntero 'b' : %d\n",b);
    printf("\n");

    int c;
    printf("Direccion de memoria del entero '&c' : %d\n",&c);
    printf("Contenido del entero 'c' : %d\n",c);
    printf("\n");

    a=&c;
    printf("Direccion de memoria del puntero '&a' : %d\n",&a);
    printf("Direccion de memoria de la variable contenida dentro del puntero 'a' es decir direcion de memoria de '&c': %d\n",a);
    printf("Valor de la variable contenida dentro del puntero '&a' es decir el valor  de 'c': %d\n",*a);
    printf("\n");

    b=&a;
    printf("Direccion de memoria del puntero '&b' : %d\n",&b);
    printf("Direccion de memoria de la variable contenida dentro del puntero '&a' es decir direcion de memoria de '&c': %d\n",b);
    printf("Valor de la variable contenida dentro del puntero '&b', y dentro esta el puntero '&a' que apunta a el valor  de 'c': %d\n",*b);


    return 0;
}
