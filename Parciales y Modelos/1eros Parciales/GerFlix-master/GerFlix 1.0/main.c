#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);


    printf("Mostrar el listado de series\n");
    mostrarListaSeries(listaDeSeries, TAMSERIE);

    printf("\n");
   printf("Mostrar el listado de usuarios\n");
    mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);

     printf("\n");
    printf("Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
    mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO, listaDeSeries,TAMSERIE);

    printf("\n");
    printf("Mostrar el listado de Series con el nombre de los Usuarios que la ven\n");
    mostrarSerieConUsuario(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);




/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve.
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}
