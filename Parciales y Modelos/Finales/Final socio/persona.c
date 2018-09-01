#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include"persona.h"


ePersona* new_persona()
{
    ePersona* retorno;

    retorno=(ePersona*)malloc(sizeof(ePersona));
    return retorno;
}









void getString(char* mensaje,char* input)
{
    printf("%s",mensaje);
    fflush(stdin);
    gets(input);
}

int esNumerico(char* dato)
{
    int tam;
    int retorno=0;
    int i=0;
    tam=strlen(dato);
    for(i=0;i<tam;i++)
   {

    if(*(dato+i)>=0&&(isdigit(*(dato+i))!=0))
    {
        retorno=1;
    }
    else{
        retorno=0;
        break;
    }
   }
   return retorno;
}

int esSoloLetras(char* dato)
{
    int tam;
    int retorno=0;
    int i=0;
    tam=strlen(dato);
    for(i=0;i<tam;i++)
   {

    if((isalpha(*(dato+i))!=0))
    {
        retorno=1;
    }
    else{
        retorno=0;
        break;
    }
   }
   return retorno;
}



int getValidInt(char* mensaje,char* mensajeError,char* input)
{
    int retorno=-1;

    char AUX[100];

    getString(mensaje,AUX);
    while(retorno==-1)
    {
    if(esNumerico(AUX))
    {

        strcpy(input,AUX);

        retorno=atoi(input);
        break;
    }
    else{
       getString(mensajeError,AUX);

      }
    }

    return retorno;
}

char* getValidChar(char* mensaje,char* mensajeError,char* input)
{

    char AUX[100];
    int flag=-1;

    getString(mensaje,AUX);
    while(flag==-1)
    {
        if(esSoloLetras(AUX))
        {
            strcpy(input,AUX);
            flag=0;
            break;
        }
        else{
            getString(mensajeError,AUX);

            }
    }

    return input;
}



int guardarArchivo(ArrayList* lista)

{
    FILE* f;
    int i;
    int len;
    ePersona* aux;
  int retorno=0;


    f=fopen("archivo.dat","wb");
    if(f!=NULL && lista!=NULL)
    {
        len=lista->len(lista);

        fwrite(&len,sizeof(int),1,f);

        for(i=0;i<len;i++)
        {
            aux=(ePersona*)lista->get(lista,i);
            fwrite(aux,sizeof(ePersona),1,f);
        }

      printf("Archivo cargado\n");
    }
    else
    {
        printf("No se pudo cargar el archivo\n");
    }
        fclose(f);
return retorno;
}

int leerArchivo(ArrayList* lista)
{

    int i;
    int retorno=0;
    FILE* f;
    int len;
    ePersona* persona;

    persona=new_persona();

    f=fopen("archivo.dat","rb");

  if(lista!=NULL && f!=NULL )
  {
      fread(&len,sizeof(int),1,f);
      for(i=0;i<len;i++)
      {
          fread(persona,sizeof(ePersona),1,f);

          lista->add(lista,persona);
      }
      printf("Archivo cargado\n");
  }
  else
  {
      printf("Archivo vacio\n");
  }
  fclose(f);

    return retorno;
}


