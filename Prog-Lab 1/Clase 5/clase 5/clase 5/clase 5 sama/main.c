#include <stdio.h>
#include <stdlib.h>
/** #define tam 5, se usa en vectores para no tener errores generalmente.
 No es una constante, es un directiva del precompilador, una instruccion,
cada vez que encuentra esa variable la reemplaza por el valor y despues compila.
La diferencia con una constante se define en tiempo de definicion. Ejamplo int const t=5;
es decir que el #define no ocupa nada de espacio
*/

int main()
{
    /**Para inucializar todos lo elementos en 0, ejemplo:int vector [5]= {};
    Para inicializar un vector a todos por el mismo numero, lo hacemos con un FOR,
    ya que con el for puedo acceder a los subindices
    Ejemplo:
    for(i=0;i<5, i++){
        vector[i] = numero;*/
    /**Colocando & me va a mostrar la direccion de memoria de cada elemento. Ejemplo: printf("%d \n", &vector[i]);*/
    /**El vector apunta a la primer direccion de memoria de los elementos. printf("%d \n", &vector[i]);
    for(i=0;i<5, i++){
    printf("%d ---%d \n", i, &vector[i]);*/
    /**inicializar un vector
    int vector [5]= {9,-3,5,14,-4};*/
    int vector [5];
    int i;
    for(i=0; i<5 ; i++){

     vector[i]= i;
    /**le indico al vector su subindice (i) para que me muestre el numero que esta en esa posicion*/

    }
    return 0;
}
/**carga secuencial recorrer las pocisiones del vector, le pido al usuario que ingrese un numero en forma secuancial.

 for(i=0;i<5 ;i++){

    printf("ingrese un numero");
    scanf ("%d",&vector[i]);
 }
* si yo recorro el vector y me paso de como  for(i=0;i<10 ;i++),
nos va a mostrar la memoria de los datos o en su defecto
va a reemplazar el valor de otras variables de tu programa o de otros programas, Ya que esta fuer adel vector



*carga aleatoria le pido al usuario que ingrese un numero y que elija
donde quiere gauardar el dato dentro del vector y si decide continuar*/


/**Funciones
void mostrarvector(int[], int)

void mostrarvector(int vec[], int tamanio)
{    int i;
     for(i=0;i<tamanio, i++){
        printf("%d ---%d \n", i, vec[i]);
     }
}

MAIN (){
int vector [5];
    int i;
    for(i=0;i<5; i++){

     vector[i]= 0;
    }

for(i=0;i<5 ;i++){

    printf("ingrese un numero");
    scanf ("%d",&vector[i]);
 }
mostrarvector (vector,TAM);

return 0;
}


Funcion2:
void modificarvector(int[])

void modificarvector(int vec[])
{
 vec[3]=789;

}
MAIN (){

mostrarvector (vector,TAM)
modificarvector (vector)
mostrarvector (vector,TAM)

)
*/
