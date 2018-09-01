
#include "alquiler.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define ALQUILADO 0
#define FINALIZADO 1

eAlquiler* eAlquiler_new()
{
    eAlquiler* retorno;
    retorno=(eAlquiler*)malloc(sizeof(eAlquiler));
    return retorno;
}
int setidCliente(eAlquiler* this,int id)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->idCliente=id;
        retorno=1;
    }
 return retorno;
}
int setidAlquiler(eAlquiler*this,int id)
{
        int retorno=0;
    if(this!=NULL )
    {
        this->idAlquiler=id;
        retorno=1;
    }
 return retorno;
}
int setequipo(eAlquiler*this,int equipo)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->equipo=equipo;
        retorno=1;
    }
 return retorno;
}
int settiempoEstimado(eAlquiler*this,int tiempo)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->tiempoEstimado=tiempo;
        retorno=1;
    }
 return retorno;
}

int settiempoReal(eAlquiler*this,int tiempo)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->tiempoReal=tiempo;
        retorno=1;
    }
 return retorno;
}
int setestado(eAlquiler*this,int estado)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->estado=estado;
        retorno=1;
    }
 return retorno;
}



int getidCliente(eAlquiler* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->idCliente;
    }
  return retorno;
}
int getidAlquiler(eAlquiler* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->idAlquiler;
    }
  return retorno;
}
int getequipo(eAlquiler* this )
   {

    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->equipo;
    }
  return retorno;
   }
int gettiempoEstimado(eAlquiler* this)
{
        int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->tiempoEstimado;
    }
  return retorno;
}
int gettiempoReal(eAlquiler* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->tiempoReal;
    }
  return retorno;
}

int getestado(eAlquiler* this)
{
        int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->estado;
    }
  return retorno;
}







