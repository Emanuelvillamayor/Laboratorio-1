#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Arraylist.h"
#include "correo.h"

eCorreo* eCorre_new()
{
    eCorreo* retorno;

    retorno = (eCorreo*) malloc(sizeof(eCorreo));

    return retorno;
}

int setMail(eCorreo* this,char* mail)
{
     int retorno=0;
    if(this!=NULL &&mail!=NULL)
    {
        strcpy(this->mail,mail);
        retorno=1;
    }
 return retorno;
}

int setNombre(eCorreo* this,char* nombre)
{
    int retorno=0;
    if(this!=NULL &&nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=1;
    }
 return retorno;
}

int setid(eCorreo* this,int id)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->id=id;
        retorno=1;
    }
 return retorno;
}

char* getMail(eCorreo* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
      retorno=this->mail;
    }
  return retorno;
}


char* getNombre(eCorreo* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
      retorno=this->nombre;
    }
  return retorno;
}

int getid(eCorreo* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->id;
    }
  return retorno;
}

int mostrarCorreo(eCorreo* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        printf("%d-----%s-------%s\n",this->id,this->nombre,this->mail);
        retorno=1;
    }
 return retorno;
}

int parserCorreo(FILE* pFile , ArrayList* pArrayList,char* nombreArchivo)
{

int r;
int id=0;
int auxId;
int auxNombre;
int auxMail;
char nombre[100],mail[100];
eCorreo* correo;


  pFile=fopen(nombreArchivo,"r");

    if(pFile==NULL)
    {
        printf("Archivo vacio!!");
        return -1;
    }
    do{

        r=fscanf(pFile,"%[^,],%[^\n]\n",nombre,mail);
        if(r==2)
        {

              id++;
              correo=eCorre_new();
              if(correo!=NULL)
              {
              auxId=setid(correo,id);
              auxNombre=setNombre(correo,nombre);
              auxMail=setMail(correo,mail);
              pArrayList->add(pArrayList,correo);
              }
        }
    }while(!feof(pFile));

    printf("Archivo cargado!!\n");

    fclose(pFile);
    return 0;
}

int mostrarLista(ArrayList* this)
{
    int retorno=0;
    int len;
    int i;
    eCorreo* correo;
    if(this!=NULL)
    {
        retorno=1;
      len=this->len(this);
      for(i=0;i<len;i++)
        {
            correo = (eCorreo*) this->get(this,i);
            mostrarCorreo(correo);
        }
    }
 return retorno;
}


int depurarListas(ArrayList* listaDestinatarios,ArrayList* listaBlack,ArrayList* listaFiltro)
{
    int retorno=0;
    int i,j;
    eCorreo* correoD;
    eCorreo* correoB;
    int lenD;
    int flag=0;

    int lenB;

       if(listaDestinatarios!=NULL &&listaBlack!=NULL &&listaFiltro!=NULL)
        {
            lenD=listaDestinatarios->len(listaDestinatarios);
            lenB=listaBlack->len(listaBlack);

            for(i=0;i<lenD;i++)
            {
                 flag=0;
                 correoD = (eCorreo*) al_get(listaDestinatarios,i);
                for(j=0;j<lenB;j++)
                {
                     correoB = (eCorreo*) al_get(listaBlack,j);

                 if( (strcmp(correoB->mail,correoD->mail)==0))
                     {
                      flag=1;
                     }
                }

                if(flag==0)
                    {
                         retorno=1;
                         listaFiltro->add(listaFiltro,correoD);
                    }
            }

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


int parserCorreoWrite(FILE* pFile , ArrayList* pArrayList,char* nombreArchivo)
{
int i;

int len;

eCorreo* correo;


  pFile=fopen(nombreArchivo,"w");
  len=pArrayList->len(pArrayList);
    if(pFile==NULL)
    {
        printf("Archivo vacio!!");
        return -1;
    }
    for(i=0;i<len;i++)
    {
        correo= (eCorreo*) al_get(pArrayList,i);
        if(correo!=NULL)
        {
            fprintf(pFile,"%s,%s\n",correo->nombre,correo->mail);
        }
    }

    printf("Archivo creado!!\n");

    fclose(pFile);
    return 0;
}
