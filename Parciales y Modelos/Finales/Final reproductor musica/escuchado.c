#include "escuchado.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


 eEscuchado* new_escuchado()
 {
     eEscuchado* retorno;
     retorno=(eEscuchado*) malloc(sizeof(eEscuchado));
     return retorno;
 }

 int escucharTema(ArrayList* listaUsuarios,ArrayList* listaTemas,ArrayList* listaEscuchados)
 {
     int auxId;
     char auxNick[100];
     char auxPassword[100];
     int retorno=-2;
     eUsuario* auxUsuario;
    if(listaUsuarios!=NULL && listaTemas!=NULL)
    {
        strcpy(auxNick,getValidChar("Ingrese el nick de usuario :","Error, reingrese nick : ",auxNick));

         auxUsuario=buscarUsuario(listaUsuarios,auxNick);
         if(auxUsuario!=NULL)
         {
            // strcpy(auxPassword,getValidAlphaNum("ingrese el password : ","Errore , reingrese password: ",auxPassword));
             printf("Ingrese el password : ");
             gets(auxPassword);
             if(strcmp(auxUsuario->password,auxPassword)==0)
             {
                mostrarListaTemas(listaTemas);
               // auxid=getValidInt("Ingrese id de cancion a escuchar : ","Error, reingrese datos",)
             }
             else
             {


                 printf("Error al ingreso de password\n");
             }
         }
         else
         {
             printf("Usuario no encontrado\n");
         }
    }
    return retorno;
 }

eUsuario* buscarUsuario(ArrayList* listaUsuario,char* usuario)
 {
     eUsuario* auxusuario;
     int i;
     int len;
     eUsuario* retorno=NULL;


     if(listaUsuario!=NULL && usuario!=NULL)
     {
         len=listaUsuario->len(listaUsuario);
         for(i=0;i<len;i++)
         {
             retorno=NULL;
             auxusuario=(eUsuario*)listaUsuario->get(listaUsuario,i);
             if(strcmp(auxusuario->nombre,usuario)==0)
             {
                 retorno=auxusuario;
                 break;
             }
         }
     }
     return retorno;
 }
