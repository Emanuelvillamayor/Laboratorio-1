#include <stdio.h>
#include <string.h>
#include "Usuario.h"


void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
/*****************************************************************************************************************/
void inicializarUsuariosHardCode(eUsuario usuarios[])
{

    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Rocio","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102 ,100,100,103,101,102,103,101,100,100,101};

    int i;
    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado= 1;
        strcpy(usuarios[i].nombre, nombre[i]);
    }
}
/*****************************************************************************************************************/
void mostrarListaUsuarios(eUsuario usuarios[], int tam)
{
    int i ;

    for (i=0;i<tam;i++)
    {
        if (usuarios[i].estado==1)
        {
           printf("%d  %s  %d \n",usuarios[i].idUsuario,usuarios[i].nombre,usuarios[i].idSerie);
        }
    }
}

/*****************************************************************************************************************/

/**--------------------------COMO BUSCAR DATOS DESDE UNA TABLA HACIA OTRA TABLA-------------------------------------*/

void mostrarUsuarioConSuSerie(eUsuario usuarios [], int tamU, eSerie series [], int tamS)
{
    int i ;
    int j;
for (i=0;i<tamU;i++) //comparar el id de serie con el id del usuario y hago dos for
{
 if (usuarios[i].estado==1) //validacion para que no siga iterando si el espacio esta vacio
{


    for(j=0;i<tamS;j++)
    {

         if (series[j].estado==1) // validacion para que no siga iterando si el espacio esta vacio
         {



    if (usuarios[i].idSerie==series[j].idSerie)
    {

        printf("%d %s %s \n",usuarios[i].idUsuario,usuarios[i].nombre,series[j].nombre);
        break;

    }
}
}
}

}
}







/*******************************************************************************************************/

void mostrarSerieConUsuario(eSerie series [], int tamS, eUsuario usuarios[], int tamU)
{
    int i ;
    int j;
    for(i=0;i<tamS;i++)
        if (series[i].estado==1)
    {
        for(j=0;j<tamU;j++)
        {
            if(usuarios[j].estado==1)
            {
                 if (series[i].idSerie==usuarios[j].idSerie)
               {

                    printf("%d %s %s \n",series[i].idSerie,series[i].nombre,usuarios[j].nombre);
               }
            }
        }

    }
}
