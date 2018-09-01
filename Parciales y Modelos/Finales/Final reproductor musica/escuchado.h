#include "usuarios.h"
typedef struct
{
    int idTema;
    int idUsuario;


}eEscuchado;

eEscuchado* new_escuchado();

int escucharTema(ArrayList*,ArrayList*,ArrayList*);
eUsuario* buscarUsuario(ArrayList*,char*);
