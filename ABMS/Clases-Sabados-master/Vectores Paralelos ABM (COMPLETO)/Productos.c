#include <stdio.h>
#include "Productos.h"
#include <stdlib.h>
#include <string.h>

char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}


void mostrarProductos(int idProducto[], char descripcion[][50], int stock[], float precioUnitario[], int cant)
{
    int i;
    printf("%5s %20s %5s %s\n","id","descripcion","stock","precio");
    for(i=0; i<cant; i++)
    {
        if(idProducto[i]!=0)
        {
            printf("%5d %20s %5d %.2f\n", idProducto[i], descripcion[i], stock[i], precioUnitario[i]);
        }
    }
}

void ordenarProductos(int idProducto[], char descripcion[][50], int stock[], float precioUnitario[], int cant)
{
    int auxInt;
    float auxFloat;
    char auxString[50];
    int i;
    int j;
    for(i=0; i<cant-1; i++)
    {
        for(j=i+1; j<cant; j++)
        {
            if(stricmp(descripcion[i],descripcion[j])>0)
            {
                strcpy(auxString,descripcion[i]);
                strcpy(descripcion[i],descripcion[j]);
                strcpy(descripcion[j], auxString);


                auxInt = idProducto[i];
                idProducto[i]= idProducto[j];
                idProducto[j]=auxInt;


                auxInt = stock[i];
                stock[i]= stock[j];
                stock[j]=auxInt;


                auxFloat = precioUnitario[i];
                precioUnitario[i]= precioUnitario[j];
                precioUnitario[j]=auxFloat;


            }
        }
    }
}

int cargarProductos(int idProducto[], char descripcion[][50], int stock[], float precioUnitario[], int cant)
  {
    int posicion;
    int auxiliarId;
  //  float auxiliarPrecio;
  //  char auxiliarPrecioStr[50];
    int auxiliarStock;
    char auxiliarIdStr[50];
    char auxiliarStockStr[50];
    char auxiliarDescripcionStr[50];

     printf("CARGO\n");

                posicion = buscarLibre(idProducto, cant);
                if(posicion!=-1)
                 {

                      if (!getStringNumeros("Ingrese el id: ",auxiliarIdStr))
                {
                    printf ("El legajo debe ser numerico\n");
                    return -2;
                }
                auxiliarId = atoi(auxiliarIdStr);

                  if(buscarId(idProducto,cant,auxiliarId) != -1)
                {
                    printf("\n\nEL ID YA EXISTE!!!\n");
                    return -2;
                }

                     if (!getStringLetras("Ingrese el nombre: ",auxiliarDescripcionStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");
                    return -2;
                }



                      if (!getStringNumeros("Ingrese el stock: ",auxiliarStockStr))
                {
                    printf ("El stock debe ser numerico\n");
                    return -2;
                }
                auxiliarStock = atoi(auxiliarStockStr);


                   printf("Ingrese precio unitario: ");
                    scanf("%f", &precioUnitario[posicion]);
                    /*if(!getStringNumeros("Ingrese el precio unitario :",auxiliarPrecioStr))
                    {
                        printf ("El precio unitario debe ser numerico\n");
                    return -2;
                    }
                    auxiliarPrecio=atof(auxiliarPrecioStr);*/

                    strcpy(descripcion[posicion],auxiliarDescripcionStr);
                   // precioUnitario[posicion]=auxiliarPrecio;
                     idProducto[posicion] = auxiliarId ;
                     stock[posicion] = auxiliarStock;


                }
                else
                {
                    posicion=-1;
                }

return posicion;
}






int modificarProducto(int idProducto[], char descripcion[][50], int stock[], float precioUnitario[], int cant)
{
int id;
int i;
int choice;
int flag ;
int nuevoStock;
float nuevoPrecio;
char auxiliarStockStr[50];
char auxiliarDescripcionStr[50];
int seguir;

flag=0;
     mostrarProductos(idProducto, descripcion, stock, precioUnitario, cant);
                id=getInt("\n Ingrese el id de producto a modificar");

                for(i=0; i<cant; i++)
                {
                    if(id == idProducto[i])//lo encontro
                    {
                         printf("%5d %20s %5d %.2f\n", idProducto[i], descripcion[i], stock[i], precioUnitario[i]);
                         printf("Que desea modificar ? \n");
                         choice=getInt("1-Descripcion\n2-Stock\n3-Precio Unitario \n");
                          if (choice==1)
                         {

                     if (!getStringLetras("Ingrese la nueva descripcion : ",auxiliarDescripcionStr))
                {
                    printf ("La descripcion debe estar compuesto solo por letras\n");
                    return 0;
                }


                            seguir=getChar("Desea realizar el cambio s/n? ");
                            if(seguir=='s')
                             {
                               strcpy(descripcion[i],auxiliarDescripcionStr);
                             }
                             else
                             {
                               printf("Accion cancelada!\n");
                                flag=0;
                                 return flag;
                             }
                         }

                         if (choice==2)
                         {

                if (!getStringNumeros("Ingrese el nuevo stock: ",auxiliarStockStr))
                      {
                          printf ("El stock debe ser numerico\n");
                        return 0;
                      }
                nuevoStock = atoi(auxiliarStockStr);
                          seguir=getChar("Desea realizar el cambio s/n? ");
                           if(seguir=='s')
                            {
                              stock[i]=nuevoStock;
                            }
                           else
                            {
                            printf("Accion cancelada!\n");
                             flag=0;
                                 return flag;

                            }
                         }
                         if (choice==3)
                         {
                           nuevoPrecio=getFloat("Ingrese el nuevo precio unitario: ");
                           seguir=getChar("Desea realizar el cambio s/n? ");
                            if(seguir=='s')
                              {
                                 precioUnitario[i]=nuevoPrecio;
                              }
                            else
                              {
                                 printf("Accion cancelada!\n");
                                 flag=0;
                                 return flag;
                              }
                         }
                             flag = 1;
                         break;

                    }

                }
                if(flag == 0)
                {
                    printf("id no existe\n");
                }
return flag;
}



int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}


void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}



int buscarLibre(int id[], int tam)
{
    int index = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(id[i]==0)
        {
            index = i;
            break;
        }
    }

    return index;
}



int buscarId(int array[],int cantidad_de_elementos,int valor)
{
    int i;
    for(i=0;i < cantidad_de_elementos; i++)
    {
        if(array[i] == valor)
        {
            return i;
        }
    }
    return -1;
}



