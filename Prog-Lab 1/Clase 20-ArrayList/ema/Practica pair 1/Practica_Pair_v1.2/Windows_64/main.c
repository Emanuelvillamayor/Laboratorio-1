#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include <string.h>
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
ArrayList* lista;


lista=al_newArrayList();/**le pedimos memoria para esa variable-MALLOC*/

Employee* auxel;
FILE* pFile;
int ret;
int i;
int cantidad;
int opcion;
int comprobarOrdenar;

do{
printf("1-Parse del archivo dat csv\n2-Listar Empleados\n3-Ordenar por nombre\n4-Agregar un elemento\n5-Eliminar un elemento\n6-Listar empleados(desde/hasta)\n7-Salir");
printf("Ingrese una opcion: \n");
scanf("%d",&opcion);
switch(opcion)
{
    case 1 :
    ret=parserEmployee(pFile,lista);
    break;

    case 2:
        cantidad=al_len(lista);

        for(i=0;i<cantidad;i++)
         {
           auxel=(Employee*)al_get(lista,i);
           employee_print(auxel);
         }
     break;
    case 3:

    comprobarOrdenar=al_sort(lista,employee_compare,1);
    if(comprobarOrdenar==0)
      {
        printf("MUESTRO ORDENADO\n");
         for(i=0;i<cantidad;i++)
           {
              auxel=(Employee*)al_get(lista,i);
              employee_print(auxel);
           }
       }
       break;
    case 4:
        auxel=employee_new();
        if(employee_agregarElemento(auxel,lista))
        {
            printf("Elemento creado\n");
        }
        else{
            printf("Error");
        }

}
system("pause");
system("cls");

}while(opcion!=7);

    return 0;
}
