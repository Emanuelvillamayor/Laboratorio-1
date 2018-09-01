#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"
#include <ctype.h>
#include <string.h>

int employee_agregarElemento(Employee* this,ArrayList* lista)
{
  int retorno=-3;
  char auxId[10];
  char auxNombre[50];
  if(this!=NULL)
     {
      retorno=-1;
      printf("Ingrese ID: ");
      fflush(stdin);
      gets(auxId);

      if(!employee_setId(this,auxId))
         {
             printf("Error,Ingrese un valor numerico\n");
             retorno=0;
         }
      if(retorno!=0){
      printf("Ingrese NOMBRE: ");
      fflush(stdin);
      gets(auxId);
      }
         if((employee_setName(this,auxNombre)==0)&&retorno!=0)
         {
             printf("HOLA");
         }

              if(retorno!=0)
         {
             al_add(lista,this);


         }







     }
  else{
      printf("Error :Elemento=NULL !!\n");
  }
  return retorno;

}
/**Devuelve un puntero a void y vamos a comparar dos empleados**/
int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
Employee* e1;
Employee*e2;

int retorno;

e1=(Employee*) pEmployeeA;
e2=(Employee*) pEmployeeB;


retorno=strcmp(e1->name ,e2->name);

    return retorno; /**Solo le tengo que devolver si es 1,0, o -1 , la funcion array list se encargar de analizarlo*/
}


void employee_print(Employee* this)
{
printf("\nId=%d  \nNombre=%s  \nApellido=%s  \nEmpty=%d\n",this->id,this->name,this->lastName,this->isEmpty);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    returnAux=(Employee*) malloc(sizeof(Employee));

    return returnAux;

}

void employee_delete(Employee* this)
{
//return 0;

}
/*******SET*******/
/*int employee_setId(Employee* this, int id)
{
    int retorno=-1;

    if(id>0&&this!=NULL)
    {
        this->id=id;
        retorno=1;
    }
    return retorno;
}
*/
int employee_setId(Employee* this, char* id)
{
    int retorno=0;
    int tam;
    tam=strlen(id);
    int i=0;
   for(i=0;i<tam;i++)
   {

    if(*(id+i)>0&&this!=NULL&&(isdigit(*(id+i))!=0))
    {
        retorno=1;
    }
    else{
        retorno=0;
        break;
    }
   }
   if(retorno==1)
   {
       this->id=atoi(id);

   }
    return retorno;
}


/*int employee_setName(Employee* this, char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL &&(strlen(nombre)>0))
    {
        strcpy(this->name,nombre);
        retorno=1;
    }
return retorno;
}*/
int employee_setName(Employee* this, char* nombre)
{
    int retorno=0;
    int tam;
    int i;
    tam =strlen(nombre);
    for(i=0;i<tam;i++)
    {

       if(this!=NULL && nombre!=NULL &&(strlen(nombre)>0)&& (isalpha(*(nombre+i))!=0))
         {
           retorno=1;
         }
         else{
            retorno=0;
            break;
         }
    }
    if(retorno==1)
    {
         strcpy(this->name,nombre);
    }
return retorno;
}



int employee_setLastName(Employee* this,char* apellido)
{
    int retorno=-1;
    if(this!=NULL && (strlen(apellido)>0) &&apellido!=NULL )
    {
        strcpy(this->lastName,apellido);
        retorno=1;
    }
    return retorno;
}

int employee_setIsEmpty(Employee* this,int espacio)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->isEmpty=espacio;
        retorno=1;
    }
    return retorno;
}
/******GET*********/
int employee_getId(Employee* this)
{

    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->id;
    }
return retorno;

}

char* employee_getName(Employee* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
      retorno=this->name;
    }
    return retorno;
}

char* employee_getLastName(Employee* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->lastName;
    }
    return retorno;
}

int employee_getIsEmpty(Employee* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
        retorno=this->isEmpty;
    }
    return retorno;
}

/*****************************************************************************************/
int esNumerico(char* str)
{
   int i=0;
   while((*(str+i)) != '\0')
   {
       if(((*(str+i)) < '0' || (*(str+i)) > '9')||(isspace(str[0])!=0))
           return 0;
       i++;
   }
   return 1;
}

int esSoloLetras(char* str)
{
   int i=0;

   while((*(str+i)) != '\0')
   {
        if(((*(str+i))!= ' ') && ((*(str+i))< 'a' ||(*(str+i)) > 'z') && ((*(str+i)) < 'A' || (*(str+i)) > 'Z'))
        return 0;
        i++;
   }
   return 1;
}



void getString(char* mensaje,char* input)
{
    printf("%s",mensaje);
    fflush(stdin);
    gets(input);
}


int getStringLetras(char* mensaje,char* input)
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getStringNumeros(char* mensaje,char* input)
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

