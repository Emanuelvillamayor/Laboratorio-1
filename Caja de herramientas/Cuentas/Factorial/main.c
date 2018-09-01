#include <stdio.h>
#include <stdlib.h>
#include "Factorial.h"

//int factorial(int);
int main()
{
    int factor;
    int num;
    printf("Ingrese un numero : ");
    scanf("%d",&num);
    factor=factorial(num);
    printf("El numero factorial es : %d",factor);




    return 0;
}
/*
int factorial(int num)
{
    int factor=1;
    int i;
    for (i=num;i>=1;i--)
    // for (i=1;i<=5;i++)
    {
        factor=factor*i;
    }
    return factor;

}
*/

