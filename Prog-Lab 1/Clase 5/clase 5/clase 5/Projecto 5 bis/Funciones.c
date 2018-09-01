#include "Funciones.h"
#include "stdio.h"
void cargarVector(int vect[],int tamanio)
    {
        int i;
        for(i=0;i<tamanio ;i++)

        {
    printf("ingrese un numero: ");
    scanf ("%d",&vect[i]);
                }
    }
/***************************************************/
int Maximo(int vect[],int tamanio)
{
    int maximo;
    int flag=0;
    int i;
    /*uso un for para que recorra el vector*/
    for (i=0;i<tamanio;i++)
    {
        if (flag==0 ||vect[i]>maximo)
        {
            maximo=vect[i];
            flag=1;
                 }


    }
      return maximo;
}
/***************************************************************/
void mostrarVector(int vector[],int tamanio)
{
    int i;
    for (i=0;i<tamanio;i++)
    {
        printf("INDICE %d-----VALOR %d\n",i+1,vector[i]);
    }
}

/********************************************************************/
void modificarValor(int vec [])
{
    //va a modificar tambien en el main y lo modifica por "referencia"
    vec[3]=789;


}

/************************************************************************/
int buscarValor (int vector [],int tam,int valor)
{
    //LO inicializamos en menos(- 1) para que sepamos que no encontre el numero
int index=-1;
int i;
for (i=0;i<tam;i++)
{
if (valor==vector[i])
    {
        index=i;
        //corta estructura repetitiva
        break;
    }
}
return index;
}
/**EN EL MAIN SE TIENE QUE REALIZAR UN IF/ELSE PARA QUE COMPRUEBE LA BANDERA DE EL
RESULTADO SI DIO "-1" O SI DIO -EL MISMO VALOR QUE "VALOR"-*/





