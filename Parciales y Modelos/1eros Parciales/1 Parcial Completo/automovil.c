#include "automovil.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define OCUPADO 0
#define LIBRE 1
#define ALPHA_ROMEO 3
#define FERRARI 4
#define AUDI 5
#define FORD 6

void inicializarAutomovilHardCode(eAutomovil Automovil [])
{
    int id[]= {1,2,3,4,5,6,7,8,9,10};
    char patente[][20]= {"AAA","CCC","DDD","BBB","ZZZ","III","HHH","EEE","FFF","GGG"};
    int marca[]= {3,3,4,5,6,6,3,4,5,4};
    int propietario[]= {2,1,2,1,3,3,4,1,4,3};
    char marcaChar[][20]={"Alpha Romeo","Alpha Romeo","Ferrari","Audi","Ford","Ford","Alpha Romeo","Ferrari","Audi","Ferrari"};


    int i;
    for(i=0; i<10; i++)
    {
        Automovil[i].marca=marca[i];
        Automovil[i].idPropietario=propietario[i];
        Automovil[i].estado=OCUPADO;
        Automovil[i].idAutomovil=id[i];
        strcpy(Automovil[i].Patente, patente[i]);
        strcpy(Automovil[i].marcaLetra, marcaChar[i]);
    }
}

int eAutomovil_init( eAutomovil listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idAutomovil= 0;
        }
    }
    return retorno;
}
int eAutomovil_buscarLugarLibre(eAutomovil listado[],int limite)
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


int eAutomovil_buscarLugar1(eAutomovil listado[],int limite)
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

int eAutomovil_siguienteId(eAutomovil listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idAutomovil>retorno)
                    {
                         retorno=listado[i].idAutomovil;
                    }
            }
        }
    }

    return retorno+1;
}


int eAutomovil_buscarPorId(eAutomovil listado[] ,int limite,int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idAutomovil == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

void eAutomovil_mostrarUno(eAutomovil parametro)
{
    int exceso;
     exceso=strlen(parametro.marcaLetra);
     if(exceso>10)
        {
          printf("\n %d\t-%s\t- %d\t-%s  \t-  %d   -   %d\n",parametro.idAutomovil,parametro.Patente,parametro.marca,parametro.marcaLetra,parametro.estado,parametro.idPropietario);
        }
     else if(exceso>5&&exceso<8)
        {

            printf("\n %d\t-%s\t- %d\t-%s \t  -%d       -%d\n",parametro.idAutomovil,parametro.Patente,parametro.marca,parametro.marcaLetra,parametro.estado,parametro.idPropietario);
        }
        else
        {

          printf("\n %d\t-%s\t- %d\t-%s  \t\t-  %d   -   %d\n",parametro.idAutomovil,parametro.Patente,parametro.marca,parametro.marcaLetra,parametro.estado,parametro.idPropietario);
        }
}

int eAutomovil_mostrarListado(eAutomovil listado[],int limite)
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

                eAutomovil_mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}

int eAutomovil_alta(eAutomovil listado[] ,int limite,int idPropietario)
{
    char auxiliarPatenteStr[50];
    char auxMarca[50];
    int idAutomovil;
    int marca;

    int indice;
    int retorno;


    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eAutomovil_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = 1;

            idAutomovil = eAutomovil_siguienteId(listado,limite);
            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
              if(!getPassword("Ingrese patente de auto (XXX 111) : ",auxiliarPatenteStr))
              {
                printf ("ERROR:Ingrese solo letras y numeros!! \n");
                return -2;
              }

              if(!getStringNumeros("Ingrese marca del auto (3-ALPHA,4-FERRARI,5-AUDI,6-FORD): \n",auxMarca))
              {
                  printf("Error ingrese solo numeros\n");
                  return -2;
              }

          marca=atoi(auxMarca);

          if(marca>=3&&marca<=6)
          {

              listado[indice].marca=marca;
              if(marca==3)
              {
                  strcpy(listado[indice].marcaLetra,"Alpha Romeo");
              }
              else if(marca==4)
              {
                  strcpy(listado[indice].marcaLetra,"Ferrari");
              }
              else  if (marca==5)
              {
                strcpy(listado[indice].marcaLetra,"Audi");
              }
              else{
                strcpy(listado[indice].marcaLetra,"Ford");
              }




          }
          else
          {
              printf("ERROR :Ingrese una de las marcas definidas\n");
              return -2;
          }



                listado[indice].idPropietario=idPropietario;
                listado[indice].idAutomovil=idAutomovil;

                 listado[indice].estado=OCUPADO;
                   strcpy(listado[indice].Patente,auxiliarPatenteStr);


                  // printf("us %d pro %d nom %s sto %d  est%d\n", listado[indice].idProducto, listado[indice].idProducto,listado[indice].nombre, listado[indice].stock,listado[indice].estado);

        }
        else{
            printf("No hay mas lugar para vehiculos \n");
            retorno =-2;
        }
    }
    return retorno;
}



