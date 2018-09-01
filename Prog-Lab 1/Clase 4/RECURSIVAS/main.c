#include <stdio.h>
#include <stdlib.h>
/** \brief Calcula el factorial de un numero
 *
 * \param Un numero
 *
 * \return El factor de el numero ingresado como parametro
 *
 */

/*-------CALCULAR FACTORIAL-------*/

/*------------FUNCION IDEAL DE FACTORIAL (NO RECURSIVA)----------*/

int factorial(int);
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



/* -----------FORMA RECURSIVA calcular factorial--------------*/
/*
//DESVENTAJA 1  QUE OCUPA MUCHO LUGAR
//DESVENTAJA 2  PUEDE PRODUCIR STACKOVERFLOW (Desbordamiento de memoria o pila)
int factorial(int);
int main()
{
    int numero;
    printf("Ingrese un numero : ");
    scanf("%d",&numero);
    int factor;
    factor=factorial(numero);
    printf("EL factorial es : %d",factor);

    return 0;
}

int factorial (int numero)
{

    int respuesta;
    if (numero==0)
    {
        respuesta=1;
    }
    else
        //al valor de numero=5 lo multiplica por factorial y ahora esta tiene prioridad;
    {
        respuesta=numero*factorial(numero-1);
    }

return respuesta;

}
*/




/*--------Calcular Factorial solo en Main  !!NO FUNCION!!----------*/
/*
int main()
{
    int i;
    int num;
    //multiplicamos por "1" porque es multiplicacion, si es por "0" el resultado es "1"
    int factor=1;
    printf("Ingrese un numero :");
    scanf("%d",&num);
    for (i=num;i>=1;i--)
    // for (i=1;i<=5;i++)
    {
        factor=factor*i;



    }
    printf("El factorial es : %d",factor);


    return 0;
}
*/
