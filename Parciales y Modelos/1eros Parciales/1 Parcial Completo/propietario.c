#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "propietario.h"
#define OCUPADO 0
#define LIBRE 1
void inicializarPropietarioHardCode(ePropietario listado[])
{

     int id[]= {1,2,3,4};
    char nombre[][20]= { "Juan","Luis","Maria","Jose"};
    char tarjeta[][40]= {"111-111","222-222","333-333","444-444"};
    char direccion[][20]= {"mitre","urquiza","belgrano","alsina"};
    char apellido[] [20]={"gomez","villalba","villamayor","prado"};



    int i;

    for(i=0; i<4; i++)
    {
        listado[i].idPropietario=id[i];
        listado[i].estado=OCUPADO;
        strcpy(listado[i].Nombre, nombre[i]);
        strcpy(listado[i].apellido, apellido[i]);
        strcpy(listado[i].direccion, direccion[i]);
        strcpy(listado[i].tarjeta, tarjeta[i]);

    }
}


int ePropietario_init( ePropietario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idPropietario= 0;
        }
    }
    return retorno;
}


int ePropietario_buscarPorId(ePropietario listado[] ,int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idPropietario== id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}
void ePropietario_mostrarUno(ePropietario parametro)
{

     printf("\n%d \t - %s \t - %s \t - %s \t - %s \t -%d\n",parametro.idPropietario,parametro.Nombre,parametro.apellido,parametro.direccion,parametro.tarjeta,parametro.estado);

}

int ePropietario_siguienteId(ePropietario listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idPropietario>retorno)
                    {
                         retorno=listado[i].idPropietario;
                    }
            }
        }
    }

    return retorno+1;
}


int ePropietario_buscarLugarLibre(ePropietario listado[],int limite)
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


int ePropietario_mostrarListado(ePropietario listado[],int limite)
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

                ePropietario_mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}


int ePropietario_mostrarListadoConBorrados(ePropietario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==LIBRE)
            {
                printf("\n[1]");
            }
            ePropietario_mostrarUno(listado[i]);
        }
    }
    return retorno;
}




int ePropietario_alta(ePropietario  listado[],int limite)
{
    char auxiliarNombreStr[50];
    char auxiliarApellidoStr[50];
    char auxiliarDireccionStr[50];
    char auxTarjetaString[50];

    int retorno = -2;

    int indice;
    int id;

    if(limite > 0 && listado != NULL)
    {
        retorno = -1;
        indice = ePropietario_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;

            id = ePropietario_siguienteId(listado,limite);

              if(!getStringLetras("Ingrese  nombre de propietario : ",auxiliarNombreStr))
              {
                printf ("ERROR:Ingrese solo letras!! \n");
                return -2;
              }

               if(!getStringLetras("Ingrese  apellido de propietario : ",auxiliarApellidoStr))
              {
                printf ("ERROR:Ingrese solo letras!! \n");
                return -2;
              }
               if(!getPassword("Ingrese  direccion de propietario (letras y numeros) : ",auxiliarDireccionStr))
              {
                printf ("ERROR:Ingrese solo letras y numeros !! \n");
                return -2;
              }

              if(!getTarjeta("Ingrese el numero de la tarjeta (XXX-XXX): ",auxTarjetaString))
              {
                  printf("Error: ingrese un valor correcto para la tarjeta\n ");
                  return -2;
              }

               listado[indice].idPropietario=id;
               listado[indice].estado = OCUPADO;
               strcpy(listado[indice].Nombre,auxiliarNombreStr);
               strcpy(listado[indice].apellido,auxiliarApellidoStr);
               strcpy(listado[indice].direccion,auxiliarDireccionStr);
                strcpy(listado[indice].tarjeta,auxTarjetaString);

                //printf("%s %d %d ",listado[indice].descripcion,listado[indice].codigoPropietario,listado[indice].estado);

        }
    }
    return retorno;
}




int ePropietario_modificacion( ePropietario listado[] ,int limite )
{
    char auxId[50];
    char auxTarjetaStr[50];
    char auxOpcion[50];
    int id;

    //int id;
    int indice;
    int opcion;

                if(!getStringNumeros(" \nIngrese el id a modificar: ",auxId))
                {
                    printf("ERROR:Ingrese un valor numerico!!\n");
                    indice= -2;
                }

                id=atoi(auxId);
               indice=ePropietario_buscarPorId(listado,limite,id);

               if (indice>=0)
               {
                  if (!getTarjeta("Ingrese el nuevo numero de tarjeta(guion) :",auxTarjetaStr))
                   {
                       printf("Error , ingrese un valor numerico indicado \n");
                       return -2;
                   }

                    if(!getStringNumeros("Seguro desea modificar ? 1-si 2-no \n",auxOpcion))
                    {
                        printf("ERROR: Ingrese un valor numerico :\n");
                         return -2;
                    }
                    opcion=atoi(auxOpcion);
                    if(opcion==1)
                    {
                        strcpy(listado[indice].tarjeta,auxTarjetaStr);
                    }
                    else{
                        printf("Modificacion cancelada \n");
                        indice=-2;
                    }
               }
               else
               {
                   printf("Ingrese un id correcto\n");
                   indice=-2;
               }
         return indice;
    }


    int ePropietario_baja( ePropietario listado[] ,int limite )
{
    char auxId[50];
    char auxOpcionStr[50];
    int opcion;

    int indice;
    int id;

       if(!getStringNumeros(" \nIngrese el id a dar de baja: ",auxId))
                {
                    printf("ERROR:Ingrese un valor numerico!!\n");
                    indice=-2;
                }

                id=atoi(auxId);
               indice=ePropietario_buscarPorId(listado ,limite,id);
               if (indice>=0)
               {

    if(!getStringNumeros("Seguro que desea dar de baja el usuario ?  1-si 2-no \n",auxOpcionStr))
    {
        printf("ERROR:Ingrese solo numeros\n");
        return -2;
    }
    opcion=atoi(auxOpcionStr);
    if(opcion==1)
    {
        listado[indice].estado=LIBRE;
    }
    else{
            printf("\nBaja cancelada\n");
        return -2;
    }
               }
    else{

        printf("Ingrese un id de correcto\n");
    }
 return indice ;
}




