#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*se ingresan numeros(distintos de cero),no se sabe cuantos(while)
    se pide mostrar:
        *cantidad de pares e impares.
        *Porcentaje de numeros positivos y negativos.
        *Max y min.
        *Maximo numero par.
        *Cantidad de numeros comprendidos entre 125 y 236.*/


int numero;
int sumPos=0;
int sumNeg=0;
int canPar=0;
int canImp=0;
int flag=0;
int conPos=0;
int conNeg=0;
float porcPos;
float porcNeg;
int contNum=0;
int max;
int min;
int flagPar=0;
int maxPar;


char rta='s';

while(rta=='s')
{
printf("Ingrese un numero : ");
scanf("%d",&numero);
while (numero==0)
{
printf("\nReingrese un numero : ");
scanf("%d",&numero);
}

if (numero%2==0)
{
if (numero>maxPar||flagPar==0)
{
    maxPar=numero;
    flagPar=1;
}
canPar++;

}
if (numero%2!=0)
{
    canImp++;
}

if (numero>0)
{
    sumPos=numero+sumPos;
    conPos++;
}
else
{
    sumNeg=numero+sumNeg;
    conNeg++;
}

if (numero>max||flag==0)
{
max=numero;
}
if (numero<min||flag==0)
{
min=numero;
flag=1;
}



printf("Desea continuar ? : ");
rta=getche();
}
contNum=conPos+conNeg;
porcPos=(float)(conPos*100)/contNum;
// Otra forma de hacerlo porcNeg=100-porcPos;
porcNeg=(conNeg*100)/contNum;

   printf("La cantidad de numeros pares es :%d",canPar);
   printf("\nLa cantidad de numeros impares es : %d",canImp);
   printf("\nEl numero maximo es  : %d",max);
     printf("\nEl numero min es  : %d" ,min);
          printf("\nporcPos : %% %f" ,porcPos);
          printf("\nporNeg: %% %f",porcNeg);
          printf("\nMaxPar  :%d",maxPar);





    return 0;
/*
int numero;
int contPar=0;
int contImpar=0;
int contNegativos=0;
int contPositivos=0;
int contNumeros=0;
float porPositivos;
float porNegativos;
int maximo;
int minimo;
flag=0;
int flagPar=0;
int maximoPar;



char rta='s';

while(rta=='s')
{
printf("Ingrese un numero : ";
scanf("%d",&numero);
while (numero==0)
{
print("\nReingrese un numero : ");
scanf("%d",&numero);
}

if (numero%2==0)
{
if(contPares ==0||numero>maximoPar)
{
maximoPar=numero;
}
if (contPares==0||numero>maximoPar)
{
maximoPar=numero;
}
        contPares++;


}
else
{
contImpar++;;
}

if (num>0)
{
contPositivos++;

}
else
{
contNegativos++;
}
if (flag=0||numero>maximo)
{
maximo=numero;

}



printf("Desea continuar?");
rta=getche();
}
contNumeros=contPositivos+contNegativos;
porPositivos=(float)(contPositivos*100)/contNumeros;
porNegativos=(conNegativos*100)/conNumeros;       ||     porNegativos =100-porPositvos;


printf("\ncantidad de pares : %d",contPares);
printf("\ncantidad de impares : %d",contImpares);
printf("\El porcentaje de positivos es :&& %f",porPositivos);
printf("\nEl porcentaje de negativos es  :&& %f",porNegativos);
printf("\nEl maximo es  : %d",max);
printf("\nEl minimo es: %d",max);





*/

    }


