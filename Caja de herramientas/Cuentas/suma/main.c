#include <stdio.h>
#include <stdlib.h>
#include "Suma.h"

//int suma(int,int);
int main()
{
 int num1,num2,total;

 printf("Ingrese el numero 1 : ");
 scanf("%d",&num1);
  printf("Ingrese el numero 2 : ");
 scanf("%d",&num2);
 total=suma(num1,num2);
 printf("La suma es : %d",total);





    return 0;
}
/*
int suma(int n1,int n2)
{
    int suma;
    suma=n1+n2;
    return suma;
}
*/
