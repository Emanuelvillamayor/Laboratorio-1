#include <stdio.h>
#include <stdlib.h>
/************************************************************************
*Caso 1:                                                                *
* -Ejemplo de como trabaja una ESTRUCTURA y un ARRAY DE ESTRUCTURAS     *
*  en el Stack o Pila.                                                  *
*************************************************************************/
typedef struct
{
    int id;
    char nombre[5];
    float altura;

}ePersona;

int main()
{
    /*****************************UNA SOLA ESTRUCTURA***********************/

    ePersona persona;

    printf("**********************************************UNA SOLA ESTRUCTURA*********************************************\n");
    printf("\n");
    printf("Direcciones de memoria:\n");
    printf("-Direccionde memoria de la estructura (persona): %d\n",&persona);/**Refiere a la direccion de memoria de la primer variable en la estructura es decir ID*/
    printf("-Direccion de memoria del Id (&persona.id): %d\n",&persona.id);
    printf("-Direccion de memoria(1-indice) del Nombre (&persona.nombre[0]): %d\n",&persona.nombre[0]);
    printf("-Direccion de memoria(2-indice) del Nombre (&persona.nombre[1]): %d\n",&persona.nombre[1]);
    printf("-Direccion de memoria(3-indice) del Nombre (&persona.nombre[2]): %d\n",&persona.nombre[2]);
    printf("-Direccion de memoria(4-indice) del Nombre (&persona.nombre[3]): %d\n",&persona.nombre[3]);
    printf("-Direccion de memoria(5-indice) del Nombre (&persona.nombre[4]): %d\n",&persona.nombre[4]);
    printf("-Direccion de memoria de Altura (&persona.altura): %d\n",&persona.altura);

    printf("\n");

    printf("******************ANTES DE CARGAR**********************\n");
    printf("\n");
    printf("Contenido o valor (basura):\n");
    printf("-Contenido del Id (persona.id): %d\n",persona.id);
    printf("-Contenido del Nombre (&persona.nombre[0]): %s\n",&persona.nombre[0]);
    printf("-Contenido del Nombre (&persona.nombre): %s\n",&persona.nombre);/**Estas tres formas funciona*/
    printf("-Contenido del Nombre (persona.nombre): %s\n",persona.nombre);
    printf("-Contenido de la Altura (persona.altura): %.2f\n",persona.altura);

    printf("\n");


    /**Cargo datos*/

    persona.id=1;
    strcpy(persona.nombre,"juan");
    persona.altura=22.5;

    printf("*****************DESPUES DE CARGAR DATOS**************\n");

    printf("\n");

    printf("Contenido o valor:\n");
    printf("-Contenido del Id (persona.id): %d\n",persona.id);
    printf("-Contenido del Nombre (&persona.nombre[0]): %s\n",&persona.nombre[0]);
    printf("-Contenido del Nombre (&persona.nombre): %s\n",&persona.nombre);/**Estas tres formas funciona*/
    printf("-Contenido del Nombre (persona.nombre): %s\n",persona.nombre);
    printf("-Contenido de la Altura (persona.altura): %.2f\n",persona.altura);

    printf("\n");
    printf("\n");


    /********************************ARRAY DE ESTRUCTURAS******************************/

    printf("************************************************ARRAY DE ESTRUCTURAS*************************************************\n");
    printf("\n");
    printf("\n");

    ePersona personas[2];

    printf("Direcciones de memoria:\n");
    printf("Direccion de memoria de la estructura 0 estructura (personas):%d\n",personas);
    printf("Direccion de memoria de la estructura 0 estructura (&personas):%d\n",&personas);
    printf("Direccion de memoria de la estructura 0 estructura (&personas[0]):%d\n",&personas[0]);
    printf("Direccion de memoria de la estructura 0 Id (&personas[0].id):%d\n",&personas[0].id);
    printf("Direccion de memoria de la estructura 0 Nombre (personas[0].nombre):%d\n",&personas[0].nombre);/**Solo coloque la primer DM de la cadena de nombre*/
    printf("Direccion de memoria de la estructura 0 Id (&personas[0].altura):%d\n",&personas[0].altura);

    printf("\n");

    printf("Direccion de memoria de la estructura 1 estructura (&personas[1]):%d\n",&personas[1]);
    printf("Direccion de memoria de la estructura 1 Id (&personas[1].id):%d\n",&personas[1].id);
    printf("Direccion de memoria de la estructura 1 Nombre (personas[1].nombre):%d\n",&personas[1].nombre);/**Solo coloque la primer DM de la cadena de nombre*/
    printf("Direccion de memoria de la estructura 1 Id (&personas[1].altura):%d\n",&personas[1].altura);

    printf("\n");

    printf("****************ANTES DE CARGAR***************\n");
    printf("\n");
    printf("Contenido o valor (basura):\n");
    printf("-Contenido de la estructura 0  Id (personas[0].id): %d\n",personas[0].id);
    printf("-Contenido de la estructura 0 Nombre (&personas[0].nombre[0]): %s\n",&personas[0].nombre[0]);
    printf("-Contenido de la estructura 0 Nombre (&personas[0].nombre): %s\n",&personas[0].nombre);/**Estas tres formas funciona*/
    printf("-Contenido de la estructura 0 Nombre (personas[0].nombre): %s\n",personas[0].nombre);
    printf("-Contenido de la estructura 0 Altura (personas[0].altura): %.2f\n",personas[0].altura);

    printf("\n");

    printf("-Contenido de la estructura 1  Id (personas[1].id): %d\n",personas[1].id);
    printf("-Contenido de la estructura 1 Nombre (&personas[1].nombre[0]): %s\n",&personas[1].nombre[0]);
    printf("-Contenido de la estructura 1 Nombre (&personas[1].nombre): %s\n",&personas[1].nombre);/**Estas tres formas funciona*/
    printf("-Contenido de la estructura 1 Nombre (personas[1].nombre): %s\n",personas[1].nombre);
    printf("-Contenido de la estructura 1 Altura (personas[1].altura): %.2f\n",personas[1].altura);

    printf("\n");

    /**CARGO DATOS*/

    personas[0].id=13;
    strcpy(personas[0].nombre,"pepe");
    personas[0].altura=105.5;

    personas[1].id=21;
    strcpy(personas[1].nombre,"lobo");
    personas[1].altura=66.10;

    printf("****************DESPUES DE CARGAR DATOS***************\n");

    printf("\n");

    printf("Contenido o valor :\n");
    printf("-Contenido de la estructura 0  Id (personas[0].id): %d\n",personas[0].id);
    printf("-Contenido de la estructura 0 Nombre (&personas[0].nombre[0]): %s\n",&personas[0].nombre[0]);
    printf("-Contenido de la estructura 0 Nombre (&personas[0].nombre): %s\n",&personas[0].nombre);/**Estas tres formas funciona*/
    printf("-Contenido de la estructura 0 Nombre (personas[0].nombre): %s\n",personas[0].nombre);
    printf("-Contenido de la estructura 0 Altura (personas[0].altura): %.2f\n",personas[0].altura);

    printf("\n");

    printf("-Contenido de la estructura 1  Id (personas[1].id): %d\n",personas[1].id);
    printf("-Contenido de la estructura 1 Nombre (&personas[1].nombre[0]): %s\n",&personas[1].nombre[0]);
    printf("-Contenido de la estructura 1 Nombre (&personas[1].nombre): %s\n",&personas[1].nombre);/**Estas tres formas funciona*/
    printf("-Contenido de la estructura 1 Nombre (personas[1].nombre): %s\n",personas[1].nombre);
    printf("-Contenido de la estructura 1 Altura (personas[1].altura): %.2f\n",personas[1].altura);
















    return 0;
}
