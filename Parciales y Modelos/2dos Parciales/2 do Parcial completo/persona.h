#include "funciones.h"
#include "Arraylist.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
typedef struct
{
    int id;
    char nombre[50];
    float sueldo;
    int edad;
    char profesion[50];


}ePersona;


ePersona* ePersona_new();

int setId(ePersona* persona,int num);
int setNombre(ePersona* persona,char* cadena);
int setSueldo(ePersona* persona,float num );
int setEdad(ePersona* persona,int edad);
int setProfesion(ePersona* persona,char* profesion);


int getId(ePersona* persona);
char* getNombre(ePersona* persona);
float getSueldo(ePersona* persona);
int getEdad(ePersona* persona);
char* getProfesion(ePersona* persona);


int mostrarPersona(ePersona*);
int listarPersona(ArrayList*);

int parserCorreo(FILE* pFile , ArrayList* pArrayList);


int functionFilter(void*);

int parserPersonaWrite(FILE* pFile , ArrayList* pArrayList);

