#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 5
typedef struct
{
 int idMoneda;
 char descripcion [20];
 char pais [20];
}eMoneda;



/** en el main , crear array de monedas y poner 3 monedas

moneda 1 -> peso ,pais argentina
moneda dos -> real , BRASIL
MONEAD TRES->dolar ,EEUU
moneda cuatro ->euro ,españa
*/


int leerArchivo(eMoneda* ,int);
int mostrarMonedas(eMoneda*,int );
int mostrarunaMoneda(eMoneda* );
int cargarMoneda(eMoneda*,int);//El entero representa el lugar donde va a cargar
void hardcodear(eMoneda[],int);


int main()
{
    eMoneda moneda[tam];
    hardcodear(moneda,tam);

    if(!cargarMoneda(moneda,4 ))
    {
        printf("Error , no se pudo cargar la moneda\n");
    }

     if(!mostrarMonedas(moneda,tam))
    {
        printf("Error , no se pudo mostrar la moneda\n");
    }

    if(!leerArchivo(moneda,tam))
         {
        printf("Error , no se pudo crear archivo de moneda\n");
    }

    return 0;
}



int mostrarMonedas(eMoneda* moneda ,int TAM)
{
    int i;
    int retorno=0;
    if(moneda!=NULL&&TAM>0)
    {
      retorno=1;
        for (i=0;i<tam;i++)
      {

        if(!mostrarunaMoneda(moneda+i))
        {
            printf("No se pudo mostrar la moneda");
        }
       }
    }
    return retorno;
}
int cargarMoneda(eMoneda* moneda ,int posicion)
{
    int retorno=0;
    if(moneda!=NULL&&posicion>0)
    {
        retorno=1;

        printf("Ingrese id de moneda: \n");
        scanf("%d",&(moneda+posicion)->idMoneda);/**->el ampersand va porque quiero la direccion de memoria de todo el espacio para cargar*/
        printf("Ingrese descripcion  de moneda: \n");
        fflush(stdin);
        gets((moneda+posicion)->descripcion);
         printf("Ingrese pais  de moneda: \n");
        fflush(stdin);
        gets((moneda+posicion)->pais);


    }
return retorno;
}

int mostrarunaMoneda(eMoneda* moneda)
{
    int retorno =0;
    if(moneda!=NULL)
    {
        retorno=1;
        printf("%d --- %s --- %s \n",moneda->idMoneda,moneda->descripcion,moneda->pais);
    }
    return retorno;
}


void hardcodear(eMoneda* moneda ,int TAM)
{
    int i;
   int id[4]={1,2,3,4};
   char descripcion[][20]={"peso","real","dolar","euro"};
   char pais [][20]={"argentina","brasil","eeuu","espania"};

   for(i=0;i<TAM;i++)
   {
          (moneda+i)->idMoneda=id[i];
          strcpy((moneda+i)->descripcion,descripcion[i]);
          strcpy((moneda+i)->pais,pais[i]);
   }
}

int leerArchivo(eMoneda* monedas,int TAM)
{
    FILE* archivo;
    int i ;
    int retorno=0;

archivo =fopen ("C:\\Users\\Manu\\Desktop\\SABADO\\Banco\\archivo.txt","w");

if(archivo!=NULL&&TAM >0)
{
    retorno=1;

       for (i=0;i<TAM;i++)
          {

              fprintf(archivo,"%d --- %s --- %s \n",(monedas+i)->idMoneda,(monedas+i)->descripcion,(monedas+i)->pais);
             /* fprintf(archivo,"%s\n",(monedas+i)->descripcion);
               fprintf(archivo,"%s\n",(monedas+i)->pais);*/
          }
}

fclose(archivo);
return retorno;


}
