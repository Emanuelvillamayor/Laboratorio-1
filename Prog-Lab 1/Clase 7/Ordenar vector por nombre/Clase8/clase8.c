
#include "clase8.h"
#include "stdio.h"
int buscarInt(int enteros [],int tam,int cual)

{
int indice=-1;
int i;//Sino existe , devuelve "-1"
for  (i=0;i<tam;i++)              //"para que recorra tdo el array"
{
    if (enteros[i]==cual)
        {
        indice=i;
        break;
        }
}
return indice;
}
