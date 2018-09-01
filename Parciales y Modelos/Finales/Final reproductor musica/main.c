#include <stdio.h>
#include <stdlib.h>
#include "escuchado.h"

int main()
{
    int opcion;
    char auxopcion[20];
    ArrayList* listaUsuarios;
    ArrayList* listaUsuariosNombre;
    ArrayList* listaTemas;
    ArrayList* listaEscuchados;
    ArrayList* listaNN;
    eUsuario* usuario;
     char caracter;


    listaUsuarios=al_newArrayList();
    listaUsuariosNombre=al_newArrayList();
    listaEscuchados=al_newArrayList();
    listaNN=al_newArrayList();

    listaTemas=al_newArrayList();



    cargarDesdeArchivo(listaUsuarios);
    cargarDesdeArchivoTema(listaTemas);


    do{
        printf("1-Listar usuarios\n2-\n3-\n4-\n5-\n6-\n7-Salir\n");
        opcion=getValidInt("Ingrese una opcion: ","Error, ingrese un valor numerico",auxopcion);
        switch(opcion)
        {
        case 1:
               printf("1-Ordenados por nombre\n2-Ordenados por nombre y Nacionalidad\n");
               opcion=getValidInt("Ingrese una opcion : ","Error ingrese un valor numerico: ",auxopcion);
               if(opcion==1)
               {
                 listaUsuariosNombre=al_clone(listaUsuarios);
                 listaUsuariosNombre->sort(listaUsuariosNombre,ordenarNombreUsuario,1);
                 mostrarListaUsuarios(listaUsuariosNombre);
               }
               else if(opcion==2)
               {
                   listaNN=listaUsuarios->clone(listaUsuarios);
                   doble_Sort(listaNN);
               }

               else{
                printf("Error , ingrese una de las opciones indicadas !!\n");
               }

            break;
        case 2:

            break;

        case 3:
            mostrarListaUsuarios(listaUsuarios);

            break;
        case 4:
            escucharTema(listaUsuarios,listaTemas,listaEscuchados);

            break;
        case 5:
            usuario=(eUsuario*)listaUsuarios->get(listaUsuarios,0);
            caracter=get_char(usuario);
            printf("\nUsuario : %c\n",caracter);


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
