#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#include "Funciones.h"

int main()
{
 int vector[TAM];
 int indice;
 int max;
 cargarVector(vector,TAM);
 indice=buscarValor (vector,TAM,14);
    if (indice==-1)
   {
   printf("No lo encontro\n");
   }
   else
   {
   printf("Encontro el valor \n");
   }
 //cargarVector(vector,TAM);
  modificarValor(vector);
 mostrarVector(vector,TAM);

   max =Maximo(vector,TAM);

   printf("El vector maximo es : %d",max);
    return 0;
}
