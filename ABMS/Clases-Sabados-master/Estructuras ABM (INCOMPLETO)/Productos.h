
typedef struct
{
    int idProducto;
    char descripcion[50];
    int stock;
    float precioUnitario;
    int estado;
}eProducto;


int buscarLibre(eProducto[], int);



eProducto pedirProducto();

int ingresarProductoEnLista(eProducto[], int);

int modificarProducto(eProducto[], int, int);

int borrarProducto(eProducto[], int, int);

void mostrarListaDeProductos(eProducto[], int);

void mostrarUnProducto(eProducto);

void ordenarProductos(eProducto[], int);

int getInt(char []);

int validarInt(char []);

float getFloat(char []);

float validarFloat(char []);

int getString(char [],char []);

int validarString(char []);

void inicialarEstadoeProducto (eProducto[],int ,int );

void inicilizarArray
