#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

//int pedirEntero(char[], int , int);
int main()
{
    int edad;//18-60
    int legajo;//1-10000
    edad=pedirEntero("Ingrese edad : " , 18 , 60);

    legajo=pedirEntero("Ingrese legajo :",1,1000);

    printf("La edad es : %d y el legajo es   : %d", edad , legajo);


    return 0;
}

/*int pedirEntero(char mensaje[], int min, int max)
{
 int numero;
    printf("%s", mensaje );
    scanf("%d",&numero);
     while(numero<min||numero>max)
    {

        printf("Error : Reingrese %s", mensaje);
        scanf("%d",&numero);
    }
    return numero;

}
*/
