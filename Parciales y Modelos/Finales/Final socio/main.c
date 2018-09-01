#include <stdio.h>
#include <stdlib.h>
#include"persona.h"

int main()
{
    int opcion;
    char auxopcion[20];

    ArrayList* lista;
    lista=al_newArrayList();

    do{
        printf("1-Ordenar array\n2-Guardar\n3-\n4-\n5-\n6-\n7-Salir\n");
        opcion=getValidInt("Ingrese una opcion: ","Error, ingrese un valor numerico",auxopcion);
        switch(opcion)
        {
        case 1:




            break;
        case 2:
           guardarArchivo(lista);
            break;

        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:
            printf("\nPrograma Finalizado\n");
            break;
        default:
            printf("ERROR:Ingrese una de las opciones indicadas!\n");
            break;
        }

        system("pause");
        system("cls");
    }while(opcion!=7);

    return 0;
}






