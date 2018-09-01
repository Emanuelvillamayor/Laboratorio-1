#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "Productos.h"

#define T 5


int main()
{
    int idProducto[T]= {100,101,102};
    char descripcion[T][50]={"Pepas","Pepsi Twist","Fity"};
    int stock[T]={10,15,50};
    float precioUnitario[T]={10,12.5,22.36};
    int opcion;
    int carga;
    int modificar;

    do
    {
        printf("1. Cargar\n2. Mostrar\n3.Ordenar\n4. Modificar\n9.Salir");
        opcion=getInt("\nIngrese una opcion: \n");
        switch(opcion)
        {
            case 1:

          carga=cargarProductos(idProducto,descripcion,stock,precioUnitario,T);
                if (carga==-1)
                {
                    printf("No hay espacio!");
                }
                else if (carga==-2)
                {

                }
                else
                {
                    printf("producto ingresado");
                }


                break;


            case 2:
                printf("Listado:\n");
                mostrarProductos(idProducto, descripcion, stock, precioUnitario, T);
                break;


            case 3:
                printf("ORDENO\n");
                ordenarProductos(idProducto, descripcion, stock, precioUnitario, T);
                break;


            case 4:

      modificar=modificarProducto(idProducto,descripcion,stock,precioUnitario,T);
    if (modificar!=0)
       {
         printf("Se modifico el producto\n");
       }
    else{

         printf("No se pudo modificar producto\n");
        }


                break;
        }

        system("pause");
        system("cls");
    }
    while(opcion!=9);

    return 0;
}








