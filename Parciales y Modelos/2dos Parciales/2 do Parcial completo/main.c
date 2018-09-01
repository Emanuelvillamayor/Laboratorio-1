#include <stdio.h>
#include <stdlib.h>

#include "persona.h"

int main()
{

    int opcion;
    char auxopcion[20];
    ArrayList* lista;
    ArrayList* listaFiltrados;
    FILE* archivo;

    lista=al_newArrayList();
    listaFiltrados=al_newArrayList();




    do{
        printf("1-Cargar lista\n2-Filatrado\n3-Crear archivo filtrados\n4-\n5-\n6-\n7-Salir\n");
        opcion=getValidInt("Ingrese una opcion: ","Error, ingrese un valor numerico",auxopcion);
        switch(opcion)
        {
        case 1:
             parserCorreo(archivo,lista);
             listarPersona(lista);
            break;
        case 2:
             listaFiltrados=al_filter(lista,functionFilter);
             if(listaFiltrados!=NULL )
             {
                 if(al_isEmpty(listaFiltrados))
                 {
                     printf("Lista vacia!\n");
                 }
                 else{
                   printf("Lista de filtrados creada con exito!!\n");
                   listarPersona(listaFiltrados);
                 }
             }
             else{
                printf("Lista no creada!\n");
             }
            break;
        case 3:
                if(al_isEmpty(listaFiltrados))
                {
                    printf("Archivo vacio\n");
                }
                else
                {
                    parserPersonaWrite(archivo,listaFiltrados);
                }
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
