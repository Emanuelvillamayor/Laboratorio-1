/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un número tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los máximos y mínimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
 /*   int num;
int max;
int min;
int suma=0;
float promedio=0;
int contNum=0;
int flag=0;

while(contNum<5)
{
    printf("Ingrese un numero:");
    scanf("%d",&num);

suma=num+suma;
if (num>max||flag==0)
{
max=num;
}
if (num<min||flag==0)
{
min=num;
flag=1;
}

contNum++;
}
promedio=(float)suma/contNum;

    printf("El maximo es: %d\n",max);
    printf("El minimo es: %d\n",min);
    printf("El promedio es:  %f\n", promedio);
    return 0;

*/










/**
    int maximo;
    int minimo;
    int acumulador;
    int auxiliarInt;
    int i;

    // Solicito el primer número el cual por ser el primero sera tanto el
    // maximo como el minimo y el primer numero a ser acumulado
    printf("Ingrese un numero: ");
    scanf("%d",&auxiliarInt);
    maximo = auxiliarInt;
    minimo = auxiliarInt;
    acumulador = auxiliarInt;

    // Solicito el resto de los numeros
    for(i=0;i<4;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&auxiliarInt);
        acumulador = acumulador + auxiliarInt;

        if(auxiliarInt > maximo)
        {
            maximo = auxiliarInt;
        }

        if(auxiliarInt < minimo)
        {
            minimo = auxiliarInt;
        }
    }

    printf("El maximo es: %i\n",maximo);
    printf("El minimo es: %i\n",minimo);
    printf("El promedio es: %f\n", ((float)acumulador) / 5);
    */









    int num[5];
    int i;
    int suma=0;
    int max;
    int min;
    float promedio;
    int flag=0;

    for(i=0;i<5;i++)
    {
        printf("Ingrese 5 numeros: ");
        scanf("%d",&num[i]);
        suma=num[i]+suma;
        if (i>max||flag==0)
        {
            max=num[i];
        }
        if (i<min||flag==0)
        {
            min=num[i];
            flag=1;
        }


    }


promedio=(float)suma/5;
printf("El promedio es : %.2f\n",promedio);
printf("La suma es : %d",suma);
printf("El numero maximo es : %d\n",max);
printf("El numero minimo es : %d\n",min);







    return 0;

}
