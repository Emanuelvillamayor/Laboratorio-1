#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3
typedef struct
{
    //Creamos nosotros un tipo de dato y creamos la variables del tipo "eAlumno"

  /**4 BYTES PESA*/  int legajo;   //SE PARA POR VALOR PORQUE ES UNA COPIA DEL ORIGINAL
   /**1 BYTE PESA*/  char nombre[50];  //SE PASA POR REFERNCIA YA QUE ES UN VECTOR
  /**4 BYTES PESA*/  float promedio;  //SE PARA POR VALOR PORQUE ES UNA COPIA DEL ORIGINAL
 /**TOTAL 58 BYTES */ /**MULTIPLICADO POR EL TAM SON 580 BYTES*/
}eAlumno;//ALIAS o "variable"


//VECTOR: void mostrar(intlegajo,char nombre[],float promedio)
void mostrar(eAlumno);/**si cambiamos algo dentro de la estructura no hace falta cambiar la funcion a diferencia de vecs*/
void mostrarVector(eAlumno[]);
void  cargarAlumno(eAlumno []);


int main()
{   //eAlumno es el "tipo(INT,FLOAT,CHAR)" y miAlumno es la "variable"
    eAlumno miAlumno   ;       /**={1,"juan",3.25};Cargado por extension*/
    eAlumno clase[T];
    //int i ;
    //CARGAR ARRAY DE "clase"
       /**FORMA  DE CARGAR DATOS DE ARRAY DE clase*/
    /*for(i=0;i<T;i++)
    {
         printf("Ingrese legajo:  ");
         scanf("%d",&clase[i].legajo);
         printf("Ingrese nombre:  ");
         fflush(stdin);
         gets(clase[i].nombre);
         printf("Ingrese promedio:  ");
         scanf("%f",&clase[i].promedio);
    }*/
    cargarAlumno(clase);
    /**FORMA DE MOSTRAR ALUMNOS */
  mostrarVector(clase);
    /*  for(i=0;i<T;i++)
   {
       mostrar(clase[i]);
   }*/


   // eAlumno otroAlumno;

    /**cargado por defecto*/
/*    otroAlumno.legajo=2;
    strcpy(otroAlumno.nombre,"maria")  ;//no puedo hacer  otroAlumno.nombre="maria";
     otroAlumno.promedio=6;
    // miAlumno =otroAlumno; // se copian los valores;*/
/**CARGAR POR USUARIO*/
    printf("Ingrese legajo:  ");
    scanf("%d",&miAlumno.legajo);
        printf("Ingrese nombre:  ");
        fflush(stdin);
        gets(miAlumno.nombre);
         printf("Ingrese promedio:  ");
    scanf("%f",&miAlumno.promedio);




  /*  printf("%d  %s  %f\n",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio);
    printf("%d  %s  %f\n",otroAlumno.legajo,otroAlumno.nombre,otroAlumno.promedio);*/

    mostrar(miAlumno);
   // mostrar(otroAlumno);
    return 0;
}

void mostrar(eAlumno unAlumno)
{
    printf("%d  %s  %f\n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}
void mostrarVector(eAlumno alumno[])
{
    int i ;

         for(i=0;i<T;i++)
   {
       mostrar(alumno[i]);
   }
}
   void  cargarAlumno(eAlumno alumno[])
     {
         int i;
          for(i=0;i<T;i++)
    {
         printf("Ingrese legajo:  ");
         scanf("%d",&alumno[i].legajo);
         printf("Ingrese nombre:  ");
         fflush(stdin);
         gets(alumno[i].nombre);
         printf("Ingrese promedio:  ");
         scanf("%f",&alumno[i].promedio);
    }
     }
