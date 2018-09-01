#include <stdio.h>
#include <stdlib.h>

int cargarArray(int*,int);
void mostrarArray(int*,int);

int main()
{

int vector [3];

int* puntero;
int i;

  puntero= vector; /**para obtener la direccion de memoria , no hace falta "&" o "*"*/



 /* for(i=0;i<3;i++)
  {
      printf("Ingrese un numero : \n");
      scanf("%d",puntero+i);   /** no le pongo nada al puntero ya que pidela direccion de memoria*/
 // }
/*
    for(i=0;i<3;i++)
    {
        printf("NUMERO : %d \n",*(puntero+i));/**cuando quiero obtener el valor de la direccion de memoria utilizamos "*"*/
    //}


    if(cargarArray(vector,3)) /** NO hace falta ponerle una variable que reciba el retorno ya que el if lee "0" y "1"*/
    {
        printf("carga exitosa \n");
    }
    else{
        printf("Error al cargar los datos \n");
    }
    mostrarArray(vector,3);


    return 0;
}


int cargarArray(int* aray ,int tam)
{
    int i ;
    int retorno=0; /**Sirve para saber si se cargo o no en el main, si no entra al if devuelve "0"*/
    if(aray!=NULL) /**control de nulidad en funciones por las dudas ante s de hacer cualquier cosa*/
    {
        retorno=1;

        for(i=0;i<tam;i++)
          {
             printf("Ingrese un numero : \n");
              scanf("%d",aray+i);
          }
    }
    else{
        printf("Nulo\n");
    }
    return retorno;

}




void mostrarArray(int* aray,int tam)
{
  int i ;

      for(i=0;i<tam;i++)
    {
        printf("NUMERO : %d \n",*(aray+i));
    }

}
