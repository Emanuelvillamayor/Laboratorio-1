#include "paralelos.h"
#include "stdio.h"
#include <string.h>
#include <stdlib.h>


int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int posicion;
    int auxiliarLegajo;
    int auxiliarNota1;
    int auxiliarNota2;
    char auxiliarLegajoStr[50];
    char auxiliarNota1Str[50];
    char auxiliarNota2Str[50];
    char auxiliarNombreStr[50];

                printf("CARGO\n");
                posicion =buscarLibre(legajos, tam);
                if(posicion!=-1)
                 {
                      if (!getStringNumeros("Ingrese el LEGAJO: ",auxiliarLegajoStr))
                {
                    printf ("El legajo debe ser numerico\n");
                    return -2;
                }
                auxiliarLegajo = atoi(auxiliarLegajoStr);

                  if(buscarLegajo(legajos,auxiliarLegajo,tam) != -1)
                {
                    printf("\n\nEL LEGAJO YA EXISTE!!!\n");
                    return -2;
                }

                     if (!getStringLetras("Ingrese el nombre: ",auxiliarNombreStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");
                    return -2;
                }

            if (!getStringNumeros("Ingrese nota 1 : ",auxiliarNota1Str))
                {
                    printf ("LA NOTA 1 DEBE SER NUMERICA!!\n");
                    return -2;
                }
                auxiliarNota1 = atoi(auxiliarNota1Str);
                 if (!getStringNumeros("Ingrese nota 2: ",auxiliarNota2Str))
                {
                    printf ("LA NOTA 2 DEBE SER NUMERICA!!\n");
                    return -2;
                }
                auxiliarNota2 = atoi(auxiliarNota2Str);

                    strcpy(nombres[posicion],auxiliarNombreStr);
                     legajos[posicion] = auxiliarLegajo ;
                     nota1[posicion] = auxiliarNota1;
                      nota2[posicion] = auxiliarNota2;
                      promedio[posicion]=calcularPromedio(nota1[posicion],nota2[posicion]);
                }
                else
                {
                    posicion=-1;
                }
return posicion;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("  %d   %s   %d   %d   %.2f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }
            }
}

 int modificarAlumno(int legajos [], char nombres[][20], int nota1[], int nota2 [], float promedio [],  int tam)
{
    int aux;
    int opcion;
    int resultado;
      int auxiliarNota1;
    int auxiliarNota2;
    char auxiliarNota1Str[50];
    char auxiliarNota2Str[50];
    char auxiliarNombreStr[50];

    printf("Ingrese un numero de legajo :");
    scanf("%d",&aux);
   resultado=buscarLegajo(legajos,aux,tam);
    if (resultado==-1)
    {
    printf("Error ingrese un legajo existente \n");
    return 0;
    }
    else{

        printf("QUE DESEA MODIFICAR -1-Nombre ,2-Nota 1 ,3-Nota 2 ");
        scanf("%d",&opcion);
      if (opcion ==1)
         {
            if (!getStringLetras("Ingrese el nuevo nombre: ",auxiliarNombreStr))
                {
                    printf ("El nombre debe estar compuesto solo por letras\n");

                    return 0;
                }
                strcpy(nombres[resultado],auxiliarNombreStr);
         }
        if (opcion==2)
        {

         if (!getStringNumeros("Ingrese la nueva nota 1 : ",auxiliarNota1Str))
                {
                    printf ("LA NOTA 1 DEBE SER NUMERICA!!\n");
                    return 0;
                }
                  auxiliarNota1 = atoi(auxiliarNota1Str);
                    nota1[resultado] = auxiliarNota1;
       promedio[resultado]= calcularPromedio(nota1[resultado],nota2[resultado]);
        }

        if (opcion==3)
        {
             if (!getStringNumeros("Ingrese nota 2: ",auxiliarNota2Str))
                {
                    printf ("LA NOTA 2 DEBE SER NUMERICA!!\n");
                    return 0;
                }
                auxiliarNota2 = atoi(auxiliarNota2Str);
                  nota2[resultado] = auxiliarNota2;

           promedio[resultado]= calcularPromedio(nota1[resultado],nota2[resultado]);
        }
    }
    return 1;
}

void borrarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[],int tam)
{
     int aux;
    char respuesta;
    int resultado;

    printf("Ingrese un numero de legajo a borrar:");
    scanf("%d",&aux);
   resultado=buscarLegajo(legajos,aux,tam);
    if (resultado==-1)
    {
    printf("Error ingrese un legajo existente \n");
    }
    else{

    printf("¿Esta seguro que desea borrar legajo ?");
    fflush(stdin);
    scanf("%c",&respuesta);
    if (respuesta=='s')
    {
     legajos[resultado]=0;
        printf("Legajo borrado");
    }
    else {

        printf("Operacion cancelada");
    }
    }
}

void ordenarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[],int tam)
{
    int auxInt;
    float auxFloat;
    char auxString[50];
    int i;
    int j;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(stricmp(nombres[i],nombres[j])>0)
            {
                strcpy(auxString,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j], auxString);


                auxInt = legajos[i];
                legajos[i]=legajos[j];
                legajos[j]=auxInt;


                auxInt = nota1[i];
                nota1[i]= nota1[j];
                nota1[j]=auxInt;

                auxInt=nota2[i];
                nota2[i]=nota2[j];
                nota2[j]=auxInt;

                auxFloat = promedio[i];
                promedio[i]= promedio[j];
                promedio[j]=auxFloat;
            }
        }
    }
    printf("ORDENO\n");
}






int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}



int buscarLibre(int legajos[], int tam)
{
    int indice=-1;
int i;//Sino existe , devuelve "-1"
for  (i=0;i<tam;i++)              //"para que recorra tdo el array"
{
    if (legajos[i]==0)
        {
        indice=i;
        break;
        }

}
return indice;
}

int buscarLegajo(int legajos[],int lugar,int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        if (legajos[i]==lugar)
        {
           return i;
        }
    }
    return -1;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}
