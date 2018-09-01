#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 5

typedef struct
{
    int id;
    char nombre[50];
    int edad;
    int estado;
}ePersona;

int parser(FILE*,ePersona*);
void mostrar(ePersona*,int);

int main()
{


 ePersona personas[tam];
 ePersona* personas;
  int len;

  FILE* pfile;

  len=parser(pfile,personas);
  mostrar(personas,len);


return 0;
}


int parser(FILE* archivo,ePersona* persona)
{

  int r,i=0;
  char estado1[20]={"true"};
  char var1[50],var2[50],var3[50],var4[50];

    archivo=fopen("libro.csv","r");
    if(archivo!=NULL)
    {

        do
        {


             r=fscanf(archivo,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
             if(r==4)
             {
               (persona+i)->id=atoi(var1);
               strcpy((persona+i)->nombre,var2);
               ((persona+i)->edad)=atoi(var3);

               if(strcmp(var4,estado1)==0)
                  {
                    (persona+i)->estado=1;
                  }

               else{
                     (persona+i)->estado=0;
                   }
                  i++;
                printf("Id:%d  \n",(persona+i)->id);

             }
             else
             {
                 printf("No se pudo leer todos los datos!!");

             }
        }while(!feof(archivo));

    }
    else{
        printf("No se pudo cargar el archivo!!");
    }
fclose(archivo);
//printf("cerre");
return i;

}

void mostrar(ePersona* personi,int len)
{
    int i=0;

   printf("Entre vo ");
    for(i=0;i<len;i++)
    {
      printf("Id:%d  \nNombre:%s  \nEdad:%d  \nEstado:%d",(personi+i)->id,(personi+i)->nombre,(personi+i)->edad,(personi+i)->estado);
    }

}
