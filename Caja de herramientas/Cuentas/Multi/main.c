#include <stdio.h>
#include <stdlib.h>
#include "Multi.h"

//int multi(int,int);
int main()
{
 int num1,num2,total;

 printf("Ingrese el numero 1 : ");
 scanf("%d",&num1);
  printf("Ingrese el numero 2 : ");
 scanf("%d",&num2);
 total=multi(num1,num2);
 printf("La multiplicacion  es : %d",total);





    return 0;
}

/*int multi(int n1,int n2)
{
    int multi;
    multi=n1*n2;
    return multi;
}

*/
