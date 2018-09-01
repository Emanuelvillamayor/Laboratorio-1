#include "Arraylist.h"
typedef struct
{
    int dni;
    char nombre[50];
    int idTurno;
}eTramite;

eTramite* etramite_new();

int setDni(eTramite* tramite,int dni);
int setNombre(eTramite* tramite,char* nombre);
int setidTurno(eTramite* tramite,int turno);

int getDni(eTramite* tramite);
char* getNombre(eTramite* tramite);
int getidTurno(eTramite* tramite);

int mostrarTramite(eTramite* tramite);

int compararPorDni(void* ,void*);
int compararPorNombre(void*,void*);

/******************************************************/

void getString(char* mensaje,char* input);
int esNumerico(char*);
int getValidInt(char* mensaje,char* mensajeError,char* input);

int esSoloLetras(char*);
char* getValidChar(char* mensaje,char* mensajeError,char* input);

int esDni(char* dato);
int getValidDNI(char* mensaje,char* mensajeError,char* input);

int siguienteTurno(ArrayList* lista);


int cargarTramite(ArrayList* lista);

int atenderTramite(ArrayList*,ArrayList*);

int mostraListaTramites(ArrayList*);/**funcion que muetras listas*/








