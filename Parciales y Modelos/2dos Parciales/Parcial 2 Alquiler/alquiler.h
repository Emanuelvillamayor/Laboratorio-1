
typedef struct
{
    int idCliente;
    int idAlquiler;
    int equipo;
    int tiempoEstimado;
    int tiempoReal;
    int estado;
}eAlquiler;

eAlquiler* eAlquiler_new();
int setidCliente(eAlquiler*,int);
int setidAlquiler(eAlquiler*,int);
int setequipo(eAlquiler*,int);
int settiempoEstimado(eAlquiler*,int);
int settiempoReal(eAlquiler*,int);
int setestado(eAlquiler*,int);

int getidCliente(eAlquiler*);
int getidAlquiler(eAlquiler*);
int getequipo(eAlquiler*);
int gettiempoEstimado(eAlquiler*);
int gettiempoReal(eAlquiler*);
int getestado(eAlquiler*);
