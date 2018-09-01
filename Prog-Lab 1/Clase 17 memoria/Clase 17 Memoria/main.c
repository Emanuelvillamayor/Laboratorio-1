#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int * funcionMalloc(int);
int main()
{
     /**int vector[5]; ESTO NO LO HACEMOS MAS
     pVector = Vector;*/

  int* pVector;
  int * aux;
  int i;

  /**pVector=(int*) malloc(sizeof(int)*5);//esto tiene que desaparecer*/
   pVector=funcionMalloc(TAM);//creamos esta funcion que reemplaza lo anterior

  if(pVector!=NULL)
  {
      for(i=0;i<TAM;i++)/**cargar*/
      {
          *(pVector+i)=i+1;
      }
    printf("Datos en el malloc: \n");
      for(i=0;i<TAM;i++) /**mostrar*/
      {
          printf("%d\n",*(pVector+i));
      }

      aux = (int*)realloc(pVector,sizeof(int)*(TAM*2));/**si quiero agregar 5 mas , le sumo el tamaño que ya tenia mas los que quiero ahora*/
      if(aux!=NULL)/**Forma de controlar si el realloc devuelve NULL*/
      {
          pVector=aux;
          printf("Datos en el realloc:\n");
          for(i=TAM;i<TAM*2;i++)/**Guardo los otros 5*/
          {
              *(pVector+i)=i+1;
          }
           for(i=TAM;i<TAM*2;i++) /**mostrar*/
           {
            printf("%d\n",*(pVector+i));
           }

           printf("Despues del Realloc junto a lo del malloc:\n");
           for(i=0;i<TAM*2;i++) /**mostrar*/
           {
            printf("%d\n",*(pVector+i));
           }

           aux=(int*) realloc(pVector,sizeof(int)*4);
           if(aux!=NULL)
           {
             printf("Lo del realloc menos la cantidad de elementos que le sacamos :  \n");
              for(i=0;i<4;i++) /**Recorro por la cantidad de elementos que me quedaron "4"*/
                 {
                  printf("%d\n",*(pVector+i));
                 }
           }


          free(pVector);
          printf("Luego del free: \n");
             for(i=0;i<TAM*2;i++)
           {
            printf("%d\n",*(pVector+i));
           }



      }
  }
    return 0;
}

int * funcionMalloc(int tamanio)
{
    int* aux;
    int* retorno=-1;
    aux=(int*) malloc(sizeof(int)*tamanio);
    if(aux!=NULL)
    {
       return aux;
    }
    return retorno;
}
