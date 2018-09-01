#include "temas.h"
typedef struct{
 int id;
 char nombre[50];
 char email[50];
 char sexo[50];
 char pais[50];
 char password[50];
 char ipAdress[100];

}eUsuario;

eUsuario* eUsuario_new();

int eUsuario_setId(eUsuario*,int);
int eUsuario_setNombre(eUsuario*,char*);
int eUsuario_setEmail(eUsuario*,char*);
int eUsuario_setSexo(eUsuario*,char*);
int eUsuario_setPais(eUsuario*,char*);
int eUsuario_setPassword(eUsuario*,char*);
int eUsuario_setipAdress(eUsuario*,char*);

int eUsuario_getId(eUsuario*);
char* eUsuario_getNombre(eUsuario*);
char* eUsuario_getEmail(eUsuario*);
char* eUsuario_getSexo(eUsuario*);
char* eUsuario_getPais(eUsuario*);
char* eUsuario_getPassword(eUsuario*);
char* eUsuario_getipAdress(eUsuario*);

int mostrarUsuario(eUsuario*);
int mostrarListaUsuarios(ArrayList*);

int cargarDesdeArchivo(ArrayList* this);

int ordenarNombreUsuario(void*,void*);
int ordenarPaisUsuario(void*,void*);

int doble_Sort(ArrayList*);
int ordenarvo(void*,void*);

char get_char(eUsuario* element);




