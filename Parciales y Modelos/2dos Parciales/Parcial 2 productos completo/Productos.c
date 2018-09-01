#include "Productos.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define ACTIVO 0
#define NOACTIVO 1



eProducto* eProducto_new()
{
    eProducto*  retorno;

    retorno = (eProducto* ) malloc(sizeof(eProducto));

    return retorno;
}
int setCodigo(eProducto* this,int codigo)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->codigo=codigo;
        retorno=1;
    }
 return retorno;

}
int setDescripcion(eProducto* this,char* descripcion)
{
    int retorno=0;
    if(this!=NULL &&descripcion!=NULL)
    {
        strcpy(this->descripcion,descripcion);
        retorno=1;
    }
 return retorno;
}

int setImporte(eProducto* this,float importe)
{
      int retorno=0;
    if(this!=NULL )
    {
        this->importe=importe;
        retorno=1;
    }
 return retorno;
}

int setCantidad(eProducto* this,int cantidad)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->cantidad=cantidad;
        retorno=1;
    }
 return retorno;
}
int setEstado(eProducto* this,int estado)
{
    int retorno=0;
    if(this!=NULL )
    {
        this->estado=estado;
        retorno=1;
    }
 return retorno;
}


int getCodigo(eProducto* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->codigo;
    }
  return retorno;
}
char* getDescripcion(eProducto* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
      retorno=this->descripcion;
    }
  return retorno;
}
float getImporte(eProducto* this)
{
    float retorno=-1;
    if(this!=NULL)
    {
      retorno=this->importe;
    }
  return retorno;
}
int getCantidad(eProducto* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->cantidad;
    }
  return retorno;
}
int getEstado(eProducto* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
      retorno=this->estado;
    }
  return retorno;
}

int mostrarProducto(eProducto* this)
{
    int retorno=0;
    if(this!=NULL)
    {

        printf("%d-----%.2f-----%d-----%d----%s\n",this->codigo,this->importe,this->cantidad,this->estado,this->descripcion);
        retorno=1;
    }
 return retorno;
}
int mostrarListaNoactivos(ArrayList* this)
{
    int retorno=0;
    int len;
    int i;
    eProducto* producto;
    if(this!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            producto= (eProducto*) this->get(this,i);
            if(producto->estado==NOACTIVO)
            {
              mostrarProducto(producto);
            }
        }
        retorno=1;
    }
 return retorno;
}

int mostrarListaTodos(ArrayList* this)
{
    int retorno=0;
    int len;
    int i;
    eProducto* producto;
    if(this!=NULL)
    {
        len=this->len(this);
        printf("LEN mostrar : %d\n",len);
        for(i=0;i<len;i++)
        {
            producto= (eProducto*) this->get(this,i);
              mostrarProducto(producto);
        }
        retorno=1;
    }
 return retorno;
}

int compararDescripcion(void* productoA,void* productoB)
{
    int retorno;

    eProducto* tA;
     eProducto* tB;

    tA=( eProducto*)productoA;
    tB=( eProducto*)productoB;

    retorno=strcmp(tA->descripcion,tB->descripcion);

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


    if((*(dato+i)>=0) &&(isdigit(*(dato+i))!=0))
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
    if(tam<=50)
   {

    for(i=0;i<tam;i++)
   {

    if((isalpha(*(dato+i))!=0 || isspace(dato[i])!=0))
    {
        retorno=1;
    }
    else{
        retorno=0;
        break;
    }
   }
   }
   return retorno;
}

