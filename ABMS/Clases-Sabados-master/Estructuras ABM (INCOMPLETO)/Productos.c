#include <stdio.h>
#include "Productos.h"
#include <stdlib.h>
#include <string.h>

int buscarLibre(eProducto producto [], int cant)
{
    int index = -1;
    int i;
    for(i=0; i<cant; i++)
    {
        if(producto[i].estado==0)
        {
            index = i;
            producto[i].estado=1;
            break;
        }
    }
    return index;
}


int ingresarProductoEnLista(eProducto productos[], int cant)
{
    int posicion;
    int cadena;


    posicion=buscarLibre(productos, cant);

    if(posicion!=-1)
    {
          productos[posicion].idProducto=getInt("Ingrese Id : ");
          if(productos[posicion].idProducto==-2)
          {
              posicion=-2;
              return posicion;
          }

       cadena=getString("Ingrese la descripcion : ",productos[posicion].descripcion);
       if(cadena==1)
       {
           return -2;
       }

        productos[posicion].stock=getInt("Ingrese Stock : ");
          if(productos[posicion].stock==-2)
          {
              posicion=-2;
              return posicion;
          }
             productos[posicion].precioUnitario=getFloat("Ingrese el precio unitario ");
                if(productos[posicion].precioUnitario==-2)
          {
              posicion=-2;
              return posicion;
          }
    }
   else{
        posicion=-1;
        }

    return posicion;
}
void ordenarProductos(eProducto producto[],int cant)
{
    int i;
    eProducto auxiliarCliente;
    int j;

                for(i=0; i < cant - 1; i++)
                {
                    if(producto[i].idProducto == -1)
                    {
                        continue;
                    }
                    for(j=i+1; j < cant; j++)
                    {
                        if(producto[j].idProducto == -1)
                        {
                            continue;
                        }
                        if(strcmp(producto[i].descripcion,producto[j].descripcion) > 0)
                        {
                            auxiliarCliente = producto[j];
                            producto[j] = producto[i];
                          producto[i] = auxiliarCliente;
                        }
                    }
                }

         }




int getString(char mensaje[],char aux[])
{
int total;
    printf("%s",mensaje);
    fflush(stdin);
    gets(aux);
 total= validarString(aux);
return total;


}
int validarString(char str[])
{
    int i=0;
    int flag=0;


       for(i=0; str[i]!='\0'; i++)
       {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           {
                printf("ERROR:No puede ingresar numeros !!\n");
                flag=1;
                break;
           }
       }
        if(flag==1)
        {
         return 1;
        }
        else{
                return 0;
        }
   }




int getInt(char texto[])
{
    int dato;
    char auxChar[200];


    printf("\n%s",texto);
    fflush(stdin);
    gets(auxChar);

    dato=validarInt(auxChar);

    return dato;
}

int validarInt(char dato [])
{
    int num;
    int flag=0;
    int i;
    {
        for(i=0; dato[i]!='\0'; i++)
        {
            if(dato[i]<'0'||dato[i]>'9')
            {
                printf("ERROR:NO PUEDE INGRESRAR LETRAS!!!!!\n");
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
         num=-2;
        }
        else
        {
            num = atof(dato);
        }
    }

    return num;
}



 float validarFloat(char dato[])
{
    int flag=0;
  //  int i;
    float total;
    total=atof(dato);
    if(total!=0) {
       flag=0;
    }
    else{
        printf("ERROR:NO PUEDE INGRESRAR LETRAS!!!!!\n");
                flag=1;
    }

  /*  {
        for(i=0; dato[i]!='\0'; i++)
        {
            if(dato[i]<'0'||dato[i]>'9')
            {
                printf("ERROR:NO PUEDE INGRESRAR LETRAS!!!!!\n");
                flag=1;
                break;
            }
        }
*/
        if(flag==1){
         total=-2;
        }
        else{
        }
    return total;
}

 float getFloat(char texto[])
 {
      float dato;
    char auxChar[200];


    printf("\n%s",texto);
    fflush(stdin);
    gets(auxChar);

    dato=validarFloat(auxChar);

    return dato;
}

void inicializarEstado(eProducto arrayProducto[],int cantidadDeElementos,int valor)
{
    int i;
    for(i=0;i < cantidadDeElementos; i++)
    {
        arrayProducto[i].estado = valor;

    }
}


void mostrarListaDeProductos(eProducto producto[], int cant)
{

     int i ;
for(i=0;i<cant;i++)
{

    if (producto[i].estado==1)
    {
    printf("%d  %s %d %.3f\n",producto[i].idProducto,producto[i].descripcion,producto[i].stock,producto[i].precioUnitario);
    }
}
}

