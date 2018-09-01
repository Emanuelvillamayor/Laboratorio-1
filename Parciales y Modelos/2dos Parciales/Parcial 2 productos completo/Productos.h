
#include "Arraylist.h"
typedef struct
{
    int codigo;
    char descripcion[50];
    float importe;
    int cantidad;
    int estado;

}eProducto;

eProducto* eProducto_new();

int setCodigo(eProducto*,int);
int setDescripcion(eProducto*,char*);
int setImporte(eProducto*,float);
int setCantidad(eProducto*,int);
int setEstado(eProducto*,int);

int getCodigo(eProducto*);
char* getDescripcion(eProducto*);
float getImporte(eProducto*);
int getCantidad(eProducto*);
int getEstado(eProducto*);

int mostrarProducto(eProducto*);
int mostrarListaNoactivos(ArrayList*);
int mostrarListaTodos(ArrayList*);
int compararDescripcion(void*,void*);




void getString(char* mensaje,char* input);
int esNumerico(char*);
int esSoloLetras(char*);
int esCodigo(char* );
int esNumericoFlotante(char*);

int getValidInt(char* mensaje,char* mensajeError,char* input);
float getValidFlotante(char* mensaje,char* mensajeError,char* input);
char* getValidChar(char* mensaje,char* mensajeError,char* input);
int getValidCodigo(char* mensaje,char* mensajeError,char* input);


int codigoExistente(int,ArrayList* );

int altaProducto(ArrayList*);

int modificarProducto(ArrayList*);

int bajaLogica(ArrayList*);

int bajaFisica(ArrayList*, ArrayList*);

int cargarDesdeArchivo(ArrayList* listado,int limite);

int guardarEnArchivo(ArrayList * this,int limite);

int listaFisicaBaja(ArrayList*,ArrayList*,eProducto*);

