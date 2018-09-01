#include "producto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1
void inicializarProductoHardCode(eProducto producto [])
{

    int id[5] = {1,2,3,4,5};
    char nombre[][50]= {"vaso","mesa","planta","cordon","auto"};
    int stock[5]={10,20,5,6,2};
    float precio[5]={20.5,10.20,200,50.5,65};
    int venta[5]={0,2,5,1,4};

    int usuario[5] = {1,2,3,4,5 };

    int i;
    for(i=0; i<5; i++)
    {
        producto[i].idProducto=id[i];
        producto[i].idUsuario=usuario[i];
        producto[i].estado= OCUPADO;
        producto[i].stock=stock[i];
        producto[i].cantVendida=venta[i];
        producto[i].precio=precio[i];
        strcpy(producto[i].nombre, nombre[i]);
    }
}

int eProducto_init( eProducto listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idProducto= 0;
        }
    }
    return retorno;
}
int eProducto_buscarLugarLibre(eProducto listado[],int limite)
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


int eProducto_buscarLugar1(eProducto listado[],int limite)
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

int eProducto_siguienteId(eProducto listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idProducto>retorno)
                    {
                         retorno=listado[i].idProducto;
                    }
            }
        }
    }

    return retorno+1;
}


int eProducto_buscarPorId(eProducto listado[] ,int limite,int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idProducto == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

void eProducto_mostrarUno(eProducto parametro)
{

     printf("\n %d    -     %s  -   %d - %d    - %.2f   - %d\n",parametro.idProducto,parametro.nombre,parametro.stock,parametro.estado,parametro.precio,parametro.idUsuario);

}

int eProducto_mostrarListado(eProducto listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==OCUPADO)
            {

                eProducto_mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}




int eProducto_alta(eProducto listado[] ,int limite,int idUsuario)
{
      char auxiliarNombreStr[50];
      char auxStock[50];
      char auxFloatStr[50];
      float auxFloat;
    int retorno = -1;
    int indice;
    int Stock;
    int idProducto;


    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eProducto_buscarLugar1(listado,limite);
        if(indice >= 0)
        {
            retorno = 1;

            idProducto = eProducto_siguienteId(listado,limite);
            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
              if(!getStringLetras("Ingrese nombre de producto: ",auxiliarNombreStr))
              {
                printf ("ERROR:Ingrese solo letras!! \n");
                return -2;
              }

              if(!getStringNumeros("Ingrese el stock ",auxStock))
              {
                  printf("Error ingrese solo numeros\n");
                  return -2;
              }
               Stock=atoi(auxStock);
               if(!getStringNumerosFlotantes("ingrese precio unitaro : ",auxFloatStr))
             {
                 printf("ERROR: Ingrese un valor numerico !!");
                 return -2;
             }
             auxFloat=atof(auxFloatStr);


                listado[indice].idUsuario=idUsuario;
                listado[indice].precio=auxFloat;
                 listado[indice].estado = OCUPADO;
                  listado[indice].idProducto=idProducto;
                  listado[indice].cantVendida=0;
                  strcpy(listado[indice].nombre,auxiliarNombreStr);
                   listado[indice].stock=Stock;
                  // printf("us %d pro %d nom %s sto %d  est%d\n", listado[indice].idProducto, listado[indice].idProducto,listado[indice].nombre, listado[indice].stock,listado[indice].estado);

        }
    }
    return retorno;
}


