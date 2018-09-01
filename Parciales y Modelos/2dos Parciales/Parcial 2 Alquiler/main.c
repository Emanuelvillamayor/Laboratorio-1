#include <stdio.h>
#include <stdlib.h>
#include "Arraylist.h"
#include "Cliente.h"


int main()
{

    int opcion;
    char auxopcion[50];

    ArrayList* lista;
    ArrayList* listaBaja;
    ArrayList* alquiler;

    lista=al_newArrayList();
    listaBaja=al_newArrayList();
    alquiler=al_newArrayList();

    do{
    printf("1-Alta del cliente\n2-Modificar cliente\n3-Baja del cliente\n4-Nuevo Alquiler\n5-Fin del Alquiler\n6-Salir\n");
    opcion=getValidInt("Ingrese una opcion: ","Error,reingrese opcion",auxopcion);

    switch(opcion)
    {
    case 1:

           if(altaCliente(lista,listaBaja))
           {
               printf("Cliente Ingresado\n");
           }
           else{
            printf("Error, cliente no ingresado\n");
           }
    break;

    case 2:

        if(lista->isEmpty(lista))
        {
            printf("No hay clientes cargados para modificar!\n");
        }
        else{
        if(modificarCliente(lista))
        {
            printf("Cliente modificado con exito\n");
        }
        else
        {
          printf("No se pudo modificar el cliente\n");
        }
        }

    break;
    case 3:
        if(lista->isEmpty(lista))
        {
            printf("No hay Clientes cargados para dar de baja !\n");
        }
        else{
        if(bajaCliente(lista,listaBaja))
        {
            printf("Baja exitosa\n");
        }
        else
        {
            printf("Baja cancelada\n");
        }
        }

    break;
    case 4:
        if(lista->isEmpty(lista))
        {
            printf("No hay clientes para que puedan alquilar!\n");
        }
        else
        {
        if(nuevoAlquiler(lista,alquiler))
        {
            printf("Alquiler realizado\n");
        }
        else
        {
            printf("Alquiler cancelado\n");
        }
        }

    break;
    case 5:
        if(lista->isEmpty(alquiler))
        {
            printf("No hay clientes para que puedan finalizar alquiler!\n");
        }
        else
        {
            if(finAlquiler(alquiler))
            {
                printf("Alquiler finalizado\n");
            }
            else
            {
                printf("Finalizar alquiler cancelado\n");
            }
        }

    break;
    default:

        printf("Ingrese una de las opciones indicadas!\n");
     break;
    }
    system("pause");
    system("cls");
   }while(opcion!=7);


    return 0;
}
