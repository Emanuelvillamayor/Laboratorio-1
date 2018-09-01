#include "Factorial.h"
#include "stdio.h"
int factorial(int num)
{
    int factor=1;
    int i;
    for (i=num;i>=1;i--)
    // for (i=1;i<=5;i++)
    {
        factor=factor*i;
    }
    return factor;

}


