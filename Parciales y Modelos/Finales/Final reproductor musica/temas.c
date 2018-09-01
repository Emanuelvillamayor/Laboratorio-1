#include "temas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


eTema* eTema_new()
{
    eTema* retorno;
    retorno= (eTema*)malloc(sizeof(eTema));
    return retorno;
}




int eTema_setId(eTema* this,int ID)
{
    int retorno=0;
    if(this!=NULL)
    {
       this->id=ID;
       retorno=1;
    }
    return retorno;
}


int eTema_setNombretema(eTema* this,char* NOMBRE)
{
    int retorno=0;
    if(this!=NULL && NOMBRE!=NULL)
    {
        strcpy(this->nombreTema,NOMBRE);
        retorno=1;
    }
    return retorno;
}



int eTema_setArtista(eTema* this,char* ARTISTA)
{
    int retorno=0;
    if(this!=NULL && ARTISTA!=NULL)
    {
        strcpy(this->artista,ARTISTA);
        retorno=1;
    }
    return retorno;
}





int eTema_getId(eTema* this)
{
    int retorno=0;
    if(this!=NULL)
    {
       retorno=this->id;
    }
    return retorno;
}



char*eTema_getNombretema(eTema*this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->nombreTema;
    }
    return retorno;
}



char* eTema_getArtista(eTema* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->artista;
    }
    return retorno;
}





int mostrarTema(eTema* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        printf("%d,%s,%s\n",eTema_getId(this),eTema_getNombretema(this),eTema_getArtista(this));
    }
    return retorno;
}
int mostrarListaTemas(ArrayList* this)
{
  int retorno=0;
  int len;
  int i;
  eTema* tema;

  if(this!=NULL)
  {
      len=this->len(this);
      for(i=0;i<len;i++)
      {
          tema=(eTema*) this->get(this,i);
          mostrarTema(tema);
      }
      retorno=1;
  }
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
int esAlfanumerico(char* dato)
{
    int tam;
    int retorno=0;
    int i=0;
    tam=strlen(dato);
    for(i=0;i<tam;i++)
   {

    if((isalnum(*(dato+i))!=0))
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


char* getValidAlphaNum(char* mensaje,char* mensajeError,char* input)
{

    char AUX[100];
    int flag=-1;

    getString(mensaje,AUX);
    while(flag==-1)
    {
        if(esAlfanumerico(AUX))
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
int cargarDesdeArchivoTema(ArrayList* this)
{
    FILE *f;
	int r;
	int auxId;
	char id[50],nombre[50],artista[50];
	eTema* tema;

	f=fopen("temas.dat", "rb");
	if(f==NULL)
    {
        printf("Archivo vacio!!\n");
        return 1;
    }

	    do{
            r=fscanf(f,"%[^,],%[^,],%[^\n]\n",id,nombre,artista);

            if(r==3)
            {
              tema=eTema_new();
                if(tema!=NULL)
                {
                   auxId=atoi(id);
                   eTema_setId(tema,auxId);
                   eTema_setNombretema(tema,nombre);
                   eTema_setArtista(tema,artista);
                   this->add(this,tema);
                }
            }

	    }while(!feof(f));

        printf("Archivo cargado\n");

	fclose(f);
	return 0;
}
