#include <stdio.h>
#include <stdlib.h>
#include "string.h"
typedef struct
{
    int id;
    char nombre[50];
}ePersona;

void setId(ePersona*,int);

int main()
{
  /*ePersona miPersona; ESTO NO LO HACEMOS MAS
    pPersona=&miPersona;*/

    ePersona* pPersona;
    printf("%d\n",&pPersona);/**Devuelve basura*/
    pPersona= (ePersona*) malloc(sizeof(ePersona)); /**El (ePersona*) es un casteador dependiendo el tipo de dato*/
    printf("%d\n",pPersona);/**aca devuelve una direccion de memoria*/
    if(pPersona!=NULL)
    {
        /**HARDCODEAMOS*/
        setId()
        strcpy(pPersona->nombre,"Juan");
        printf("%d--%s",pPersona->id,pPersona->nombre);
    }
    return 0;
}
