#include "egreso.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define OCUPADO 0
#define LIBRE 1

void inicializarEgresoHardCode(eEgreso Egreso [])
{
    int idEgreso[]={1,2,3,4,5,6,7,8,9,10};
    int marcaEgreso[]={3,3,4,5,6,6,3,4,5,4};
    float importeEgreso[]={100,200,100,300,100,100,200,200,100,100};
    int i;
    for(i=0; i<10; i++)
    {
       Egreso[i].marca=marcaEgreso[i];
        Egreso[i].estado=OCUPADO;
        Egreso[i].idEgreso=idEgreso[i];
        Egreso[i].importe=importeEgreso[i];

    }
}
int devolverHorasEstadia()
{
    int horas;

    srand(time(NULL));

    horas = (rand()%24)+1;

    return horas ;
}

int precioHoras(int horas,int marca)
{
    int retorno;

    switch(marca)
    {
    case 3:
    retorno=horas*150;
    break;

    case 4:
    retorno=horas*175;
    break;

    case 5:
    retorno=horas*200;
    break;

    case 6:
    retorno=horas*250;
    break;
    }
    return retorno;
}

int eEgreso_buscarLugarLibre(eEgreso listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}
int eEgreso_init(eEgreso listado [] ,int limite )
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idEgreso= 0;
        }
    }
    return retorno;
}

int eEgreso_siguienteId(eEgreso listado [] ,int limite)
    {
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idEgreso>retorno)
                    {
                         retorno=listado[i].idEgreso;
                    }
            }
        }
    }

    return retorno+1;
}


void mostrarRecaudacionTotal(eEgreso egreso [],int limite)
{
    int i;
    int total=0;
    for(i=0;i<limite;i++)
    {
        if(egreso[i].estado==OCUPADO)
        {

            total=egreso[i].importe+total;
        }
    }

    printf("Recaudacion Total : $ %d\n",total);
}

void mostrarRecaudacionMarca(eEgreso egreso [],int limite)
{
    int i ;
    int totalAlpha=0;
    int totalFerrari=0;
    int totalAudi=0;
    int totalFord=0;
    for(i=0;i<limite;i++)
    {
        if(egreso[i].estado==OCUPADO)
        {
            if(egreso[i].marca==3)
            {
                totalAlpha=totalAlpha+egreso[i].importe;
            }
            else if (egreso[i].marca==4)
            {
                totalFerrari=totalFerrari+egreso[i].importe;
            }
            else if(egreso[i].marca==5)
            {
                totalAudi=totalAudi+egreso[i].importe;
            }
            else
            {
                totalFord=totalFord+egreso[i].importe;
            }
        }
    }

    printf("Total de Alpha Romeo :$ %d\n",totalAlpha);
    printf("Total de Ferrari :$ %d\n",totalFerrari);
    printf("Total de Audi:$ %d\n",totalAudi);
    printf("Total de Ford: %d\n",totalFord);
}
