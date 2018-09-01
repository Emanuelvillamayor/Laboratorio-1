#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>

/**va a leer desde el archivo cada empleado*/
int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{

int r;
int auxId;
int auxNombre;
int auxApelido;
int auxEstado;
char estado1[5]="true";
char id[50],name[50],lastname[50],isempty[50];
Employee* empleado;

  pFile=fopen("data.csv","r");

    if(pFile==NULL)
    {
        printf("Archivo vacio!!");
        return -1;
    }
    do{

        r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,name,lastname,isempty);
        if(r==4)
        {
            if(strcmp(isempty,"true")==0)
             {

              empleado=employee_new();
              auxId=employee_setId(empleado,atoi(id));
              auxNombre=employee_setName(empleado,name);
              auxApelido=employee_setLastName(empleado,lastname);
               auxEstado=employee_setIsEmpty(empleado,1);
              al_add(pArrayListEmployee,empleado);
             }

        }

    }while(!feof(pFile));

    printf("Archivo cargado\n!!");

    fclose(pFile);
    return 0;
}
