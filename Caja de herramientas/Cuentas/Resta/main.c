#include <stdio.h>
#include <stdlib.h>

//int resta(int,int);
int main()
{
    int num1,num2,total;

 printf("Ingrese el numero 1 : ");
 scanf("%d",&num1);
  printf("Ingrese el numero 2 : ");
 scanf("%d",&num2);
 total=resta(num1,num2);
 printf("La resta es : %d",total);





    return 0;
}

/*
int resta(int n1,int n2)
{
    int resta;
    resta=n1-n2;
    return resta;
}
*/

