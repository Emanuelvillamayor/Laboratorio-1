#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nombre[5];
    int id;

}ePersona;

int main()
{

   ePersona persona[2];

    printf("%d\n",persona[0]);
    printf("valor inicial contenido pos 0 id :%d\n",persona[0].id);
    printf("Direccion de memoria inicial de id en pos 0: %d\n",&persona[0].id);
    printf("valor inicial contenido pos 0 nombre :%s\n",persona[0].nombre);
    printf("Valor de direccion de memoria estructura pos 0:%d\n",&persona);
    printf("valor inicial contenido pos 1 id:%d\n",persona[1].id);
    printf("Direccion de memoria inicial de id en pos 1:%d \n",&persona[1].id);
    printf("valor inicial contenido pos 1 nombre:%s\n",persona[1].nombre);
    printf("Valor de direccion de memoria estructura pos 1:%d\n",&persona[1]);

   persona[0].id=10;
   persona[1].id=67;

   strcpy(persona[0].nombre,"lucas");
   strcpy(persona[1].nombre,"Zorro");


    printf("\n");

    printf("%d\n",persona[0]);
    printf("valor luego del contenido pos 0 id: %d\n",persona[0].id);
    printf("Direccion de memoria luego de id en pos 0: %d\n",&persona[0].id);
    printf("valor luego del contenido pos 0 nombre: %s\n",persona[0].nombre);
    printf("Valor de luego estructura direccion de memoria pos 0:%d\n",&persona);
    printf("valor luego contenido pos 1 id:%d\n",persona[1].id);
    printf("Direccion de memoria inicial de id en pos 1:%d \n",&persona[1].id);
    printf("valor luego contenido pos 1 nombre:%s\n",persona[1].nombre);
    printf("Valor de luego estructura direccion de memoria pos 1:%d\n",&persona[1]);

    printf("\n");
    printf("PUNTERO:\n");
    printf("\n");

    ePersona* aux;
    printf("Puntero aux de ePersona direccion de memoria contenida inicial:%d\n",aux);
    printf("Puntero aux de ePersona contenido inicial:%d\n",*aux);
    printf("Puntero aux de ePersona direccion de memoria:%d\n",&aux);

    printf("\n");

    aux=persona;
    printf("Puntero aux de ePersona direccion de memoria contenida luego:%d\n",aux);
    printf("Puntero aux de ePersona contenido luego:%d\n",*aux);
    printf("Puntero aux de ePersona direccion de memoria:%d\n",&aux);

        printf("\n");

    printf("Puntero aux de ePersona direccion de memoria contenida luego id 0:%d\n",(&(aux->id)));
    printf("Puntero aux de ePersona contenido  luego id 0:%d\n",aux->id);
    printf("Puntero aux de ePersona direccion de memoria contenida luego id 1:%d\n",(&((aux+1)->id)));
    printf("Puntero aux de ePersona contenido  luego id 1:%d\n",(aux+1)->id);







    return 0;
}
