#include <stdio.h>
#include <stdlib.h>
/*********************************************************************************
 * CASO 1 :                                                                      *
 *                                                                               *
 *-Se muestra el comportamiento de un VECTOR de tipo INT y CHAR trabajando sobre *
 * la PILA O STACK .                                                              *
 ********************************************************************************/


int main()
{
    printf("\n");
    printf("****************************CASO INT- int vec[3]*******************************\n");
    /**Creo el vector de tipo INT*/

    int vec[3];


     /**Muestro DIRECCIONES DE MEMORIA de cada uno*/
     printf("Direcciones de memoria:\n");
     printf("-Direccion de memoria (vec): %d\n",vec); /**En estos primeros tres casos se muestra siempre la primera direccion de memoria*/
     printf("-Direccion de memoria (&vec): %d\n",&vec);
     printf("-Direccion de memoria INDICE 0 (&vec[0]) : %d\n",&vec[0]);

     printf("-Direccion de memoria INDICE 1 (&vec[1]) : %d\n",&vec[1]);
     printf("-Direccion de memoria INDICE 2 (&vec[2]) : %d\n",&vec[2]);

     printf("\n");

     /**Muestro los DATOS que contiene cada Direccion de Memoria antes de CARGAR(basura)*/
     printf("Datos antes de CARGAR (basura):\n");
     printf("-Dato  INDICE 0 (vec[0]) : %d\n",vec[0]);
     printf("-Dato  INDICE 1 (vec[1]) : %d\n",vec[1]);
     printf("-Dato  INDICE 2 (vec[2]) : %d\n",vec[2]);

     /**Cargo datos*/
     vec[0]=4;
     vec[1]=34;
     vec[2]=251;

     printf("\n");

     printf("*SE CARGAN DATOS A CADA INDICE*\n");

     printf("\n");

     /**Muestro los DATOS que contiene cada Direccion de Memoria luego de CARGAR*/
     printf("Datos luego de cargar:\n");
     printf("-Dato  INDICE 0 (vec[0]): %d\n",vec[0]);
     printf("-Dato  INDICE 1 (vec[1]): %d\n",vec[1]);
     printf("-Dato  INDICE 2 (vec[2]): %d\n",vec[2]);




/**************************************CASO CHAR***********************************/

    printf("\n");
    printf("****************************CASO CHAR-char vec2[10]*******************************\n");
    printf("\n");

    /**Creo un array de tipo CHAR en la PILA*/
    char vec2[10];

    /**Muestro direccion de memoria de los primeros tres indices*/
    /**-Aclaracion: Utilizamos el "%d" ya que se muestran datos numericos
        que son las Direcciones de memoria ,no el dato de tipo char contenido*/


     printf("Direcciones de memoria mediante %%d: \n");
     printf("-Direccion de memoria (vec2): %d\n",vec2); /**En estos primeros tres casos se muestra siempre la primera direccion de memoria*/
     printf("-Direccion de memoria (&vec2): %d\n",&vec2);
     printf("-Direccion de memoria INDICE 0 (&vec2[0]) : %d\n",&vec2[0]);

     printf("-Direccion de memoria INDICE 1 (&vec2[1]) : %d\n",&vec2[1]);
     printf("-Direccion de memoria INDICE 2 (&vec2[2]) : %d\n",&vec2[2]);

     printf("\n");

     /**Muestro los DATOS que contiene cada Direccion de Memoria antes de CARGAR(basura)*/
     printf("Datos antes de CARGAR (basura):\n");
     printf("-Se deja comentado porque EXPLOTA el programa al no tener nada!!\n");

    // printf("Dato  INDICE 0 vec2[0] : %s\n",vec[0]);
    // printf("Dato  INDICE 1 vec2[1] : %s\n",vec[1]);
    // printf("Dato  INDICE 2 vec2[2] : %s\n",vec[2]);


     /**Cargo datos*/
     vec2[0]='s';
     vec2[1]='o';
     vec2[2]='s';
     vec2[3]='\0';

     printf("\n");

     printf("*SE CARGAN DATOS A CADA INDICE*\n");

     printf("\n");

     /**Muestro los DATOS que contiene cada Direccion de Memoria luego de CARGAR*/
     printf("Datos luego de cargar mediante %%c :\n");

     printf("-Dato  INDICE 0 (vec2[0]): %c\n",vec2[0]);
     printf("-Dato  INDICE 1 (vec2[1]): %c\n",vec2[1]);
     printf("-Dato  INDICE 2 (vec2[2]): %c\n",vec2[2]);
     printf("-Dato  INDICE 3 (vec2[3]): (final de cadena) %c\n",vec2[3]);

     printf("\n");

     /**Voy a mostrar todo la cadena mediante "%s"*/

     printf("Contenido de la cadena mediante %%s:\n");
     printf("-Muestro contenido de la cadena (vec 2): %s\n",vec2);
     printf("-Muestro contenido de la cadena (&vec 2): %s\n",&vec2);
     printf("-Muestro contenido de la cadena (&vec2[0]):%s\n",&vec2[0]);
     printf("-Muestro contenido de la cadena (&vec2[1]):%s\n",&vec2[1]);

     printf("NO PUEDO HACER **(vec2[0])** SOLAMENTE PORQUE NECESITA LA DIRECCION DE MEMORIA NO EL DATO QUE ESTA ADENTRO");


    return 0;
}


