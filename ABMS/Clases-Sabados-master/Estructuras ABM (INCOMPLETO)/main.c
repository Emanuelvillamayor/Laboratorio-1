#include <stdio.h>
#include <stdlib.h>
#include "Productos.h"
#define TAM 5

int main()
{

    int opcion;
    eProducto producto[TAM];
    int carga;
 inicializarEstado( producto, TAM,0 );

    do
    {
        printf("1. Cargar\n2. Mostrar\n3. Ordenar\n4. Borrar\n5. Modificar\n9. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                carga=ingresarProductoEnLista(producto,TAM);
                   if (carga==-1)
                {
                    printf("No hay espacio!\n");
                }
                else if (carga==-2){
                }
                else
                {
                    printf("Producto ingresado\n");
                }

                break;
            case 2:
                printf("Listado:\n");
                mostrarListaDeProductos(producto,TAM);

                break;
            case 3:


              printf("ORDENO\n");
                ordenarProductos(producto,TAM);
                break;

                break;
            case 4:

                break;
            case 5:

                break;
        }

        system("pause");
        system("cls");
    }
    while(opcion!=9);

    return 0;
}
