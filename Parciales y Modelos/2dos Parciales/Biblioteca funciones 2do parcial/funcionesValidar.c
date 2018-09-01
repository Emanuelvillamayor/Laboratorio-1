#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funcionesValidar.h"


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


int setNum(ePersona* this,int num)
{
    int retorno=0;
    if(this!=NULL && num>=0 )
    {
        this->num=num;
        retorno=1;
    }
    return retorno;
}

int setChar(ePersona* this,char* cadena)
{
    int retorno=0;
    if(this!=NULL && cadena!=NULL)
    {
        strcpy(this->nombre,cadena);
        retorno=1;
    }

    return retorno;
}

int getNum(ePersona* this)
{
    int retorno=0;

    if(this!=NULL)
    {
        retorno=this->num;
    }

  return retorno;
}
char* getChar(e* this)
{
    char* retorno=NULL;

    if(this!=NULL)
    {
        retorno=this->;

    }

  return retorno;
}




/***********************************ESPECIFICOS***********************************/
int esTelefono(char* str)
{
   int i=0;
   int contadorGuiones=0;
   while(*(str+i) != '\0')
   {
       if((*(str+i)!= ' ') && (*(str+i) != '-') && (*(str+i) < '0' || *(str+i) > '9'))
           return 0;
       if(*(str+i) == '-')
            contadorGuiones++;
       i++;
   }
   if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}
int esDni(char* dato)
{
     int tam;
    int retorno=0;
    int i=0;
    tam=strlen(dato);
    for(i=0;i<tam;i++)
   {

    if(*(dato+i)>=0&&(isdigit(*(dato+i))!=0)&&tam==9)
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
int esNumericoFlotante(char* str)
{
   int i=0;
   int cantidadPuntos=0;
   while(*(str+i) != '\0')
   {
       if ((*(str+i) == '.' )&& cantidadPuntos == 0)
       {
           printf("%c\n",*(str+i));
           cantidadPuntos++;
           i++;
           continue;

       }
       if(*(str+i) < '0' || *(str+i) > '9')
           return 0;
       i++;
   }
   return 1;
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

int getValidTelefono(char* mensaje,char* mensajeError,char* input)
{
      int retorno=-1;

    char AUX[100];

    getString(mensaje,AUX);
    while(retorno==-1)
    {
    if(esTelefono(AUX))
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
float getValidFlotante(char* mensaje,char* mensajeError,char* input)
{
    float retorno=-1;
    char AUX[100];
    getString(mensaje,AUX);
    while(retorno==-1)
    {
    if(esNumericoFlotante(AUX))
    {

        strcpy(input,AUX);
        retorno=atof(input);
        break;
    }
    else{
          getString(mensajeError,AUX);
        }
    }

    return retorno;
}


ePersona* estrucutra_new(void)
{
    ePersona* aux;
    aux = (ePersona*)malloc(sizeof(ePersona));

    return aux;
}

int Persona_compareInt(void* pPersonaA,void* pPersonaB)
{
    int retorno;
    ePersona* p1;
    ePersona* p2;

    p1=(ePersona*)pPersonaA;
    p2=(ePersona*)pPersonaB;

  if(p1->num<p2->num)
  {
      retorno=-1;
  }
  else if(p1->num>p2->num)
  {
      retorno=1;
  }
  else
  {
      retorno=0;
  }
return retorno;
}


int Persona_compareString(void* pPersonaA,void* pPersonaB)
{
    int retorno;
    ePersona* p1;
    ePersona* p2;

    p1=(ePersona*)pPersonaA;
    p2=(ePersona*)pPersonaB;

    retorno=strcmp(p1->nombre,p2->nombre);
    return retorno;
}

int Persona_print(ePersona* persona)
{
    int retorno=0;
    if(persona!=NULL)
    {
      printf("%d    %s   %s",persona->num,persona->nombre,persona->alfaNumerico);
      retorno=1;
    }
    return retorno;
}

int Persona_delete(ePersona* persona)
{
    int retorno=0;
    if(persona!=NULL)
    {
        free(persona);
        retorno=1;
    }
    return retorno;
}



void guardarBinario(ArrayList* this)
{
    int i;
    int len;
    ejemplo* aux;
    FILE* pFile;
    if(this!=NULL)
    {
        len=this->len(this);
        pFile=fopen("archivo.dat","wb");
        if(pFile!=NULL)
        {
            fwrite(&len,sizeof(int),1,pFile);
            for(i=0; i<len; i++)
            {
                aux=this->get(this,i);
                fwrite(aux,sizeof(ejemplo),1,pFile);
            }
        }
        fclose(pFile);
    }
}

void cargarBinario(ArrayList* this)
{
    int i;
    ejemplo* aux;
    FILE* pFile;
    int len;
    pFile=fopen("archivo.dat","rb");
    if(pFile!=NULL)
    {
        fread(&len,sizeof(int),1,pFile);
        for(i=0;i<len;i++)
        {
            aux=constructor();
            fread(aux,sizeof(ejemplo),1,pFile);
            this->add(this,aux);
        }
    }
    fclose(pFile);
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















void double_sort(ArrayList* this)
{
    ArrayList* clone;
    clone=al_newArrayList();
    int i;
    int j;
    ejemplo* aux;
    ejemplo* aux2;
    void* auxiliar;
    if(this!=NULL&&clone!=NULL)
    {
        clone=al_clone(this);
        al_sort(clone,sort_string,1);
        printf("\nLista alfabeticamente\n");
        printAll(clone);
        printf("\n\n\n\n");
        for(i=0;i<clone->len(clone)-1;i++)
        {
            aux=clone->get(clone,i);
            for(j=i+1;j<clone->len(clone);j++)
            {
                aux2=clone->get(clone,j);
                if(aux!=NULL&aux2!=NULL)
                {
                    if(get_char(aux)==get_char(aux2))
                    {
                        if(get_float(aux)<get_float(aux2))
                        {
                            auxiliar=al_pop(clone,i);
                            al_push(clone,i,aux2);
                            al_set(clone,j,auxiliar);
                        }
                    }
                }
            }
        }
        printAll(clone);
    }
}



void automovil_set_idIngreso(ArrayList* this,ArrayList* this2,eAutomovil* aux)
{
    int contador=0;
    eAutomovil* auxiliar;
    int i;
    if(this!=NULL&&aux!=NULL)
    {
        for(i=0;i<al_len(this);i++)
        {
            auxiliar=al_get(this,i);
            if(auxiliar->estado==1)
            {
                contador=contador+1;
            }
        }
        for(i=0;i<al_len(this2);i++)
        {
            auxiliar=al_get(this2,i);
            if(auxiliar->estado==2)
            {
                contador=contador+1;
            }
        }

    }
    aux->idIngreso=contador;
}
