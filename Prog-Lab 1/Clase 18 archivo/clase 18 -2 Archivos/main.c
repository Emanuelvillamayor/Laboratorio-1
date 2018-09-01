#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* pArchivo;
    char cadena[50]="hola";

    pArchivo=fopen("archivo.txt","w");// fopen devuelve un puntero a file si pudo abrir el archivo o sino null

    if(pArchivo!=NULL)
    {
      fprintf(pArchivo,"%s %d",cadena,156);// guarda datos de la cadena en el archivo "hola"

      fclose(pArchivo);
    }
    else
    {
        printf("Imposible guardar");
    }
/*
    pArchivo=fopen("archivo.txt","r");// fopen devuelve un puntero a file si pudo abrir el archivo o sino null

    if(pArchivo!=NULL)
    {
      while(!feof(pArchivo))  //sirve para leer linea por linea y no todo en una sola
      {
          fgets(cadena,50,pArchivo);// getc -> lee solo un char
          puts(cadena); // muestra lo que hay
      }
      fclose(pArchivo);
    }
    else
    {
        printf("Imposible guardar");
    }

    */

    return 0;
}
