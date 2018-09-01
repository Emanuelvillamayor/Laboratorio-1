#include <stdio.h>
#include <stdlib.h>
#include "Arraylist.h"
#include "correo.h"
#include <string.h>

int main()
{
     char auxNombrearchivo[50];

     FILE* archivo;

     ArrayList* listaDestinatarios;
     ArrayList* listaBlack;
     ArrayList* listaFiltro;


     listaDestinatarios=al_newArrayList();
     listaBlack=al_newArrayList();
     listaFiltro=al_newArrayList();

    int opcion;
    char auxopcion[20];

  do{
    printf("1-Cargar Destinatarios\n2-Cargar Lista Negra\n3-Depurar\n4-Listar\n5-Listar Destinatarios\n6-Listar Black list\n7-Salir\n");
   opcion=getValidInt("Ingrese una opcion: ","Error,reingrese opcion",auxopcion);


    switch(opcion)
    {
    case 1:
        printf("Ingrese el nombre del archivo Destinatarios (.csv): ");
        fflush(stdin);
        gets(auxNombrearchivo);
        parserCorreo(archivo,listaDestinatarios,auxNombrearchivo);
    break;

    case 2:
        printf("Ingrese el nombre del archivo Black List (.csv): ");
       fflush(stdin);
        gets(auxNombrearchivo);
        parserCorreo(archivo,listaBlack,auxNombrearchivo);
    break;

    case 3:
     depurarListas(listaDestinatarios,listaBlack,listaFiltro);

    break;

    case 4:
      printf("Lista Filtrados: \n");
      printf("ID----Nombre---------Mail\n");
      mostrarLista(listaFiltro);
      parserCorreoWrite(archivo,listaFiltro,"filtrados.csv");


    break;

    case 5:
      printf("Lista Destinatarios: \n");
      printf("ID----Nombre---------Mail\n");
      mostrarLista(listaDestinatarios);
    break;

    case 6 :
      printf("Lista Black:         \n");
      printf("ID----Nombre---------Mail\n");
      mostrarLista(listaBlack);

    break;

    case 7:

    break;
    }
    system("pause");
    system("cls");

   }while(opcion!=7);


    return 0;
}
