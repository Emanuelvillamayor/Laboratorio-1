#include <stdio.h>
#include <stdlib.h>

/*
1er paso:
Declaracion de funcion o prototipo de la funcion
      1: indicar tipo de dato devuelvo ,puede ser:
          (int,float , char , void , double , long)

2do paso :
Darle nombre a la funcion:
se le adjunta un verbo para poder "identificar funciones"
(verbo+objeto)
3er paso:
Parametros de entrada:voy a tener que definir tipo de dato y nombre de variable
Indicar que variables le vamos a dar para que trabaje
Declaro una variable por cada parametro que va a recibir la funcion

Ejemplo : solo mostrar mensaje "hola mundo "



2do Paso :Implementacion o desarrollo
copiamos el prototipo debajo del main, se le saca punto y coma y se abre llaves


3er paso :Llamada a la funcion

lo hago desde el main
*/




//prototipo de funcion o declaracion de funcion
//Recibe entero lo muestra y devuelve entero incrementado
int mostrarEincrementar(int);



int main()

{
// si quiero declarar dos variables con el mismo nombre no se puede porque ambas van a apuntar a la mism a direccion de memoria dentro de main
    int numero;
    int incremento;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);


    //definir llamada de funcion
   incremento= mostrarEincrementar(numero);
    // (numero) es el parametro actual
   printf("\nEl numero incrementado es : %d" , incremento);


    return 0;
}
//implementacion o desarrollo
int mostrarEincrementar(int x)
//(int numero) es el parametro formal es decir el parametro que recibe la funcion
{
    //funcion que muestra el numero como parametro
    int retorno;
       printf("El numero ingresado es : %d", x);
       retorno=x+10;
    //necesito que la funcion devuelva
    return retorno;



}

/*las variables numero son distintas es decir las de la implementacion y las de la llamada de la fucnion*/
/* Existen 4 combinacones o tipos posibles:
Prototipo 1 : no retorna ni recibe    Se llama " funcion nula"
Prototipo 2 : ni retorna pero si recibe
Prototipo 3: Retorna y recibe
Prototipo 4: retorna y no recibe
*/





