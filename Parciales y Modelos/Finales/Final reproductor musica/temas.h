#include"Arraylist.h"
typedef struct{
    int id;
    char nombreTema[50];
    char artista[50];
}eTema;

eTema* eTema_new();

int eTema_setId(eTema*,int);
int eTema_setNombretema(eTema*,char*);
int eTema_setArtista(eTema*,char*);

int eTema_getId(eTema*);
char*eTema_getNombretema(eTema*);
char* eTema_getArtista(eTema*);

int mostrarTema(eTema*);
int mostrarListaTemas(ArrayList*);


int cargarDesdeArchivoTema(ArrayList* this);

void getString(char* mensaje,char* input);
int esNumerico(char*);
int esSoloLetras(char*);
int esAlfanumerico(char*);
int getValidInt(char* mensaje,char* mensajeError,char* input);
char* getValidChar(char* mensaje,char* mensajeError,char* input);
char* getValidAlphaNum(char* mensaje,char* mensajeError,char* input);



