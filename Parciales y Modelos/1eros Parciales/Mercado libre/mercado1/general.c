#include "general.h"
#include <ctype.h>
#include <stdlib.h>
#define OCUPADO 0
#define LIBRE 1


int eUsuario_publicarProducto(eUsuario usuario [] ,int limiteUsuario ,eProducto producto[],int limiteProducto)
{
    char auxId[20];
    int id;
    int indice;
    int alta;
    int retorno;
      retorno=eProducto_buscarLugarLibre(producto,limiteProducto);
      if(retorno!=-2)
      {


    if(!getStringNumeros("\nIngrese el id de usuario : ",auxId))
    {
        printf("Error ,ingrese un valor numerico\n");
        return -2;
    }
    id=atoi(auxId);
    indice=eUsuario_buscarPorId(usuario,limiteUsuario,id);

    if(indice>=0)

      {


      alta=eProducto_alta(producto,limiteProducto,id);

          if (alta==-2){
             indice=-2;
          }
          else if(alta==-1)
          {
          indice =-1;
          }
          else{
            indice=0;
          }
      }
      else{
        printf("Usuario no encontrado\n");
        indice=-2;
      }
      }
      else
      {
          indice=-3;
      }
return indice;
}




int eProducto_mostrarProductosUsuario(eProducto listadoPro [] ,int limitePro,eUsuario listadoUsu[],int limiteUsu )
{
    int i ;
    int j;
   // printf("\n Idproducto nombre stock estado  precio Id usuario\n");




    for(i=0;i<limitePro;i++)
        if (listadoPro[i].estado==OCUPADO)
    {
        for(j=0;j<limiteUsu;j++)
        {
            if(listadoUsu[j].estado==OCUPADO)
            {
                 if (listadoPro[i].idUsuario==listadoUsu[j].idUsuario)
               {
                   // printf("\n  Id Producto  Nombre   Precio     Stock   Cantvendida  Nombre Usuario\n");
                    printf("\n      %d       - %s      %.2f   -     %d        - %d         - %s  \n",listadoPro[i].idProducto,listadoPro[i].nombre,listadoPro[i].precio,listadoPro[i].stock,listadoPro[i].cantVendida,listadoUsu[j].nombre);
               }
            }
        }

    }
    return 1;
}



int eUsuario_modificarProducto(eUsuario usuario [] ,int limiteUsuario ,eProducto producto[],int limiteProducto)
{
    char auxId[20];
    char auxidproducto[20];
    char auxopcion[20];
    char auxprecio[20];
    char auxstock[20];
    int id;
    int idProducto;
    int indice=-3;
    float precio;
    int indiceproducto;
    int opcion;
    int stock;



    if(!getStringNumeros("\nIngrese el id de usuario : ",auxId))
    {
        printf("Error ,ingrese un valor numerico\n");
        return -2;
    }
    id=atoi(auxId);
    indice=eUsuario_buscarPorId(usuario,limiteUsuario,id);

    if(indice>=0)

      {

       printf("\n Idproducto  nombre  precio  stock  cant vendida \n");
       mostrarUsuarioproductos( producto,limiteProducto ,id);
       if(!getStringNumeros("Ingrese el id de producto a modificar : ",auxidproducto))
       {
       printf("ERROR:Ingrese un valor numerico\n");
       return -2;
       }
       idProducto=atoi(auxidproducto);

       indiceproducto=eProducto_buscarPorId(producto,limiteProducto,idProducto);
       if(indiceproducto>=0)
       {
           if(!getStringNumeros("Que desea modificar :1-Precio 2-Stock",auxopcion))
           {
               printf("ERROR:Ingrese un valor numerico");
               return -2;
           }
           opcion=atoi(auxopcion);
           if(opcion==1)
           {
               if(!getStringNumerosFlotantes("Ingrese nuevo precio : ",auxprecio))
               {
               printf("ERROR: Ingrese un valor numerico ");
               return -2;
               }
               precio=atof(auxprecio);
               producto[indiceproducto].precio=precio;
               indice=indiceproducto;

           }

           else if (opcion==2)
           {
               if(!getStringNumeros("Ingrese el nuevo stock : ",auxstock))
               {
                   printf("ERROR:Ingrese un valor numerico");
                   return -2;
               }
               stock=atoi(auxstock);
               producto[indiceproducto].stock=stock;
               indice=indiceproducto;
           }
           else{
            printf("ERROR:Ingrese una de las opciones indicadas");
            return -2;
           }
       }
       else{
          indice=-3;
       }

      }

       else{
       indice=-3;
       }
return indice;
}
int eUsuario_bajaproducto(eUsuario usuario[] ,int limiteUsuario ,eProducto producto[],int limiteProducto)
{

char auxId[50];
char auxidproducto[50];
char auxopcion[50];

//char opcion;
int id;
int indice;
int indiceproducto;
int idProducto;


     if(!getStringNumeros("\nIngrese el id de usuario : ",auxId))
    {
        printf("Error ,ingrese un valor numerico\n");
        return -2;
    }
    id=atoi(auxId);
    indice=eUsuario_buscarPorId(usuario,limiteUsuario,id);


    if(indice>=0)

      {

       printf("\n Idproducto  nombre  precio  stock  \n");
       mostrarUsuarioproductos( producto,limiteProducto ,id);
       if(!getStringNumeros("Ingrese el id de producto a dar de baja : ",auxidproducto))
       {
       printf("ERROR:Ingrese un valor numerico\n");
       return -2;
       }
       idProducto=atoi(auxidproducto);

       indiceproducto=eProducto_buscarPorId(producto,limiteProducto,idProducto);
       if(indiceproducto>=0)
       {

          if(!getStringLetras("Seguro que desea dar de baja?s/n",auxopcion))
           {
               printf("ERROR:Ingrese un valor numerico");
               return -2;
           }
             //opcion=atoi(auxopcion);
             if (auxopcion[0]=='s')
             {
                 producto[indiceproducto].estado=LIBRE;
             }
             else
             {
                 printf("Baja de producto cancelada");
                 return -2;
             }


       }
        else{

            indice=-3;
        }
    }
    else{

        indice=-3;
    }
    return indice;
}


int mostrarUsuarioproductos(eProducto listadoPro [],int limiteProducto ,int idUsuario)
{
    int i;
  for(i=0;i<limiteProducto;i++)
        {
            if(listadoPro[i].estado==OCUPADO)
            {
                 if (listadoPro[i].idUsuario==idUsuario)
               {

                    printf("\n      %d    - %s     %.2f   -   %d  - %d   \n",listadoPro[i].idProducto,listadoPro[i].nombre,listadoPro[i].precio,listadoPro[i].stock,listadoPro[i].cantVendida);
               }
            }


        }
return 1;
}





int mostrarUsuarioprodutoeleccion(eUsuario usuario[] ,int limiteUsuario,eProducto producto [],int limiteProducto)
 {


 int indice;
 char auxId[50];
 int id;

 if(!getStringNumeros("\nIngrese el id de usuario : ",auxId))
    {
        printf("Error ,ingrese un valor numerico\n");
        return -2;
    }
    id=atoi(auxId);
    indice=eUsuario_buscarPorId(usuario,limiteUsuario,id);

    if(indice>=0)

      {
       printf("\n Idproducto  nombre  precio  stock  cant vendida \n");
       mostrarUsuarioproductos( producto,limiteProducto ,id);
      }
     else{
        indice=-1;
     }
return indice;
}
