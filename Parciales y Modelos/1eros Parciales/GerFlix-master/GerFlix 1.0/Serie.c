
#include "Serie.h"
#include <stdio.h>
#include <string.h>
/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}

/***************************************************************************************************************/
void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

/******************************************************************************************************************/
void mostrarListaSeries(eSerie serie [], int tam)
{
     int i ;
for(i=0;i<tam;i++)
{
    /**Para que no lea los estados que estan en "0" es decir los que tiene basura y no los muestre*/
    if (serie[i].estado==1)
    {
    printf("%d  %s %s %d\n",serie[i].idSerie,serie[i].nombre,serie[i].genero,serie[i].cantidadTemporadas);

    }
}

}

/******************************************************************************************************************/
/*
void mostrarSerieConUsuario(eSerie series [], int tamS, eUsuario usuarios[], int tamU)
{
    int i ;
    int j;
    for(i=0;i<tamS;i++)
        if (series[i]==1)
    {
        for(j=0;j<tamU;j++)
        {
            if(usuarios[j]==1)
            {
                 if (series[i].idSerie==usuarios[j].idSerie)
    {

        printf("%d %s %s \n",series[i].idSerie,series[i].nombre,usuarios[j].nombre);
        break;

    }
            }
        }






}


*/
