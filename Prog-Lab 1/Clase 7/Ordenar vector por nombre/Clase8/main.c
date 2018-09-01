#include <stdio.h>
#include <stdlib.h>
#include "clase8.h"
#include <string.h>
#define T 5
/********************************* PROGRAMA QUE ORDENE POR NOMBRE ****************************************/


/**SI ORDENO SOLO EL VECTOR DE NOMBRE LOS DEMAS VAN A QUEDAR DESORDENADOS ENTONCES TENGO QUE ORDENAR TODOS*/

int main()
{
                   /**INICIALIZADO POR EXTENSION "={}" */
int vectorInt[T]={1,2,3,4,5};
char vectorString[T][20]={"juan","ana","maria","pedro","luis"};
float vectorFloat[T]={5.3,2.2,6.9,4.1,2.21};
int i;
char auxString[20]; // solo van las columnas
int auxFloat;
int auxInt;
int j;

for (i=0;i<T-1;i++)
{
    for (j=i+1;j<T;j++)
    {
        if(strcmp(vectorString[i],vectorString[j])>0)  //no hago (vectorString[i]<vectorString[j])
        {
            strcpy(auxString,vectorString[i]);               //  auxString=vectorString[i];
            strcpy(vectorString[i],vectorString[j]);     //vectorString[i]=vectorString[j];
            strcpy(vectorString[j],auxString);   //   vectorString[j]=auxString;

          auxInt=vectorInt[i];
            vectorInt[i]=vectorInt[j];
            vectorInt[j]=auxInt;

            auxFloat=vectorFloat[i];
            vectorFloat[i]=vectorFloat[j];
            vectorFloat[j]=auxFloat;


        }
    }
}
   /**FUNCION QUE ME DEVUELVA EL NOMBRE DEL INDICE O INT O LEGAJO QUE INGRESE
   DEVUELVE "-1" SI NO LO ENCONTRO */
auxInt=buscarInt(vectorInt,T,2);
//printf("INDICE :%d",auxInt);
if (auxInt!=-1)
{
    printf("\n%s\n",vectorString[auxInt]);

}
else
{
    printf("Legajo inexistente");
}



for (i=0;i<T;i++)
{
    //if (vectorInt[i]!=0) //Para que muestre solo los que tiene informacion por sino va aserguir iterando sin hacer nada

    printf("%d----- %s------ %.2f \n",vectorInt[i],vectorString[i],vectorFloat[i]);

}
    return 0;





}