int esCodigo(char* dato)
{
    int tam;
    int retorno=0;
    int i=0;
    tam=strlen(dato);
    int auxdato=atoi(dato);

    for(i=0;i<tam;i++)
   {

    if(auxdato<=1000&&(*(dato+i)>=0) &&(isdigit(*(dato+i))!=0))

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
int esNumericoFlotante(char* str)
{
   int i=0;
   int cantidadPuntos=0;
   while(*(str+i) != '\0')
   {
       if ((*(str+i) == '.' )&& cantidadPuntos == 0)
       {
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
int getValidCodigo(char* mensaje,char* mensajeError,char* input)
{
    int retorno=-1;

    char AUX[100];

    getString(mensaje,AUX);
    while(retorno==-1)
    {
    if(esCodigo(AUX))
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

int codigoExistente(int codigo,ArrayList* lista)
{
    int retorno=0;
    eProducto* producto;
    int len;
    int i;

    if(lista!=NULL)
    {
        len=lista->len(lista);
        if(len==0)
        {
            retorno=1;
        }
        for(i=0;i<len;i++)
        {

            producto=lista->get(lista,i);
            if(producto->codigo==codigo ||producto->estado==ACTIVO)
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
int altaProducto(ArrayList* this)
{
    int retorno=0;
    float importe;
    int codigo;
    int cantidad;
    char auxCodigo[50];
    char auxImporte[50];
    char auxDescripcion[50];
    char auxCantidad[50];

    eProducto* producto;
    if(this!=NULL)
    {
         producto=eProducto_new();
         codigo=getValidCodigo("Ingrese el codigo: ","Error,Reingrese el codigo: ",auxCodigo);
         if(codigoExistente(codigo,this))
         {

         setCodigo(producto,codigo);

         importe=getValidFlotante("Ingrese el importe: ","Error,Reingrese el importe: ",auxImporte);
         setImporte(producto,importe);

         cantidad=getValidInt("Ingrese la cantidad: ","Error, Reingrese la cantidad",auxCantidad);
         setCantidad(producto,cantidad);

         strcpy(auxDescripcion,getValidChar("Ingrese una breve descripcion : ","Error,reingrese descripcion",auxDescripcion));
         setDescripcion(producto,auxDescripcion);

         setEstado(producto,NOACTIVO);

         al_add(this,producto);

        retorno=1;
         }
         else
         {
             printf("Error,codigo existente\n");
         }
    }
 return retorno;
}

int modificarProducto(ArrayList* this)
{
    int codigo;
    char auxCodigo[50];
    char auxImporte[50];
    float importe;
    int cantidad;
    char auxDescripcion[50];
    char auxCantidad[50];
    int retorno=0;
    int i;

    eProducto* producto;

    if(this!=NULL)
    {
        printf("Codigo Importe Cantidad Estado Descripcion\n");
        mostrarListaNoactivos(this);

        codigo=getValidCodigo("Ingrese el codigo a modificar: ","Error , ingrese un valor numerico: ",auxCodigo);
        for(i=0;i<this->len(this);i++)
        {
            producto=(eProducto*) this->get(this,i);
            if(producto->codigo==codigo && producto->estado==NOACTIVO)
            {
                break;
            }
            else{
                producto=NULL;
            }
        }

         if(producto!=NULL)
          {
            printf("1-Importe\n2-Cantidad\n3-Descripcion\n");
            codigo=getValidInt("Que desea modificar?: ","Error,ingrese un valor correcto:",auxCodigo);
            if(codigo>0 && codigo<4)
            {
                switch(codigo)
                {
             case 1:
                   importe=getValidFlotante("Ingrese su  nuevo Importe: ","Error , reingrese un valor correcto:",auxImporte);
                   setImporte(producto,importe);
                   retorno=1;
                break;
             case 2:
                   cantidad=getValidInt("Ingrese su nuevo cantidad: ","Error , reingrese un valor correcto:",auxCantidad);
                   setCantidad(producto,cantidad);
                   retorno=1;
                break;
             case 3:
                   strcpy(auxDescripcion,getValidChar("Ingrese la nueva descripcion: ","Error, reingrese un valor correcto",auxDescripcion));
                   setDescripcion(producto,auxDescripcion);
                   retorno=1;
                   break;
                 }
             }
            else
             {
                printf("Error, ingrese una de las opciones indicadas!!\n");
             }
          }
        else
          {
            printf("Ingrese un CODIGO existente!\n");
          }
    }
 return retorno;

}

int bajaLogica(ArrayList* this)
{
    int retorno=0;
    int codigo;
    char opcion[20];
    char auxCodigo[20];
    int i;
    eProducto* producto;

     if(this!=NULL)
    {
        printf("Codigo Importe Cantidad Estado Descripcion\n");
         mostrarListaNoactivos(this);
         codigo=getValidCodigo("Ingrese el id que desea eliminar: ","Error, ingrese un valor numerico",auxCodigo);
         for(i=0;i<this->len(this);i++)
         {
             producto=(eProducto*) this->get(this,i);
             if(producto->codigo==codigo && producto->estado==NOACTIVO)
             {
                 break;
             }
             else{
                producto=NULL;
                }
         }

         if(producto!=NULL)
         {
             strcpy(opcion,getValidChar("Seguro que desea borrar? (si | no)","Error, ingrese un valor correcto",opcion));
             if(strcmp(opcion,"si")==0)
             {
                 producto->estado=ACTIVO;
                 retorno=1;
             }
         }
         else
         {
             printf("Error, ingrese un CODIGO existente!!\n");
         }
    }

return retorno;
}

int bajaFisica(ArrayList* this,ArrayList* listaAux)
{
    int retorno=0;
    int codigo;
    char opcion[20];
    char auxCodigo[20];
    int i;
    eProducto* producto;

     if(this!=NULL &&listaAux!=NULL)
    {
        printf("Codigo Importe Cantidad Estado Descripcion\n");
         mostrarListaNoactivos(this);
         codigo=getValidInt("Ingrese el id que desea eliminar: ","Error, ingrese un valor numerico",auxCodigo);
         for(i=0;i<this->len(this);i++)
         {
             producto=(eProducto*) this->get(this,i);
             if(producto->codigo==codigo && producto->estado==NOACTIVO)
             {
                 break;
             }
             else{
                producto=NULL;
                }
         }

         if(producto!=NULL)
         {
             strcpy(opcion,getValidChar("Seguro que desea borrar? (si | no)","Error, ingrese un valor correcto",opcion));
             if(strcmp(opcion,"si")==0)
             {
                 producto->estado=ACTIVO;
                 listaFisicaBaja(this,listaAux,producto);
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



int cargarDesdeArchivo(ArrayList* this,int limite)
{
	int flag = 0;
	FILE *f;
	int len;
	int i;
	eProducto* producto;

	f=fopen("datos.dat", "rb");
	if(f==NULL)
	{
		f=fopen("datos.dat", "wb");
		if(f==NULL)
		{
			return 1;
		}

		flag=1;
	}

	if(flag==0)
	{

	   fread(&len,sizeof(int),1,f);
	   for(i=0;i<len;i++)

       {
        producto=eProducto_new();
        fread(producto,sizeof(eProducto),1,f);
        this->add(this,producto);

       }
    }

	fclose(f);
	return 0;
}

int guardarEnArchivo(ArrayList* this,int limite)
{
	FILE *f;
	int i;
	eProducto* producto;
	int len;

		f=fopen("datos.dat","wb");
		if(f == NULL)
		{
			return 1;
		}

	len =this->len(this);


	fwrite(&len,sizeof(int),1,f);

    for(i=0;i<len;i++)

    {
        producto=this->get(this,i);
        fwrite(producto,sizeof(eProducto),1,f);
    }

	fclose(f);

	return 0;
}

int listaFisicaBaja(ArrayList* this,ArrayList* listaAux,eProducto* producto)
{
    int retorno=0;
    int i=0;
    int len;
    eProducto* auxProducto;
    if(this!=NULL && listaAux!=NULL&&producto!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            auxProducto = (eProducto*) this->get(this,i);
             if(!(auxProducto->codigo==producto->codigo))
             {
                 listaAux->add(listaAux,auxProducto);
             }
        }
    }
    return retorno;
}
