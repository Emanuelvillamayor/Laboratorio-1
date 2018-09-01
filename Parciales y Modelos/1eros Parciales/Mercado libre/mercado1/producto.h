#include "funciones.h"
typedef struct
{
    char nombre[50];
    int idProducto;
    int cantVendida;
    int stock;
    int idUsuario;
    float precio;
    int estado;
}eProducto;

void inicializarProductoHardCode(eProducto []);
int eProducto_init(eProducto[],int );
int eProducto_buscarPorId(eProducto[] ,int ,int);
int eProducto_siguienteId(eProducto[] ,int );
int eProducto_buscarLugarLibre(eProducto [],int );

void eProducto_mostrarUno(eProducto );
int eProducto_mostrarListado(eProducto[] ,int );
int eProducto_mostrarListadoConBorrados(eProducto[] ,int );


int eProducto_alta(eProducto[] ,int ,int);
int eProducto_baja(eProducto[] ,int , int );
int eProducto_modificacion(eProducto[] ,int , int );

