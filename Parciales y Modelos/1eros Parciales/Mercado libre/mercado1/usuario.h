#include "producto.h"
typedef struct
{
    char nombre[50];
    char  password[20];
    int idUsuario;
    int estado;
}eUsuario;


void inicializarUsuarioHardCode(eUsuario []);
int eUsuario_init(eUsuario[],int );
int eUsuario_buscarPorId(eUsuario[] ,int , int );
int eUsuario_siguienteId(eUsuario[] ,int );
int eUsuario_buscarLugarLibre(eUsuario [],int );

void eUsuario_mostrarUno(eUsuario );
int eUsuario_mostrarListado(eUsuario[] ,int );
int eUsuario_mostrarListadoConBorrados(eUsuario[] ,int );

int eUsuario_alta(eUsuario[] ,int );
int eUsuario_baja(eUsuario[] ,int );
int eUsuario_modificacion(eUsuario[] ,int );

void eUsuario_ordenar(eUsuario[] ,int );



