#include "Cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define ALQUILADO 1
#define FINALIZADO 0


eCliente* cliente_new()
{
    eCliente* retorno;

    retorno = (eCliente*) malloc(sizeof(eCliente));

    return retorno;
}
int setid(eCliente* this,int id)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->id=id;
        retorno=1;
    }
 return retorno;
}
int setDni(eCliente* this,int dni)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->dni=dni;
        retorno=1;
    }
 return retorno;
}


int setNombre(eCliente* this,char* nombre)
{
    int retorno=0;
    if(this!=NULL &&nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=1;
    }
 return retorno;
}
int setApellido(eCliente* this,char* apellido)
{
    int retorno=0;
    if(this!=NULL &&apellido!=NULL)
    {
        strcpy(this->apellido,apellido);
        retorno=1;
    }
 return retorno;
}


int getid(eCliente* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->id;
    }
  return retorno;
}

int getDni(eCliente* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->dni;
    }
  return retorno;
}

char* getNombre(eCliente* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
      retorno=this->nombre;
    }
  return retorno;
}

char* getApellido(eCliente* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
      retorno=this->apellido;
    }
  return retorno;
}


int mostrarCliente(eCliente* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        printf("%d      %d       %s       %s\n",getid(this),getDni(this),getNombre(this),getApellido(this));
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


int altaCliente(ArrayList* lista,ArrayList* listaBaja)
{
    int retorno=0;
    int dni;
    int auxid;
    char auxDni[50];
    char auxNombre[50];
    char auxApellido[50];

    eCliente* cliente;
    if(lista!=NULL)
    {
        cliente=cliente_new();

        auxid=idAutoincremental(lista,listaBaja);
         setid(cliente,auxid);

         dni=getValidDNI("Ingrese su DNI: ","Error,Reingrese su Dni: ",auxDni);
     if(dniExistente(dni,lista)|| lista->isEmpty(lista))
       {
         setDni(cliente,dni);


         strcpy(auxNombre,getValidChar("Ingrese su nombre: ","Error, reingrese nombre: ",auxNombre));
         setNombre(cliente,auxNombre);

         strcpy(auxApellido,getValidChar("Ingrese su apellido: ","Error,reingrese apellido: ",auxApellido));
         setApellido(cliente,auxApellido);

         al_add(lista,cliente);

         retorno=1;
       }
       else
       {
           printf("DNI existente!\n");
           retorno=0;
       }
    }
 return retorno;
}


int modificarCliente(ArrayList* lista)
{
    int id;
    char auxid[50];
    char auxDni[50];
    int dni;
    char auxNombre[50];
    char auxApellido[50];
    int retorno=0;
    int i;

    eCliente* cliente=NULL;

    if(lista!=NULL)
    {
        mostrarLista(lista);

        id=getValidInt("Ingrese el id a modificar: ","Error , ingrese un valor numerico: ",auxid);

        for(i=0;i<al_len(lista);i++)
        {

            cliente=(eCliente*) lista->get(lista,i);
            if(cliente->id==id &&cliente!=NULL)
            {

                break;
            }
            else{
                cliente=NULL;
            }
        }

         if(cliente!=NULL)
          {
            printf("1-DNI\n2-Nombre\n3-Apellido\n");
            id=getValidInt("Que desea modificar?: ","Error,ingrese un valor correcto:",auxid);
            if(id>0 && id<4)
            {
                switch(id)
                {
             case 1:
                   dni=getValidDNI("Ingrese su nuevo DNI: ","Error , reingrese un valor correcto:",auxDni);
                   setDni(cliente,dni);
                   retorno=1;
                break;
             case 2:
                   strcpy(auxNombre,getValidChar("Ingrese el nuevo nombre: ","Error, reingrese un valor correcto",auxNombre));
                   setNombre(cliente,auxNombre);
                   retorno=1;
                break;
             case 3:
                   strcpy(auxApellido,getValidChar("Ingrese el nuevo apellido: ","Error, reingrese un valor correcto",auxApellido));
                   setApellido(cliente,auxApellido);
                   retorno=1;
                   break;
                 }
             }
            else
            {
                printf("Error, ingrese una de las opciones indicadas!!\n");
            }
          }
        else{
            printf("Ingrese un id existente!\n");
        }
    }
 return retorno;
}
int bajaCliente(ArrayList* this,ArrayList* listaBaja)
{
    int retorno=0;
    int id;
    char opcion[20];
    char auxId[20];
    int i;
    eCliente* cliente=NULL;

     if(this!=NULL)
    {
         mostrarLista(this);
         id=getValidInt("Ingrese el id que desea eliminar: ","Error, ingrese un valor numerico",auxId);
         for(i=0;i<this->len(this);i++)
         {
             cliente=(eCliente*) this->get(this,i);
             if(cliente->id==id)
             {
                 break;
             }
             else{
                cliente=NULL;
                }
         }

         if(cliente!=NULL)
         {
             strcpy(opcion,getValidChar("Seguro que desea borrar? (si | no)","Error, ingrese un valor correcto",opcion));
             if(strcmp(opcion,"si")==0)
             {
                 listaBaja->add(listaBaja,cliente);
                 this->remove(this,i);
                 retorno=1;
             }
         }
         else
         {
             printf("Error, ingrese un ID existente!!\n");
         }


    }

return retorno;

}


int mostrarLista(ArrayList* this)
{
    int retorno=0;
    int len;
    int i;
    eCliente* cliente;
    if(this!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            cliente= (eCliente*) this->get(this,i);
            mostrarCliente(cliente);
        }
        retorno=1;
    }
 return retorno;
}



