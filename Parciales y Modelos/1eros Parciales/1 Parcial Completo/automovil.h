
#include "funciones.h"

typedef struct
{
    int idAutomovil;
    int idPropietario;
    char Patente[50];
    char marcaLetra[50];
    int marca;
    int estado;


}eAutomovil;
/** \brief Funcion que hardcodea datos de un automovil
 *
 * \param [] eAutomovil Array de automovil a hardcodear
 * \return void
 *
 */
void inicializarAutomovilHardCode(eAutomovil []);
/** \brief Funcion que permite el inicio en 0 del estado e id de un array de automovil
 *
 * \param eAutomovil[] Array de Automovil
 * \param int Longitud del array de Automovil
 * \return int 1 si se pudo inicializar,0 si no se pudo inicializar
 *
 */
int eAutomovil_init(eAutomovil[] ,int );
/** \brief Funcion que permite buscar si un id ingresado es existente dentro de un array de automovil
 *
 * \param eAutomovil[] Array de Automovil
 * \param int Longitud del array
 * \param int Id a buscar
 * \return int Devuelve el indice si lo encontro o -1 sino
 *
 */
int eAutomovil_buscarPorId(eAutomovil [] ,int ,int);
/** \brief Funcion que permite el id autoncremental de un array de Automovil
 *
 * \param eAutomovil[] Array de Automovil
 * \param int Longitud del array de Automovil
 * \return int Devuelve el id del Automovil incrementado en 1 si se pudo y sino devuelve 0
 *
 */
int eAutomovil_siguienteId(eAutomovil [] ,int );
/** \brief Funcion que permite saber si queda lugar o no en un array de Automovil para cargar datos
 *
 * \param [] eAutomovil  Array de Automovil
 * \param int Longitud del array de Automovil
 * \return int Devuelve -1 si no queda lugar o mayor a 0 si hay lugar
 *
 */
int eAutomovil_buscarLugarLibre(eAutomovil [],int );

/** \brief Funcion que muestra solo los datos de un Automovil
 *
 * \param eAutomovil Estructura de Automovil a mostrar datos
 * \return void
 *
 */
void eAutomovil_mostrarUno(eAutomovil );
/** \brief Funcion que permite mostrar los datos de un array de Automovil
 *
 * \param eAutomovil [] Array de Automovil a mostrar
 * \param int Longitud del array
 * \return int 1 si pudo mostrar , 0 sino
 *
 */
int eAutomovil_mostrarListado(eAutomovil [] ,int );
//int eAutomovil_mostrarListadoConBorrados(eAutomovil [] ,int );
/** \brief Funcion que permite el alta de los datos de un Automovil
 *
 * \param eAutomovil[] Array de Automovil
 * \param int Longitud del array de Automovil
 * \return int -1 si no quedan mas lugares, -3 si se pudo ingresar , -2 si hubo error ortografico
 *
 */
int eAutomovil_alta(eAutomovil [] ,int ,int);



