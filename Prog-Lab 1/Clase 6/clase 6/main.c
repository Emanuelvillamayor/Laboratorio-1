#include <stdio.h>
#include <stdlib.h>
#include "clase5.h"

  int main()
{
    int vector[5]={5,2,9,6,5};

  char letras[5]={'f','g','i','h','q'};
    int cantidad;
    int indexLetra;
                        /**le paso el vector y la cantidad de elementos*/
cantidad=contarPares(vector,5);
    indexLetra=buscarChar(letras,5,'a');
    if (indexLetra==-1)
    {
        printf("No se encuentra el caracter!!!\n");
    }
    else
    {
        printf("EL caracter se encunetra en el array \n");
    }
            printf("index= %d\n",indexLetra);
    printf("La cantidad de pares es : %d\n",cantidad);
    return 0;
}


