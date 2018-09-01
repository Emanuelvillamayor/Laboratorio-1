typedef struct
{
    char mail[50];
    char nombre[50];
    int id;

}eCorreo;

eCorreo* eCorre_new();

int setMail(eCorreo*,char*);
int setNombre(eCorreo*,char*);
int setid(eCorreo*,int);

char* getMail(eCorreo*);
char* getNombre(eCorreo*);
int getid(eCorreo*);

int mostrarCorreo(eCorreo*);

int parserCorreo(FILE* pFile , ArrayList* pArrayList,char* nombreArchivo);
int parserCorreoWrite(FILE* pFile , ArrayList* pArrayList,char* nombreArchivo);

int mostrarLista(ArrayList*);

int depurarListas(ArrayList*,ArrayList*,ArrayList*);




void getString(char* mensaje,char* input);
int esNumerico(char*);
int esSoloLetras(char*);
int getValidInt(char* mensaje,char* mensajeError,char* input);
char* getValidChar(char* mensaje,char* mensajeError,char* input);


