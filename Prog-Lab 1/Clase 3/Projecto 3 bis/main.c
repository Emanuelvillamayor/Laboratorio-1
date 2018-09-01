#include <stdio.h>
#include <stdlib.h>
//FUNCION GENERICA
// char[] es un string que recibe conjunto de letras..
int pedirEntero(char[], int , int);
int validarEntero(int,int,int,char[]);
int main()
{



    int edad;//18-60
    int legajo;//1-10000
    int nota;//1-10

  // la funcion muestra el mensaje que yo le pase por parametro
  // lo que va adentro de pedirEntero va a ser un string por lo cual debemos modificar la funcion

    edad=pedirEntero("Ingrese edad : " , 18 , 60);

    legajo=pedirEntero("Ingrese legajo :",1,1000);

    nota=pedirEntero("Ingrese una nota ",1,10);
  printf("La edad es : %d y el legajo es :%d y la nota es : %d", edad , legajo, nota);


    return 0;
}
int pedirEntero(char mensaje[],int min, int max)
{
    //Funcion que permite ingresar cualquier numero
    int numero;
    // El printf llama a la funcion que esta en el main y muestre ese mensaje
    printf("%s", mensaje );
    scanf("%d",&numero);

      numero=validarEntero(numero,min,max,mensaje);

    return numero;

}

int validarEntero(int dato, int min , int max,char mensaje[])
{
     while(dato<min||dato>max)
    {
        //El "char mensaje" esta indicado para que sepa en que se confundio es decir si en legajo o edad
        printf("Error : Reingrese %s", mensaje);
        scanf("%d",&dato);
    }
    return dato;


}
