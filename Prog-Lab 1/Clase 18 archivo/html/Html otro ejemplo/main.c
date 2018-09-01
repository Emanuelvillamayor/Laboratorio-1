#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE* f;
   char msj[10]="hola a todos";
   f=fopen("mihtml.html","w");  /**Estatico*/
   if(f!=NULL)
   {
      //    fprintf(f,"<html><head> Hola </head></html>"); // mensaje hardcodeado
       fprintf(f,"<head><html>");
       fprintf(f,msj);// parte variable del mensaje que quiero mostrar
       fprintf(f,"</head></html>"); // ejemplo para escribir cierre y apertura de los tags
       fclose(f);
   }

    return 0;
}


