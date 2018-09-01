#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "usuario.h"
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1
void inicializarUsuarioHardCode(eUsuario usuario[])
{

    int id[5] = {1,2,3,4,5};
    char nombre[][50]={"ema","pepe","Gonza","Juan","jony"};
    char password[][50]={"eclipse","mesada","pollo","123bus","filadelfia"};


    int i;

    for(i=0; i<5; i++)
    {
        usuario[i].idUsuario=id[i];
        usuario[i].estado= OCUPADO;
        strcpy(usuario[i].nombre, nombre[i]);
        strcpy(usuario[i].password,password[i]);

    }
}


int eUsuario_init( eUsuario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idUsuario= 0;
        }
    }
    return retorno;
}

int eUsuario_buscarLugar1(eUsuario listado[],int limite)
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

int eUsuario_siguienteId(eUsuario listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idUsuario>retorno)
                    {
                         retorno=listado[i].idUsuario;
                    }
            }
        }
    }

    return retorno+1;
}


int eUsuario_buscarPorId(eUsuario listado[] ,int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idUsuario == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}



void eUsuario_mostrarUno(eUsuario parametro)
{

     printf("\n %s   - %d    - %d",parametro.nombre,parametro.idUsuario,parametro.estado);

}

int eUsuario_mostrarListado(eUsuario listado[],int limite)
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

                eUsuario_mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}


int eUsuario_mostrarListadoConBorrados(eUsuario listado[],int limite)
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
            eUsuario_mostrarUno(listado[i]);
        }
    }
    return retorno;
}




int eUsuario_alta(eUsuario  listado[],int limite)
{
    char auxiliarNombreStr[50];
    char auxPassword[50];

    int retorno = -2;

    int indice;
    int id;

    if(limite > 0 && listado != NULL)
    {
        retorno = -1;
        indice = eUsuario_buscarLugar1(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;

            id = eUsuario_siguienteId(listado,limite);


              if(!getStringLetras("Ingrese nombre de usuario : ",auxiliarNombreStr))
              {
                printf ("ERROR:Ingrese solo letras!! \n");
                return -2;
              }
             if(!getPassword("Ingrese password : ",auxPassword))
                {
                    printf ("ERROR:Ingrese solo letras y numeros !! \n");
                    return -2;
                }

               listado[indice].idUsuario=id;
               listado[indice].estado = OCUPADO;
               strcpy(listado[indice].password,auxPassword);
               strcpy(listado[indice].nombre,auxiliarNombreStr);


        }
    }
    return retorno;
}


int eUsuario_modificacion( eUsuario listado[] ,int limite )
{
    char auxId[50];
    char auxOpcionStr[50];
    char auxNombreStr[50];
    char auxPassword[50];
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
               indice=eUsuario_buscarPorId(listado,limite,id);

               if (indice>=0)
               {

                   if(!getStringNumeros("Que desea modificar? 1-Nombre 2-Contraseña\n",auxOpcionStr))
                   {
                       printf("ERROR:Ingrese un valor numerico\n");
                       return -2;
                   }
                   opcion=atoi(auxOpcionStr);
                   if(opcion==1)
                   {
                      if(!getStringLetras("Ingrese el nuevo nombre : ",auxNombreStr))
                         {
                             printf("ERROR:Ingrese solo letras !!\n");
                             return -2;
                         }
                    strcpy(listado[indice].nombre,auxNombreStr ) ;
                   }
                    else if(opcion==2)
                   {
                      if(!getPassword("Ingrese la nueva contraseña : ",auxPassword))
                         {
                             printf("ERROR:Ingrese solo letras y numeros !!\n");
                             return -2;
                         }
                    strcpy(listado[indice].password,auxPassword ) ;
                   }
                   else{

                    printf("Debe elegir una de las opciones indicadas ");
                   }
               }
         return indice;
    }



int eUsuario_baja( eUsuario listado[] ,int limite )
{
    char auxId[50];
    char auxOpcionStr[1];

    int indice;
    int id;

       if(!getStringNumeros(" \nIngrese el id a dar de baja: ",auxId))
                {
                    printf("ERROR:Ingrese un valor numerico!!\n");
                    indice=-2;
                }

                id=atoi(auxId);
               indice=eUsuario_buscarPorId(listado ,limite,id);
               if (indice>=0)
               {

    if(!getStringLetras("Seguro que desea dar de baja el usuario s/n?",auxOpcionStr))
    {
        printf("ERROR:Ingrese solo letras\n");
        return -2;
    }
    if(auxOpcionStr[0]=='s')
    {
        listado[indice].estado=LIBRE;
    }
    else{
            printf("\nBaja cancelada\n");
        return -2;
    }
               }
    else{

        printf("Ingrese una de las opciones indicadas\n");
    }

 return indice ;


}





void eUsuario_ordenar(eUsuario usuario [] ,int limite)
{
    int i,j;
    eUsuario aux;
       for(i=0; i < limite - 1; i++)
                {
                    if(usuario[i].estado == OCUPADO)
                    {
                        continue;
                    }
                    for(j=i+1; j < limite; j++)
                    {
                        if(usuario[i].estado == OCUPADO)
                        {
                            continue;
                        }
                        if(strcmp(usuario[j].nombre,usuario[i].nombre)>0)
                        {
                          aux = usuario[j];
                           usuario[j] = usuario[i];
                            usuario[i] = aux;
                        }
                    }
                }
}
