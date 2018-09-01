#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int* a;

    printf("Contenido:%d\n",a);
    printf("Direccion de memoria: %d\n",&a);



    a=(int*)malloc(sizeof(int));
    *a=10;

    printf("\n");
    printf("Realizo el malloc:\n");
    printf("Contenido:%d\n",a);
    printf("Direccion de memoria: %d\n",&a);
    printf("Valor al que apunta:%d",*a);
    printf("\n");
      printf("\n"); */
/***********************************************************************************/
 /*   int** b;
    printf("Contenido b :%d\n",b);
    printf("Direccion de memoria b : %d\n",&b);

    b=(int**)malloc(sizeof(int*));
     printf("\n");
     **b=10;

    printf("Contenido b :%d\n",b);
    printf("Direccion de memoria b : %d\n",&b);
    printf("Valor al que apunta b :%d\n",*b);
    printf("Valor al que apunta2 b:%d\n",**b);

    printf("\n");
    printf("\n");*/
/***********************************************************************************/
 /*   int** c=NULL;

    printf("Dm de c:  %d\n",&c);
   printf("Contenido c: %d\n",c);


    c=(int**) malloc(sizeof(int*)*3);

    (*(*(c+0)))=21;
    (*(*(c+1)))=154;
   //  (*(*(c+2)))=210;
   printf("Dm de c:  %d\n",&c);
   printf("Contenido c: %d\n",c);
   printf("Contenido 1-2: %d\n", (*(*(c+0))));
   printf("Contenido 2-2: %d\n", (*(*(c+1))));
   // printf("Contenido 3-2: %d\n", (*(*(c+2))));*/

/***********************************************************************************/

int* d;
printf("Contenido d (stack):%d\n",d);
printf("Direccion de memoria d (stack) : %d\n",&d);

d=(int*)malloc(sizeof(int)*3);

*(d+0)=10;
*(d+1)=15;
*(d+2)=165;
printf("LUEGO DEL MALLOC:\n");
printf("Contenido d :%d\n",d);
printf("Direccion de memoria d (stack): %d\n",&d);
printf("direccion de memoria 1 d :%d\n",(d+0));
printf("direccion de memoria2 d :%d\n",(d+1));
printf("direccion de memoria 3 d :%d\n",(d+2));
printf("Contenido 1 d :%d\n",*(d+0));
printf("Contenido 2 d :%d\n",*(d+1));
printf("Contenido 3 d :%d\n",*(d+2));






    return 0;
}
