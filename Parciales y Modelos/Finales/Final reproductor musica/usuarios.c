#include <stdio.h>
#include <stdlib.h>
#include "usuarios.h"
#include <string.h>
#include <ctype.h>

eUsuario* eUsuario_new()
{
    eUsuario* retorno;
    retorno=(eUsuario*) malloc(sizeof(eUsuario));
    return retorno;
}


int eUsuario_setId(eUsuario* this,int ID)
{
    int retorno=0;
    if(this!=NULL)
    {
        this->id=ID;
        retorno=1;
    }
    return retorno;
}


int eUsuario_setNombre(eUsuario* this,char* NOMBRE)
{
    int retorno=0;
    if(this!=NULL && NOMBRE!=NULL)
    {
        strcpy(this->nombre,NOMBRE);
        retorno=1;
    }
    return retorno;
}



int eUsuario_setEmail(eUsuario* this,char* EMAIL)
{
    int retorno=0;
    if(this!=NULL && EMAIL!=NULL)
    {
        strcpy(this->email,EMAIL);
        retorno=1;
    }
    return retorno;
}



int eUsuario_setSexo(eUsuario* this,char*SEXO)
{
    int retorno=0;
    if(this!=NULL && SEXO!=NULL)
    {
        strcpy(this->sexo,SEXO);
        retorno=1;
    }
    return retorno;
}



int eUsuario_setPais(eUsuario* this,char* PAIS)
{
    int retorno=0;
    if(this!=NULL && PAIS!=NULL)
    {
        strcpy(this->pais,PAIS);
        retorno=1;
    }
    return retorno;
}



int eUsuario_setPassword(eUsuario* this,char* PASSWORD)
{
    int retorno=0;
    if(this!=NULL && PASSWORD!=NULL)
    {
        strcpy(this->password,PASSWORD);
        retorno=1;
    }
    return retorno;
}



int eUsuario_setipAdress(eUsuario* this,char* ADRESS)
{
    int retorno=0;
    if(this!=NULL && ADRESS!=NULL)
    {
        strcpy(this->ipAdress,ADRESS);
        retorno=1;
    }
    return retorno;
}










int eUsuario_getId(eUsuario* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        retorno=this->id;
    }
    return retorno;
}



char* eUsuario_getNombre(eUsuario* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->nombre;
    }
    return retorno;
}



char* eUsuario_getEmail(eUsuario* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->email;
    }
    return retorno;
}



char* eUsuario_getSexo(eUsuario* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->sexo;
    }
    return retorno;
}



char* eUsuario_getPais(eUsuario* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->pais;
    }
    return retorno;
}



char* eUsuario_getPassword(eUsuario* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->password;
    }
    return retorno;
}



char* eUsuario_getipAdress(eUsuario* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->ipAdress;
    }
    return retorno;
}



int mostrarUsuario(eUsuario* this)
{
    int retorno=0;
    if(this!=NULL)
    {

        printf("%3d  %10s %35s %8s %2s %35s %20s\n",eUsuario_getId(this),eUsuario_getNombre(this),eUsuario_getEmail(this),eUsuario_getSexo(this),eUsuario_getPais(this),eUsuario_getPassword(this),eUsuario_getipAdress(this));
        retorno=1;
    }
    return retorno;
}

int mostrarListaUsuarios(ArrayList* this)
{
    int retorno=0;
    int len;
    eUsuario* usuario;
    int i;

    if(this!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            usuario=(eUsuario*) this->get(this,i);
            mostrarUsuario(usuario);
        }
        retorno=1;
    }
    return retorno;
}





int cargarDesdeArchivo(ArrayList* this)
{
	FILE *f;
	int r;
	int auxId;
	char id[50],nombre[50],email[50],sexo[50],pais[50],password[50],ipAdress[50];
	eUsuario* usuario;

	f=fopen("usuarios.dat", "rb");
	if(f==NULL)
    {
        printf("Archivo vacio!!\n");
        return 1;
    }

	    do{
            r=fscanf(f,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,email,sexo,pais,password,ipAdress);

            if(r==7)
            {
                usuario=eUsuario_new();
                if(usuario!=NULL)
                {
                    auxId=atoi(id);
                    eUsuario_setId(usuario,auxId);
                    eUsuario_setNombre(usuario,nombre);
                    eUsuario_setEmail(usuario,email);
                    eUsuario_setSexo(usuario,sexo);
                    eUsuario_setPais(usuario,pais);
                    eUsuario_setPassword(usuario,password);
                    eUsuario_setipAdress(usuario,ipAdress);
                    this->add(this,usuario);

                }
            }

	    }while(!feof(f));

        printf("Archivo cargado\n");

	fclose(f);
	return 0;
}

int ordenarNombreUsuario(void* usuario1,void* usuario2)
{
    eUsuario* u1;
    eUsuario* u2;
    int retorno;

    u1=(eUsuario*)usuario1;
    u2=(eUsuario*)usuario2;

    retorno=strcmp(u1->nombre,u2->nombre);
    return retorno;
}

int ordenarPaisUsuario(void* usuario1,void* usuario2)
{
    eUsuario* u1;
    eUsuario* u2;
    int retorno;

    u1=(eUsuario*)usuario1;
    u2=(eUsuario*)usuario2;

    retorno=strcmp(u1->pais,u2->pais);
    return retorno;
}



int doble_Sort(ArrayList*  lista)
{
  ArrayList* listaNombre;
  int i,j;
  int retorno=0;
  eUsuario* auxusuario;
  eUsuario* auxusuariodos;
  eUsuario* auxiliar;

  listaNombre=al_clone(lista);


  al_sort(listaNombre,ordenarNombreUsuario,1);

   mostrarListaUsuarios(listaNombre);


  for(i=0;i<lista->len(lista)-1;i++)
  {
      auxusuario=(eUsuario*)lista->get(lista,i);
      for(j=i+1;j<lista->len(lista);j++)
      {
          auxusuariodos=(eUsuario*)lista->get(lista,j);


         if(stricmp(auxusuario->nombre,auxusuariodos->nombre)==0)
         // if(get_char(auxusuario)==get_char(auxusuariodos))
          {

              if(auxusuario->id>auxusuariodos->id)

              {
                  auxiliar=al_pop(listaNombre,i);
                  al_push(listaNombre,i,auxusuariodos);
                  al_set(listaNombre,j,auxiliar);
            }
          }

      }
  }
  printf("\n\n\nLUEGO\n\n\n");
mostrarListaUsuarios(listaNombre);


  return retorno;
}


char get_char(eUsuario* usuario)
{
    char caracter[20];
   strcpy(caracter,usuario->nombre);
    return caracter[0];
}
