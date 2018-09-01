#include "funciones.h"
#include <string.h>

int getInt(char* mensaje)
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

float getFloat(char* mensaje)
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}


char getChar(char* mensaje )
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

int esNumerico(char* str)
{
   int i=0;
   while((str+i) != '\0')
   {
       if((str+i) < '0' || (str+i)> '9')
       {
           return 0;
       }

       i++;
   }
   return 1;
}


int esAlfaNumerico(char* str)
{
   int i=0;
   while((str+i) != '\0')
   {
       if(((str+i) != ' ') && ((str+i) < 'a' || (str+i) > 'z') && ((str+i) < 'A' || (str+i)> 'Z') && ((str+i) < '0' || (str+i) > '9'))
           return 0;
       i++;
   }
   return 1;
}


int esSoloLetras(char* str)
{
   int i=0;
   while((str+i) != '\0')
   {
       if(((str+i) != ' ') && ((str+i) < 'a' || (str+i) > 'z') && ((str+i) < 'A' || (str+i) > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

int esNumericoFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while((str+i) != '\0')
   {
       if (i == 0 && (str+i) == '-')
       {
           i++;
           continue;

       }
       if ((str+i) == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if((str+i) < '0' || (str+i)> '9')
           return 0;
       i++;
   }
   return 1;
}


