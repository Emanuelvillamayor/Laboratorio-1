#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Tramite.h"

eTramite* etramite_new()
{
    eTramite* tramite;
    tramite =(eTramite*) malloc(sizeof(eTramite));
    return tramite;
}

int setDni(eTramite* this,int dni)
{
   int retorno=0;

    if(this!=NULL)
    {
        this->dni=dni;
        retorno=1;
    }
 return retorno;
}

int setNombre(eTramite* this,char* nombre)
{
    int retorno=0;

    if(this!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=1;
    }
 return retorno;
}

int setidTurno(eTramite* this,int turno)
{
    int retorno=0;

    if(this!=NULL)
    {
        this->idTurno=turno;
        retorno=1;
    }
 return retorno;
}




int getDni(eTramite* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
        retorno=this->dni;
    }

 return retorno;
}

char* getNombre(eTramite* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->nombre;
    }

 return retorno;
}

int getidTurno(eTramite* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
        retorno=this->idTurno;
    }
 return retorno;
}




int mostrarTramite(eTramite* this)
{
    int retorno=0;

    if(this!=NULL)
    {
        printf("%d------%d-------%s\n",this->dni,this->idTurno,this->nombre);
        retorno=1;
    }
 return retorno;
}


int compararPorDni(void* tramiteA ,void* tramiteB)
{
    int retorno;

    eTramite* tA;
    eTramite* tB;

    tA=(eTramite*)tramiteA;
    tB=(eTramite*)tramiteB;

  if(tA->dni<tB->dni)
  {
      retorno=-1;
  }
  else if(tA->dni>tB->dni)
  {
      retorno=1;
  }
  else
  {
      retorno=0;
  }

  return retorno;
}


int compararPorNombre(void* tramiteA,void* tramiteB)
{
    int retorno;

    eTramite* tA;
    eTramite* tB;

    tA=(eTramite*)tramiteA;
    tB=(eTramite*)tramiteB;

    retorno=strcmp(tA->nombre,tB->nombre);

  return retorno;
}


/*************************************************************************************/


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


int esDni(char* dato)
{
     int tam;
    int retorno=0;
    int i=0;
    tam=strlen(dato);
    for(i=0;i<tam;i++)
   {

    if(*(dato+i)>=0&&(isdigit(*(dato+i))!=0)&&tam==8)
    {
        if(dato)
        retorno=1;
    }
    else{
        retorno=0;
        break;
    }
   }
   return retorno;
}

int getValidDNI(char* mensaje,char* mensajeError,char* input)
{
      int retorno=-1;

    char AUX[100];

    getString(mensaje,AUX);
    while(retorno==-1)
    {
    if(esDni(AUX))
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

int siguienteTurno(ArrayList* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        retorno=this->len(this)+1;
    }
 return retorno;
}


int cargarTramite(ArrayList* this)
{
    int retorno=-2;
    char auxDni[20];
    char auxNombre[50];
    int dni;
    int turno;

    eTramite* tramite;
    if(this!=NULL)
    {
        retorno=-1;

        tramite=etramite_new();

        dni=getValidDNI("Ingrese el DNI: ","Error,Reingrese DNI: ",auxDni);
        setDni(tramite,dni);

        strcpy(auxNombre,(getValidChar("Ingrese su nombre: ","Error , reingrese nombre: ",auxNombre)));
        setNombre(tramite,auxNombre);

        turno=siguienteTurno(this);
        setidTurno(tramite,turno);

        mostrarTramite(tramite);

      this->add(this,tramite);
    }
 return retorno;
}

int atenderTramite(ArrayList* listaPendientes, ArrayList* listaAtendidos)
{
    int atendio=-1;
    eTramite* tramiteActual;

    if(listaPendientes!=NULL && listaAtendidos!=NULL)
    {
            tramiteActual = (eTramite*) listaPendientes->pop(listaPendientes,0);
            listaAtendidos->add(listaAtendidos,tramiteActual);
            mostrarTramite(tramiteActual);
            atendio=0;
    }
    return atendio;
}

int mostraListaTramites(ArrayList* listado)
{
    int listo=-1;
    int i;
    int len;
    eTramite* tramiteActual;

    if(listado!=NULL)
    {
        len=listado->len(listado);

        for(i=0;i<len;i++)
        {
            tramiteActual=(eTramite*)listado->get(listado,i);
            mostrarTramite(tramiteActual);
        }
        listo=0;
    }
    return listo;
}

