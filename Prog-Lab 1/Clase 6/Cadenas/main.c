#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /**puedo guardar "14" caracteres por el "\0"*/
                  /**escribir el mensaje ahi , se puede hacer solo al declarar la variable
  char palabra[15]="hola";
  */
  /**PUEDE QUE EL STRING DEJE MAS ESPACIOS QUE LOS INDICADOS COMO EN ESTE CASO [15] POR AHI MUESTRA "[20]"*/


  char palabra1[15];
  char palabra2[15];
  //suficientemente grande para que el usuariio ingrese lo que quiera
  int comp;
  char buffer[1024];

  //int cant;
  printf("Ingrese una palabra : ");
  /**es de manera preventiva arriba de cada lectura el ----"fflus(stdin)"---*/
  fflush(stdin);
  /**el ------gets"--- es una funcion especializada en leer cadenas*/
 //gets(palabra1);
 gets(buffer);
/**------STRLEN ----:cuando encuentra un "\0" deja de contar,
sirve para validar que no se vaya de rango la cantidad de caracteres que definimos al principio*/

/**utilizamos el while para validar que ingrese "14" caracteres y no se pase


while (strlen(buffer)>14)
{
    printf("Error reingrese una palabra");
    fflush(stdin);
    gets(buffer);
}
//cant=strlen(palabra1);
 /** "strcpy()" Recibe dos parametros y copia una cadena en otra, es decir la reemplaza
 1-Destino
 2-Origen
 */
 //strcpy(palabra2,palabra1);
 /**No hace falta poner dos whiles porque "palabra1" tiene los mismo valores que "palabra2" y ya esta validada*/
 strcpy(palabra1,buffer);
 strcpy(palabra2,buffer);
 /**-----STRUPCR-----Convierte todo a mayuscula,concatena de a "PARES", la tengo que llamar denuevo para mas concatenacioens
 strupcr()*/
 /**.-------strlwr--------convierte todo a minuscula
 strlwr()*/
 /**-------STRCAT---- SIRVE PARA CONCATENAR DOS STRINGS*/
 strcat(buffer,palabra2);

 /**-----STRCMP---recibe las dos cadenas que va a comparar , y devuelve valor "entero(int)"*/
 comp=strcmp(palabra1,palabra2);

  /**Si pongo un espacio , ese espacio es reemplazado por "\0" entonces al ingresar "espacio"
  se corta ahi el mensaje con el "scanf*/
//printf("cantidad de caracteres palabra 1:%d",cant);
  printf("resultado de comparacion :%d",comp);
  printf("La palabra 1:%s\np palabra 2 :%s",palabra1,palabra2);




    return 0;
}
