#include <stdio.h>
#include <stdlib.h>
#include "Division.h"

//int division(int,int);
int main()
{
 int num1,num2,total;

 printf("Ingrese el numero 1 : ");
 scanf("%d",&num1);
  printf("Ingrese el numero 2 : ");
 scanf("%d",&num2);
 total=division(num1,num2);
 printf("La division  es : %d",total);





    return 0;
}

/*int division(int n1,int n2)
{
    int division;
    division=n1/n2;
    return division;
}

*/
