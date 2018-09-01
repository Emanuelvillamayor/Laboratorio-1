/**                        EJEMPLO 1:
Programa que permite crear ingresar los datos de sueldo y de edad, saber su indice y
devolver el promedio de sueldo
*************************************************/



#include <stdio.h>
#include <stdlib.h>
/**El "define" sirve para que esa variable no se "modifique"
y para que ocupe menos espacio en memoria*/
#define MAX 5

int main()
{
int edad[MAX],i;
float sueldo[MAX],suma=0,prom,aux;
for(i=0;i<MAX;i++)
{                                      /**El "+1" que esta indicado , es para saber en
                                        parte del indice se encuentra ese valor tanto para
                                        "edad" como para "legajo"*/
                                        /**Esto no afecta la "cantidad de iteraciones" que
                                        va a realizar "i" es decir tantas veces como sea menor
                                        a "MAX"*/
printf("Ingrese la edad del legajo %d: ",i+1);
scanf("%d",&edad[i]);
printf("Ingrese el sueldo del legajo %d: ",i+1);
scanf("%f",&aux);
sueldo[i]=aux;
}
for(i=0;i<MAX;i++)
suma=suma+sueldo[i];
prom=suma/MAX;
printf("El sueldo promedio es %.2f",prom);
}
