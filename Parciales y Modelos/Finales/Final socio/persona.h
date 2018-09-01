#include "Arraylist.h"
typedef struct{
   char nombre[20];
   int edad;

}ePersona;


ePersona* new_persona();
void getString(char* mensaje,char* input);
int esNumerico(char*);
int esSoloLetras(char*);

int getValidInt(char* mensaje,char* mensajeError,char* input);
char* getValidChar(char* mensaje,char* mensajeError,char* input);

int leerArchivo(ArrayList*);
int guardarArchivo(ArrayList*);


void hardcodearPersona(ArrayList*);
