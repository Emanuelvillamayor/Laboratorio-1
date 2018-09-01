#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;

    v=(int*) malloc(sizeof(int)*3);

    //Esto es lo mismo que v+0
    printf("Direccion de memoria del puntero &v: %d\n",&v);

    printf("\n");

    printf("Direccion de memoria del heap v+0: %d\n",v+0);
    printf("Direccion de memoria del heap v+1: %d\n",v+1);
    printf("Direccion de memoria del heap v+2: %d\n",v+2);

    printf("\n");

    /**Harcodeo datos */
    *(v+0)=10;
    *(v+1)=51;
    *(v+2)=120;

    printf("valor del heap v+0: %d\n",(*(v+0)));
    printf("valor del heap v+1: %d\n",(*(v+1)));
    printf("valor del heap v+2: %d\n",(*(v+2)));




    return 0;
}
