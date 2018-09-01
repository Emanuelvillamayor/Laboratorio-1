#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paralelos.h"
#define TAM 4


int main()
{
    int legajo[TAM]={1,2,3};
    char nombre[TAM][20]={"lucas","braian","gonza"};
    int nota1[TAM]   ={5,10,20};
    int nota2[TAM]   ={9,5,4};
    float promedio[TAM]   ={2.5,10.1,22.6};
    int modificar;
    int opcion;
    int index;


    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
 case 1:



            index=cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if(index == -1)
            {
                printf("No hay lugar\n");
            }
            else if (index==-2)
            {
            }
            else
            {
                printf("-----Alumno ingresado-------\n");
            }
            system("pause");
        system("cls");

            break;
 case 2:


       printf("Legajo--Nombre--Nota 1--Nota 2--Promedio\n");
       mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
       system("pause");
        system("cls");

               break;

 case 3:


            printf("-----OPCION 3-------\n");
               printf("Legajo-Nombre-Nota 1-Nota 2-Promedio\n");
           mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
        modificar=  modificarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if (modificar!=0)
       {
         printf("Se modifico el producto\n");
       }
    else{
         printf("No se pudo modificar producto\n");
        }

           system("pause");
        system("cls");

        break;
 case 4:
             printf("Legajo--Nombre--Nota 1--Nota 2--Promedio\n");
       mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
       borrarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);


     system("pause");
        system("cls");
        break;

 case 5:
         ordenarAlumnos(legajo,nombre, nota1,nota2,promedio,TAM);
      system("pause");
        system("cls");
        }

    }
    while(opcion!=9);


 system("pause");
        system("cls");
    return 0;
}












