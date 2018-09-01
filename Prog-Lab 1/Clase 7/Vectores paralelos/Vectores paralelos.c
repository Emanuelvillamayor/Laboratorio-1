#include "vectores paralelos.h"
#include "stdio.h"
/** calcula promedio de las dos notas */
float promedio(int nota1,int nota2)
{
    float prom;
          /** se CASTEA  para que devuelva un flotante*/
    prom=(float)(nota1+nota2)/2;

    return prom;
}
/**necesito mostrar todo el listado en los vectores entonces pongo "[]"*/
void mostrarAlumnos(int legajo[],char nombre[][30],int nota1[],int nota2[] ,float prom[])
{
    int i ;
    for (i=0;i<3;i++)
{
printf("legajo: %d \n nombre : %s \n nota1 : %d \n nota2 : %d \n promedio : %.2f \n",legajo[i],nombre[i],nota1[i],nota2[i],prom[i]);
}
}


/** tarea : 1 funcion que reciba el vector de legajos , el tamaño de vector de legajos y que reciba 1 numero de legajo
va a devolver el indice del legajo o -1 , si esta me devulve el indice y si no -1*/



int buscarLegajo(int veclegajo[],int cantidad,int legajo )
{
     /**lo inicializo en -1 para que cambie el valor si es correcto o sino ya salta -1*/
    int index=-1;
    int i;
    for(i=0;i<cantidad;i++)
    {

    if (veclegajo[i]==legajo)
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
