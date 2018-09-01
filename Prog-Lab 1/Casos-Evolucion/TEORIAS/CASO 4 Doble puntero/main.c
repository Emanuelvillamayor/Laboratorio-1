#include <stdio.h>
#include <stdlib.h>
void funcion(int**);
int main()
{
    int i ;
    int ** v;

    v=(int**) malloc(sizeof(int*)*3);

    funcion(v);

    for(i=0; i<3; i++)
    {
        printf("%d\n",*(*(v+i)));
    }

    printf("\n");

    return 0;
}

void funcion(int** c)
{
    int* p;
    int* p2;
    int* p3;
    p=(int*)malloc(sizeof(int));
    *p=7;
    p2=(int*)malloc(sizeof(int));
    *p2=9;
    p3=(int*)malloc(sizeof(int));
    *p3=11;

    *(c+0)=p;
    *(c+1)=p2;
    *(c+2)=p3;

    c = (int**) realloc(c, sizeof(int*));

    *(c+3)=p;
}
