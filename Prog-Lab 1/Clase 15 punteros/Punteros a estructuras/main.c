#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;//4
    char b;//1
}edato;


int main()
{
/*
   edato d;

    d.a=5;
    d.b='<';
    //printf("TAM: %d\n",sizeof(edato));MIDE EL TAMAÑO EN BYTES DE LO QUE LE PASEMOS
    edato* pDato;
    pDato=&d;

   // printf("%d--%d",&d,&(d.a));
      printf("%d--%c",pDato->a,pDato->b); // Para acceder a un valor particular*/

      edato lista [2]={{1,'a'},{1,'b'}}; // HARDCODEO DATOS EN LA ESTRUCTURA
      edato* pLista;

      pLista=lista;// no hace falta el ampersand porque es un array y indica la 1° direccion de memoria

      int i;
      for (i=0;i<2;i++)
      {
          //printf("%d--%c\n",(*(pLista+i)).a,(*(pLista+i)).b); Forma no correcta
           printf("%d--%c\n",(pLista+i)->a,(pLista+i)->b); /**Forma correcta*/
      }


    return 0;
}
