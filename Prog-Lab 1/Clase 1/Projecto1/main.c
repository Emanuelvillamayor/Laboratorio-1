#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    float numero2;
    float  resultado;
    char letra;




    printf("ingrese un numero entero:");
   scanf("%d",&numero1);
   printf("ingrese un numero con coma:");
   scanf("%f",&numero2);
   printf("Ingrese una letra: ");
   //puedo dejar un espacio en el " %c" para que se ejecute el printf y no siga de largo
     scanf(" %c",&letra);
     //o en vez de poner el scanf podemos hacer las siguientes funciones sin necesidad de escribir el scanf
    //letra=getche();
    //letra=getch();

   resultado=numero1+numero2;
   // nunca poner ampersan(&) en los resultados porque aparece la direccion de memoria
   // o podemos usar la funcion : fflush(stdin) que limpia el buffer
    printf("El numero entero es :%d y el numero con coma es :%.2f", numero1,numero2);
    printf("\nLa suma de los numeros es :%.2f",resultado);
    printf("\n La letra es : %c", letra);

    return 0;



}
