#include "Arraylist.h"
#include "alquiler.h"
typedef struct
{
    int id;
    int dni;
    char nombre[50];
    char apellido[50];

}eCliente;


eCliente* cliente_new();

int setid(eCliente*,int);
int setDni(eCliente*,int);
int setNombre(eCliente*,char*);
int setApellido(eCliente*,char*);


int getid(eCliente*);
int getDni(eCliente*);
char* getNombre(eCliente*);
char* getApellido(eCliente*);

int mostrarCliente(eCliente*);

void getString(char* mensaje,char* input);
int esNumerico(char*);
int esSoloLetras(char*);
int esDni(char* dato);
int getValidInt(char* mensaje,char* mensajeError,char* input);
char* getValidChar(char* mensaje,char* mensajeError,char* input);
int getValidDNI(char* mensaje,char* mensajeError,char* input);


int altaCliente(ArrayList*,ArrayList*);
int modificarCliente(ArrayList*);
int bajaCliente(ArrayList*,ArrayList*);

int idAutoincremental(ArrayList*,ArrayList*);
int idAutoincrementalAlquiler(ArrayList* );

int mostrarLista(ArrayList*);

int mostrarAlquiler(eAlquiler*);
int mostrarListaAlquiler(ArrayList*);

int nuevoAlquiler(ArrayList*,ArrayList*);
int finAlquiler(ArrayList*);

int dniExistente(int DNI,ArrayList* lista);