int idAutoincremental(ArrayList* this,ArrayList* listaBaja)
{
    int retorno;
    int len1;
    int len2;
    eCliente* cliente1;
    eCliente* cliente2;
    if(this!=NULL && listaBaja!=NULL)
    {
        if(al_isEmpty(this)&&al_isEmpty(listaBaja))
        {
            retorno=1;
        }
        else if(al_isEmpty(this)&&(!(al_isEmpty(listaBaja))))
        {
            len2=listaBaja->len(listaBaja);
            cliente2=(eCliente*)listaBaja->get(listaBaja,len2-1);
            retorno=cliente2->id+1;
        }
        else
        {
            len1=this->len(this);
            cliente1=(eCliente*)this->get(this,len1-1);
            len2=listaBaja->len(listaBaja);
            cliente2=(eCliente*)listaBaja->get(listaBaja,len2-1);

            if(cliente2!=NULL)
            {
              if(cliente1->id > cliente2->id || cliente1->id == cliente2->id)
              {
                   retorno=cliente1->id+1;
              }
              else if(cliente1->id < cliente2->id)
              {
                   retorno=cliente2->id+1;
              }
            }
            else
            {
                 len1=this->len(this);
                 cliente1=(eCliente*)this->get(this,len1-1);
                 retorno=cliente1->id+1;
            }
        }
    }
return retorno;
}


int idAutoincrementalAlquiler(ArrayList* this)
{
    int retorno;
    int len;
    eAlquiler* alquiler;
    if(this!=NULL)
    {
        if(al_isEmpty(this))
        {
            retorno=1;
            printf("Entra al isempty\n");
        }
        else
        {
            len=this->len(this);
            alquiler=(eAlquiler*)this->get(this,len-1);
            printf("LEN %d\n",alquiler->idAlquiler);
            retorno=alquiler->idAlquiler+1;

        }
    }
return retorno;
}

int nuevoAlquiler(ArrayList* this,ArrayList* listaAlquiler)
{
    int id;
    int i=0;
    int retorno=0;
    char auxid[20];
    int equipo;
    char auxequipo[20];

    eCliente* cliente=NULL;
    eAlquiler* alquiler=NULL;

    int idAlquiler;

    mostrarLista(this);

    id=getValidInt("Ingrese el id usuario: ","Error,ingrese un valor numerico",auxid);
    for(i=0;i<this->len(this);i++)
    {
        cliente=(eCliente*)this->get(this,i);
        if(cliente->id==id)
        {
            break;
        }
        else
        {
            cliente=NULL;
        }
    }
    if(cliente!=NULL)
    {
        printf("Entro\n");
        alquiler=eAlquiler_new();

        idAlquiler=idAutoincrementalAlquiler(listaAlquiler);
        setidAlquiler(alquiler,idAlquiler);
        setidCliente(alquiler,id);

        equipo=getValidInt("Ingrese el equipo que desea (1-Amoladora|2-MEZCLADORA):","Error,ingrese un valor correcto",auxequipo);
        setequipo(alquiler,equipo);

        setestado(alquiler,ALQUILADO);

        listaAlquiler->add(listaAlquiler,alquiler);
        retorno=1;

    }
    else
    {
        printf("ID no encontrado!!\n");
    }

return retorno;
}



int mostrarAlquiler(eAlquiler* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        printf("Id cliente:%d\nId alquiler:%d\nEquipo:%d\nEstado:%d\n",getidCliente(this),getidAlquiler(this),getequipo(this),getestado(this));
        retorno=0;
    }
    return retorno;
}

int mostrarListaAlquiler(ArrayList* this)
{
    int retorno=0;
    int len;
    int i;
    eAlquiler* alquiler;
    if(this!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            alquiler= (eAlquiler*) this->get(this,i);
            if(alquiler->estado==ALQUILADO)
            {
                mostrarAlquiler(alquiler);
            }
        }
        retorno=1;
    }
 return retorno;
}



int dniExistente(int DNI,ArrayList* lista)
{
    int i;
    int len;
    int retorno=0;
    eCliente* cliente;

    if(lista!=NULL)
    {
        len=lista->len(lista);
        for(i=0;i<len;i++)
        {

            cliente=lista->get(lista,i);
            if(cliente->dni==DNI)
            {

                retorno=0;
                break;
            }
            else
            {
                retorno=1;
            }
        }
    }
return retorno;
}



int finAlquiler(ArrayList* this)
{
    int retorno=0;
    int rta;
    int len;
    int i;
    eAlquiler* alquiler=NULL;
    char charrta[50];

    if(this != NULL)
    {
        mostrarListaAlquiler(this);
        rta=getValidInt("Ingrese el id de alquiler a dar de baja: ","Error, reingrese un valor numerico",charrta);
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            alquiler=(eAlquiler*)this->get(this,i);
            if(alquiler->idAlquiler==rta)
            {
                break;
            }
            else
            {
                alquiler=NULL;
            }
        }
        if(alquiler!=NULL)
        {
            alquiler->estado=FINALIZADO;
            retorno=1;

        }
        else
        {
            printf("Error, id inexistente\n");
        }
    }
return retorno;
}
