#include <stdio.h>
#include <stdlib.h>

int main()
{

char bufer[100]="Esto es un texto dentro del fichero";
char bufferIn[100];
 fp=fopen("D:\\clase\\ficher.txt","w");

 fprintf(fp,buffer);
 fprintf(fp,"%s","\nEsto es otro texto dentro del fichero.");
 fprintf(fp,"\nEsto es otro texto dentro del fichero. y el buffer contiene : %s ");

  fclose(fp);
  system("pause");
  system("cls");

  fp=fopen("D:\\clase\\fichero.txt","w");





    return 0;
}
