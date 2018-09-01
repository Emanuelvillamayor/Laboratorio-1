typedef struct
{
    int num;
    char nombre[50];
    char alfaNumerico[50];

}ePersona;
/**Basicos*/


void getString(char* mensaje,char* input);
int esNumerico(char*);
int esSoloLetras(char*);
int esAlfanumerico(char*);
int esNumericoFlotante(char*);

int getValidInt(char* mensaje,char* mensajeError,char* input);
char* getValidChar(char* mensaje,char* mensajeError,char* input);
char* getValidAlphaNum(char* mensaje,char* mensajeError,char* input);
float getValidFlotante(char* mensaje,char* mensajeError,char* input);






/******************************************/
/**Especificos*/
int esDni(char* dato);
int esTelefono(char* dato);
int getValidDNI(char* mensaje,char* mensajeError,char* input);
int getValidTelefono(char* mensaje,char* mensajeError,char* input);


/******************************************/
/**SET,GET,CONSTRUCTOR,COMPARADOR*/
int setNum(ePersona* persona,int num);
int setChar(ePersona* persona,char* cadena);

int getNum(ePersona* persona);
char* getChar(ePersona* persona);

ePersona* estrucutra_new(void);//constructor

int Persona_compareInt(void* pPersonaA,void* pPersonaB);
int Persona_compareString(void* pPersonaA,void* pPersonaB);
int Persona_print(ePersona* persona);
int Persona_delete(ePersona* persona);



/******************ARCHIVOS************************/
void guardarBinario(ArrayList* this);
void cargarBinario(ArrayList* this);
int parserCorreo(FILE* pFile , ArrayList* pArrayList,char* nombreArchivo);
int parserCorreoWrite(FILE* pFile , ArrayList* pArrayList,char* nombreArchivo);

void double_sort(ArrayList* this);

void Idautoincremental(ArrayList* this,ArrayList* this2,eAutomovil* aux);

