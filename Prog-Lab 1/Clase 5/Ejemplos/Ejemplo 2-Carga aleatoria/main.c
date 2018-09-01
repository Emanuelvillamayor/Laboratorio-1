/**  *************************EJEMPLO 2 : CARGA ALEATORIA**********************/


#include <stdio.h>
#include <stdlib.h>
#define MAX 100
/*******************Búsqueda del mayor**********************
//buscar mayor
mayor=vec[0];
for(i=0;i<MAX;i++)
{
if(vec[i]>mayor)
{
mayor=vec[i];*/
/* otras asignaciones */
//}
//}


/****************Búsqueda del menor*****************/
/**menor=vec[0];
for(i=0;i<MAX;i++)
{
if(vec[i]<menor)
{
menor=vec[i];*/
/* otras asignaciones */
//}
//}


/****************Búsqueda de un número dentro del vector*************/
//buscar un numero dentro del vector
/**flag=0;
printf("Ingrese numero a buscar");
scanf("%d",&num);
for(i=0;i<MAX;i++)
{
if(num==vec[i])
{*/
/* asignaciones y modificaciones */
/**printf("Se encontro el numero");
flag=1;
}
}
if(flag==0)
printf("El numero no se encontro");*/




/*******************Ordenamiento del vector****************************/
/**for(i=0;i<FIL-1;i++)
{
for(j=i+1;j<FIL;j++)
{
if(vec[i]>vec[j])
{
aux=vec[i];
vec[i]=vec[j];
vec[j]=aux;
}
}
}




*/
























/** De los 100 empleados de una fábrica se registra número de legajo (coincidente con
el índice), edad y salario. Se pide ingresar los datos y calcular el sueldo promedio.
El análisis del problema se plantea exactamente igual al caso de carga secuencial. La única
diferencia es que ahora se debe ingresar el legajo quien va a ser el que me indique la posición
en donde se va a cargar el sueldo y la edad.*************



int main()
{
int edad[MAX],i,leg;
float sueldo[MAX],suma=0,prom,aux;
char seguir;
for(i=0;i<MAX;i++)
{
edad[i]=0;
sueldo[i]=0;
}
do
{
printf("Ingrese Legajo");
scanf("%d",&leg);
printf("Ingrese Edad");
scanf("%d",&edad[leg-1]);
printf("Ingrese el sueldo");
scanf("%f",&aux);
aux=sueldo[i];
fflush(stdin);
printf("Desea ingresar otro dato S/N?");
scanf("%c",&seguir);
fflush(stdin);
}while(seguir=='s');

for(i=0;i<MAX;i++)
{suma=suma+aux;
prom=suma/MAX;
printf("El sueldo promedio es %.2f",prom);
}

return 0;
}

*/




/********PROGRAMA PARA QUE EL USUARIO ELIJA POSICION Y VALOR QUE QUIERE INGRESAR*****/

/*int main()

{

   int v[5],pos,i;
char seguir='s';
for(i=0;i<5;i++)*/
    /**En este caso el vector "v[i]", queda en "0" para que el usuario elija
    la cantidad de veces que quiera iterar y el limite no lo pongamos nosotros*/
/*{
v[i]=0; // inicializamos vector
}*/
//while(seguir=='s')
//{
    /**aca ya el vector "v[]" , adopta la posicion "v[pos] modificable a lo que el
       usuario quiera*/
/*printf("Ingrese posici¢n");
scanf("%d",&pos);
printf("Ingrese valor a cargar en el vector");
scanf("%d",&v[pos]);
printf("Desea ingresar otro dato S/N?");
fflush(stdin);
scanf("%c",&seguir);
printf("-----Numero ingresado :%d------------Posicion subindice %d-------\n",v[pos],pos+1);*/

//printf("Desea ingresar otro dato S/N?");
//scanf("%c",&seguir);

/*}
return 0;
}*/





 /* int numero[5];
    int i;
   // int suma;



for (i=0;i<5;i++)
{
    printf("Ingrese un numero: ");
    scanf("%d",&numero[i]);*/
    /**ACA PODEMOS OBSERVAR QUE "numero[i]" MUESTRA EL NUMERO INGRESADO
       Y "i" MUESTRA LA POSICION DEL INDICE*/
   // printf("-----Numero ingresado :%d------------Posicion subindice %d-------\n",numero[i],i+1);

//}
/**Y aca por mas que ponga "numero[i]" o "i", va a dar resultado la cantidad de
numero que se pueden ingresar en es variable , es decir "5"*/
//printf("Total %d",numero[i]);

   // return 0;

