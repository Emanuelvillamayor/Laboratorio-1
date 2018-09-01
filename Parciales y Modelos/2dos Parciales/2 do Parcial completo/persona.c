#include "persona.h"

ePersona* ePersona_new()

{
    ePersona* aux;
    aux = (ePersona*)malloc(sizeof(ePersona));
    return aux;
}

int setId(ePersona* this,int num)
{
    int retorno=0;
    if(this!=NULL && num>=0 )
    {
        this->id=num;
        retorno=1;
    }
    return retorno;
}
int setNombre(ePersona* this,char* cadena)
{
    int retorno=0;
    if(this!=NULL && cadena!=NULL)
    {
        strcpy(this->nombre,cadena);
        retorno=1;
    }

    return retorno;
}

int setSueldo(ePersona* this,float num )
{
    int retorno=0;
    if(this!=NULL && num>=0 )
    {
        this->sueldo=num;
        retorno=1;
    }
    return retorno;
}

int setEdad(ePersona* this,int edad)
{
    int retorno=0;
    if(this!=NULL && edad>=0 )
    {
        this->edad=edad;
        retorno=1;
    }
    return retorno;

}
int setProfesion(ePersona* this,char* profesion)
{
    int retorno=0;
    if(this!=NULL && profesion!=NULL)
    {
        strcpy(this->profesion,profesion);
        retorno=1;
    }

    return retorno;

}


int getId(ePersona* this)
{
    int retorno=0;

    if(this!=NULL)
    {
        retorno=this->id;
    }

  return retorno;
}
char* getNombre(ePersona* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->nombre;

    }
 return retorno;
}
float getSueldo(ePersona* this)
{
   float retorno=0;

    if(this!=NULL)
    {
        retorno=this->sueldo;
    }

  return retorno;

}
int getEdad(ePersona* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        retorno=this->edad;
    }

  return retorno;
}

char* getProfesion(ePersona* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->profesion;

    }
 return retorno;
}


int mostrarPersona(ePersona* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        printf("%d   %f   %d   %s   %s\n",getId(this),getSueldo(this),getEdad(this),getNombre(this),getProfesion(this));
    }
return retorno;
}

int listarPersona(ArrayList* this)
{
    int retorno=0;
    int i=0;
    int len;
    ePersona* persona;
    if(this!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            persona=(ePersona*)al_get(this,i);
            mostrarPersona(persona);
        }
        retorno=1;
    }
return retorno;
}



int parserCorreo(FILE* pFile , ArrayList* pArrayList)
{
int r;
int auxId;
int retorno=-1;
int auxEdad;
float auxiliarSueldo;

char nombre[100],profesion[100],id[50],edad[50],sueldo[50];
ePersona* persona;

  pFile=fopen("data.csv","r");

    if(pFile==NULL)
    {
        printf("Archivo vacio!!\n");

    }
    else{
    do{
        r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,sueldo,edad,profesion);
        if(r==5)
        {
              persona=ePersona_new();
              if(persona!=NULL)
              {
              auxId=atoi(id);
              setId(persona,auxId);

              setNombre(persona,nombre);

              auxiliarSueldo=atof(sueldo);
              setSueldo(persona,auxiliarSueldo);

              auxEdad=atoi(edad);
              setEdad(persona,auxEdad);

              setProfesion(persona,profesion);
              al_add(pArrayList,persona);
              }
        }
    }while(!feof(pFile));

    printf("Archivo cargado!!\n");
    retorno=1;
    }

    fclose(pFile);
    return retorno;
}

int functionFilter(void* persona)
{
    int retorno=0;
    ePersona* auxpersona;

    if(persona!=NULL)
    {
        auxpersona=(ePersona*) persona;
        if(getEdad(auxpersona)>30 && (strcmp(getProfesion(auxpersona),"programador")==0))
        {
            retorno=1;
        }
    }
return retorno;
}



int parserPersonaWrite(FILE* pFile , ArrayList* pArrayList)
{
int i;
int retorno=-1;

int len;

ePersona* persona;

  pFile=fopen("out.csv","w");
  len=pArrayList->len(pArrayList);
    if(pArrayList==NULL)
    {
        printf("Archivo vacio!!");
    }
    else{
    for(i=0;i<len;i++)
    {
        persona= (ePersona*) al_get(pArrayList,i);
        if(persona!=NULL)
        {
            fprintf(pFile,"%d,%f,%d,%s,%s\n",getId(persona),getSueldo(persona),getEdad(persona),getNombre(persona),getProfesion(persona));
        }
    }

    printf("Archivo creado!!\n");
    retorno=1;
    }
    fclose(pFile);
    return retorno;
}
