#include <stdio.h>
#include <stdlib.h>
#include "Arraylist.h"
#include "Productos.h"

int main()
{
    int opcion;
    char auxopcion[20];


    ArrayList* lista;
    ArrayList* listaOrdenar;
    ArrayList* listaAux;

    lista=al_newArrayList();
    listaAux=al_newArrayList();
    listaOrdenar=al_newArrayList();

    if(cargarDesdeArchivo(lista,1))
    {
		printf("No se pudo abrir el fichero\n");
	}
	else
	{
		printf("Se cargaron las estructuras con exito\n");

	}

    do{
    printf("1-Alta de producto\n2-Modificar producto\n3-Baja logica\n4-Baja fisica\n-5-Listar\n6-Salir\n");
    opcion=getValidInt("Ingrese una opcion: ","Error,reingrese opcion",auxopcion);


    switch(opcion)
    {
    case 1:
        if(altaProducto(lista))
        {
            printf("Producto cargado!\n");

        }
        else
        {
            printf("Error al cargar producto\n");
        }
    break;
    case 2:
          if(lista->len(lista)==0)
          {
              printf("No hay productos para modificar cargados\n");
          }
          else
          {
            if(modificarProducto(lista))
            {
                printf("Producto Modificado\n");
            }
            else{
                printf("Producto no modificado\n");
            }
          }

    break;

    case 3:
        if(lista->len(lista)==0)
        {
            printf("No hay productos para dar de baja cargados\n");
        }
        else{
           if(bajaLogica(lista))
           {
              printf("Baja logica realizada!\n");
           }
           else
           {
               printf("Baja no realizada\n");
           }
        }
    break;

    case 4:
            if(lista->len(lista)==0)
        {
            printf("No hay productos para dar de baja cargados\n");
        }
        else{
           if(bajaFisica(lista,listaAux))
           {
               printf("Baja fisica realizada\n");
           }
           else
           {
               printf("Baja fisica cancelada\n");
           }
        }
    break;

    case 5:
        if(guardarEnArchivo(lista,1))
        {
            printf("\nNo se pudo abrir el fichero\n");
        }
        else
        {
            printf("-Se guardo la informacion con exito\n");
        }
        printf("\n");
          printf("Codigo Importe Cantidad Estado Descripcion\n");
          listaOrdenar=al_clone(lista);
          al_sort(listaOrdenar,compararDescripcion,1);
          mostrarListaTodos(listaOrdenar);
    break;

    case 6 :



    break;
    }

    system("pause");
    system("cls");
   }while(opcion!=7);

    return 0;
}
