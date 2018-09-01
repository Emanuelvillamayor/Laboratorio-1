#include <stdio.h>
#include <stdlib.h>

/*--------PROTOTIPO 1---------*/

void sumar1(void);

int main()
{
    sumar1();
    return 0;
}
//primer prototipo
void sumar1(void)
{
    int num1;
    int num2;
    int suma;

printf("Ingrese el primer numero: ");
scanf("%d",&num1);
printf("Ingrese el segundo numero: ");
scanf("%d",&num2);
suma=num1+num2;
printf("La suma es : %d ",suma);

}


/*---------PROTOTIPO 2--------*/
/*
//Notengo que pedir los numero porque vienen desde afuera aca tengo que sumar y mostrar
//Los numeros lospido en el main
void sumar2(int  ,int );
int main()
{
 int num1;
 int num2;
 printf("Ingrese el primer numero: ");
scanf("%d",&num1);
printf("Ingrese el segundo numero: ");
scanf("%d",&num2);
sumar2(num1,num2);

return 0;


}

void sumar2(int n1 ,int n2)
{
    int suma;
    suma=n1+n2;
    printf("La suma es : %d",suma);
    //No sirve porqe no solo esta sumando sino que tambien esta mostrando la suma

}


*/
/*---------PROTOTIPO 3----------*/
/*
 //PIde enteros , suma y retorna pero no muestra
 int sumar3(void);
 int main()
 {

printf("El resultado es : %d",sumar3());

 return 0;
 }

int sumar3()
{
    int num1;
    int num2;
    int suma;

printf("Ingrese el primer numero: ");
scanf("%d",&num1);
printf("Ingrese el segundo numero: ");
scanf("%d",&num2);
suma=num1+num2;
return suma;


}


*/


/*----------PROTOTIPO 4 IDEAL-----------*/
/*
//QUE RECIBA SUMA Y DEVUELVA LOS DOS ENTEROS
int sumar4(int,int);

int main()

{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese el primer numero : ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero : ");
    scanf("%d",&num2);
    resultado=sumar4(num1,num2);
    printf("La suma es : %d",resultado);
    return 0;
}

int sumar4(int n1 ,int n2)
{
int suma;
suma=n1+n2;
return suma;
}

*/
