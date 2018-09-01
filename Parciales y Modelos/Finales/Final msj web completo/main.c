#include <stdio.h>
#include <stdlib.h>
#include"mensajes.h"

int main()
{

    int opcion;
    char auxopcion[20];
    FILE* archivo;
    ArrayList* listaLog;
    ArrayList* listaService;

    listaLog=al_newArrayList();
    listaService=al_newArrayList();



    do{
        printf("1-Leer Log\n2-Procesar Informacion\n3-Mostrar estadistica\n4-\n5-\n6-Salir\n");
        opcion=getValidInt("Ingrese una opcion: ","Error, ingrese un valor numerico",auxopcion);
        switch(opcion)
        {
        case 1:
            parserReadLog(archivo,listaLog);
           parserReadService(archivo,listaService);
            mostrarListaLog(listaLog);
           printf("\n");
           mostrarListaService(listaService);

            break;
        case 2:
            procesarInfo(listaLog,listaService);

            break;

        case 3:
               mostrarEstadistica(listaLog,listaService);
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
               printf("\nPrograma Finalizado\n");
            break;
        default:
            printf("ERROR:Ingrese una de las opciones indicadas!\n");
            break;
        }
        system("pause");
        system("cls");
    }while(opcion!=6);
    return 0;
}
