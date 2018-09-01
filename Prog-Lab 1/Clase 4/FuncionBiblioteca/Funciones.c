#include "Funciones.h"
#include"stdio.h"

int pedirEntero(char mensaje[], int min, int max)
{
 int numero;
    printf("%s", mensaje );
    scanf("%d",&numero);
     while(numero<min||numero>max)
    {

        printf("Error : Reingrese %s", mensaje);
        scanf("%d",&numero);
    }
    return numero;

}
