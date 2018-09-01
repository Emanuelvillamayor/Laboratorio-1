#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vectores paralelos.h"
/**podria haber echo una constante que reemplace el [3], ya que no ocupa memoria/*/
/** Estos "int" no van entre "[]" porque no llamamos a TODO EL VECTOR , solo a UNO de ellos"*/
int main()
{
    int legajo[3];
    int indexLegajo;
    /**Segunda dimension para que los tres nombres puedan guardar "x" cantidad de nombres en este caso [30]
    esto funciona como las matrices es decir "3 filas " y "30 columnas"*/
   char nombre [3][30]; // get
   int nota1 [3]; //scanf
    int nota2 [3];//scanf

  float prom[3]; // funcion de dos enteros y devuelva flotante
    int i;


    for (i=0;i<3;i++)
    {
    printf("ingrese legajo ");
    scanf("%d",&legajo[i]);
    fflush(stdin);
    printf("Ingrese su nombre ");
     gets(nombre[i]);/**cuando leemos "caracter" o "cadena" , siempre el fflush*/
     printf("ingrese nota 1 ");
    scanf(" %d",&nota1[i]);
    printf("ingrese nota 2 ");
    scanf("%d",&nota2[i]);
                       /**Aca pongo los [] porque le paso UN SOLO VALOR */
      prom[i]=promedio(nota1[i],nota2[i]);


    }
      indexLegajo=buscarLegajo(legajo,3,2);
      if (indexLegajo==-1)
      {
      printf("No se encontro el indice\n");
      }
      else
      {
      printf("Indice encontrado :%d\n",legajo[i]+1);
      }
    mostrarAlumnos(legajo,nombre,nota1,nota2,prom);
    return 0;
}

/** tarea : 1 funcion que reciba el vector de legajos , el tamaño de vector de legajos y que reciba 1 numero de legajo
va a devolver el indice del legajo o -1 , si esta me devulve el indice y si no -1*/



