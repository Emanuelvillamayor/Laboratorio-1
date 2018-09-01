#include <stdio.h>
#include <stdlib.h>
#include "string.h"
/***TAREA AL CONSTRUCTO PASARLE ID Y NOMBRE ES DECIR newPersona(id,nombre);*/
typedef struct
{
    int id;
    char nombre[50];
}ePersona;

ePersona* newPersona();

int ePersona_setId(ePersona*,int);
int ePersona_setNombre(ePersona*,char *);


int ePersona_getId(ePersona*); /**DATO QUE DEVUELVE ES ID , Y PUNTERO DE ESTRUCTURA , reemplaza la flecha*/
char* ePersona_GetNombre(ePersona*);

int main()
{
  /*ePersona miPersona; ESTO NO LO HACEMOS MAS
    pPersona=&miPersona;*/

    ePersona* pPersona;
    printf("Puntero con basura---%d \n",&pPersona);/**Devuelve basura*/

    pPersona=newPersona();//Es un constructor que sirve para reemplazar maloc

    //pPersona= (ePersona*) malloc(sizeof(ePersona)); /**El (ePersona*) es un casteador dependiendo el tipo de dato*/
    printf("Puntero con direccion de memoria del MONTON---%d\n",pPersona);/**aca devuelve una direccion de memoria*/
    if(pPersona!=NULL)
    {
        /**HARDCODEAMOS o podemos cargar datos*/
       if(ePersona_setId(pPersona,45)==-1)
       {
       printf("Id incorrecto!!!\n");
       }
       else{
       if(ePersona_setNombre(pPersona,"Juan")==-1)
       {
           printf("Nombre Incorrecto!!\n");
       }
       else{

        printf("%d--%s",ePersona_getId(pPersona),ePersona_GetNombre(pPersona));
        }


        }
    }
    return 0;
}

/**** SET ID******/
int ePersona_setId(ePersona* this ,int id)
{
    int retorno=-1;
    /** A la variable de e persona le pasamos un id */
    if(id>0 && this!=NULL)  /**ponemos condicion para validar que el id sea positivo*/
    {
        retorno=1;
        this->id=id; /** Le asignamos el valor del id*/
    }
return retorno;
}

/*********SET NOMBRE**********/

int ePersona_setNombre(ePersona* this,char * nombre)
{ int retorno=-1;
                                      /**Longitud de la cadena*/
    if( this!=NULL && nombre!=NULL && (strlen(nombre)>3))
    {
        retorno=1;
       strcpy(this->nombre,nombre);
    }
    return retorno;
}
/**********GET ID******************/
int ePersona_getId(ePersona* this)
{
    int ret=-1;
    if(this!=NULL)
    {
      ret=this->id;
    }
return ret;
}

/**********GET NOMBRE******************/
char* ePersona_GetNombre(ePersona* this)
{
    char * ret=NULL;
    if(this!=NULL)
    {
        ret=this->nombre;/**Puedo hacer esta asignacion porqe me devuelve direccion de memoria no hace falta que trabaje sobre memoria*/
    }
    return ret;

}


ePersona* newPersona()
{
    ePersona* persona;
    persona=(ePersona*) malloc(sizeof(ePersona));
    return persona;
}
