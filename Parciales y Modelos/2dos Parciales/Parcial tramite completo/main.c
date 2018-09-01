#include <stdio.h>
#include <stdlib.h>
#include "Tramite.h"
#include "Arraylist.h"


int main()
{

  char auxopcion[20];
  int opcion;

  ArrayList* pendientesUrgente;
  ArrayList* pendientesRegular;
  ArrayList* atendidosUrgente;
  ArrayList* atendidosRegular;
  eTramite* tramite;

  pendientesUrgente=al_newArrayList();
  pendientesRegular=al_newArrayList();
  atendidosUrgente=al_newArrayList();
  atendidosRegular=al_newArrayList();


    do{
      printf("1-Tramite Urgente\n2-Tramite Regular\n3-Proximo cliente\n4-Listar Pendiente\n5-Informar atendidos\n6-Salir\n");
      opcion=getValidInt("Ingrese una opcion: ","Error,reingrese opcion",auxopcion);


    switch(opcion)
    {
    case 1:

       if(cargarTramite( pendientesUrgente))
       {
           printf("Turno Cargado (URGENTE)\n");

       }
        break;

    case 2:
        if(cargarTramite(pendientesRegular))
        {
            printf("Turno Cargado (REGULAR)\n");
        }

        break;
    case 3:
        if(!pendientesUrgente->isEmpty(pendientesUrgente))
        {
            printf("Cliente a ser atendido (URGENTE):");
            atenderTramite(pendientesUrgente,atendidosUrgente);
        }
        else
        {
             if(!pendientesRegular->isEmpty(pendientesRegular))
              {
               printf("Cliente a ser atendido (REGULAR):");
               atenderTramite(pendientesRegular,atendidosRegular);
              }
              else
              {
                  printf("No hay usuarios para mostrar\n");
              }

        }

        break;
    case 4:
        if(!pendientesUrgente->isEmpty(pendientesUrgente)) /**Si no esta vacio entra*/
         {
          printf("\nTramites urgentes\n");

          mostraListaTramites(pendientesUrgente);
         }
       if(!pendientesUrgente->isEmpty(pendientesRegular))
        {
          printf("\nTramites regulares\n");

         mostraListaTramites(pendientesRegular);
        }

        break;

    case 5:

         if(!atendidosUrgente->isEmpty(atendidosUrgente))
         {
           atendidosUrgente->sort(atendidosUrgente,compararPorDni,1);

           printf("\nTramites urgentes\n");

           mostraListaTramites(atendidosUrgente);
         }

       if(!atendidosRegular->isEmpty(atendidosRegular))
       {

          atendidosRegular->sort(atendidosRegular,compararPorDni,1);

          printf("\nTramites regulares\n");

          mostraListaTramites(atendidosRegular);
        }

        break;
    case 6:
        printf("Goodbay!!\n");
        break;

    default:
        printf("Error,Ingrese una de las opciones indicadas\n");
        break;
    }
  system("pause");
  system("cls");

   }while(opcion!=6);

    return 0;
}
