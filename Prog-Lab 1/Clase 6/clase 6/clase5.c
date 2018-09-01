#include "clase5.h"
#include "stdio.h"
/** El ARRAY se pasa por referencia por que cambia el parametro actual del array porque se pasa la direccion de memoria
y "cantidad " es una copia del valor original del main y no se modifica*/
int contarPares (int array[],int  cantidad)
{
int contaPares=0;
int i;
/**todos los arrays comienzan en cero para que acompañe los subindices del vector*/
/**si pongo "<="el ultimo elemento que va a tomar va a estar por fuera del array y va a tomar datos basura*/
for(i=0;i<cantidad;i++)
{
    if (array[i]%2==0)
    {
        contaPares++;
    }
}
return contaPares;
}
/******************************************************************************************/

int buscarChar(char array[],int cantidad,char caracter )
{
     /**lo inicializo en -1 para que cambie el valor si es correcto o sino ya salta -1*/
    int index=-1;
    int i;
    for(i=0;i<cantidad;i++)
    {

    if (array[i]==caracter)
    {
        /**Modicfico el index con "i" para que indique el valor correcto*/
        index=i;
        /**pongo el break para que no siga iterando el resto de las cosas , asi una vez que lo encuntra ya esta*/
        /**El break "Rompe la estructura repetitiva"*/
        break;

         }

    }
 return index;
}

