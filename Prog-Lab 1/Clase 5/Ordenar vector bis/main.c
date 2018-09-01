#include <stdio.h>
#include <stdlib.h>
/****EJEMPLO DE "INTERCAMBIO DE VALORES EN VARIABLES" ES DECIR LOS VALORES DE "B" PASAN A "A"
Y LOS VALORES DE "A" PASAN A "B"*****************************/

//int main()
//{


 /*int a=9;
 int b=5;
 int c;*/

 /**"SWAP" es un intercambio, se utiliza para "metodos de ordenamiento(hay varios)",pero primero vamos a ver
 el "BURBUJEO"*/
/**Creamos una tercer variable que retenga los valores de "A"*/

/*c=a; //"C" VALE "9"
a=b; //"a" VALE "b=5"
b=c; //"b" VALE "c=9"*/

/**Se pudo hacer el intercambio, que "a" valga "5" y "b" valga "9"*/
//printf("a=%d ----- b=%d",a,b);

   // return 0;
//}

/**------------------------------------------------------------------------------------------*/





/**PROGRAMA QUE ORDENA LETRAS DE ACUERDO AL ORDEN DEL ABECEDARIO PARA ESTO UTILIZA EL
CODIGO ASCII LA MAQUINA*********************************************************/

int main()
{
    /**Los datos ya se encuentran definidos en la variable pero se podria crear un for
    para que el usuario ingrese la cantidad de datos(int,char,float) , que quiera*/
    char vector[5]={'w','a','v','e','b'};
    char auxiliar;
    int j;
    int i;
    /**es menor a cuatro por no llega hasta el final de todo sino hasta el anteultimo*/
    /**MANO AMARILLA*/
    printf("Vector : %s\n",vector);
    for (i=0;i<4;i++)
    {
        /**es siempre un elemento mas del primer for*/
        /** j es menor a 5 porque llega hasta el final*/
        /**MANO CELESTE*/
        for (j=i+1;j<5;j++)
        {
            /**si ordeno de menor a mayor, me conviene evaluar si mano amarilla es mayor a mano celeste*/
            /**Ese mayor determina la accion de que se intercambien los valores , que quede de la derecha el maschico*/
            if (vector[i]>vector[j]) //CRITERIO DE ORDENAMIENTO
            {
                auxiliar=vector[i];
                vector[i]=vector[j];
               vector[j] =auxiliar;
            }
        }
    }
    for (i=0;i<5;i++)
    {
         printf("%c\n",vector[i]);
    }
     printf("Vector : %s\n",vector);

    return 0;
}


/**---------------------------------------------------------------------------------------*/

/**PROGRAMA QUE ORDENA LOS "ENTEROS " DE UN VECTOR DE MENOR A MAYOR******************/

/*
int main()
{*/
    /**Los datos ya se encuentran definidos en la variable pero se podria crear un for
    para que el usuario ingrese la cantidad de datos(int,char,float) , que quiera*/
    /*int vector[5]={5,2,8,6,5};
    int auxiliar;
    int j;
    int i;*/
    /**es menor a cuatro por no llega hasta el final de todo sino hasta el anteultimo*/
    /**MANO AMARILLA*/
  /*  for (i=0;i<4;i++)
    {*/
        /**es siempre un elemento mas del primer for*/
        /** j es menor a 5 porque llega hasta el final*/
        /**MANO CELESTE*/
       /* for (j=i+1;j<5;j++)
        {*/
            /**si ordeno de menor a mayor, me conviene evaluar si mano amarilla es mayor a mano celeste*/
            /**Ese mayor determina la accion de que se intercambien los valores , que quede de la derecha el maschico*/
          /*  if (vector[i]>vector[j]) //CRITERIO DE ORDENAMIENTO
            {
                auxiliar=vector[i];
                vector[i]=vector[j];
               vector[j] =auxiliar;
            }
        }
    }
    for (i=0;i<5;i++)
    {
        printf("%d\n",vector[i]);

    }

    return 0;
}*/



/********************************************************************************************/
/**PROGRAMA QUE LE PERMITE AL USUARIO INGRESAR ENTEROS Y LOS ORDENA DE MENOR A MAYOR*/
/*
int main()
{
    int vector[5];
    int auxiliar;
    int j;
    int i;

    for(i=0;i<5;i++)
  {
    printf("Ingrese 5 valores :")  ;
    scanf("%d",&vector[i]);
  }

    for (i=0;i<4;i++)
    {

        for (j=i+1;j<5;j++)
        {
            if (vector[i]>vector[j])
            {
                auxiliar=vector[i];
                vector[i]=vector[j];
               vector[j] =auxiliar;
            }
        }
    }
    for (i=0;i<5;i++)
    {
        printf("%d\n",vector[i]);

    }

    return 0;
}

*/


