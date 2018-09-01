#include "automovil.h"
typedef struct
{

    int idPropietario;
    char Nombre[50];
    char apellido[50];
    char direccion[50];
    char  tarjeta[50];
    int estado;


}ePropietario;


/** \brief Funcion que hardcodea datos de un propietaro
 *
 * \param [] ePropietario Array de propietario a hardcodear
 * \return void
 *
 */
void inicializarPropietarioHardCode(ePropietario []);
/** \brief Funcion que permite el inicio en 0 del estado e id de un array de propietario
 *
 * \param ePropietario[] Array de propietario
 * \param int Longitud del array de propietario
 * \return int 1 si se pudo inicializar,0 si no se pudo inicializar
 *
 */
int ePropietario_init(ePropietario[],int );
/** \brief Funcion que permite buscar si un id ingresado es existente dentro de un array de propietario
 *
 * \param ePropietario[] Array de propietario
 * \param int Longitud del array
 * \param int Id a buscar
 * \return int Devuelve el indice si lo encontro o -1 sino
 *
 */
int ePropietario_buscarPorId(ePropietario[] ,int , int );

/** \brief Funcion que permite el id autoncremental de un array de propietario
 *
 * \param ePropietario[] Array de propietario
 * \param int Longitud del array de propietario
 * \return int Devuelve el id del propietario incrementado en 1 si se pudo y sino devuelve 0
 *
 */
int ePropietario_siguienteId(ePropietario[] ,int );
/** \brief Funcion que permite saber si queda lugar o no en un array de propietario para cargar datos
 *
 * \param [] ePropietario Array de propietario
 * \param int Longitud del array de propietario
 * \return int Devuelve -1 si no queda lugar o mayor a 0 si hay lugar
 *
 */
int ePropietario_buscarLugarLibre(ePropietario [],int );

/** \brief Funcion que muestra solo los datos de un propietario
 *
 * \param ePropietario Estructura de Propietario a mostrar datos
 * \return void
 *
 */
void ePropietario_mostrarUno(ePropietario );
/** \brief Funcion que permite mostrar los datos de un array de propietario
 *
 * \param ePropietario[] Array de propietario a mostrar
 * \param int Longitud del array
 * \return int 1 si pudo mostrar , 0 sino
 *
 */
int ePropietario_mostrarListado(ePropietario[] ,int );
//int ePropietario_mostrarListadoConBorrados(ePropietario[] ,int );

/** \brief Funcion que permite el alta de los datos de un Propietario
 *
 * \param ePropietario[] Array de Propietario
 * \param int Longitud del array de Propietario
 * \return int -1 si no quedan mas lugares, -3 si se pudo ingresar , -2 si hubo error ortografico
 *
 */
int ePropietario_alta(ePropietario[] ,int );
/** \brief Funcion que permite dar de baja a un Propietario
 *
 * \param ePropietario[] Array de propietario
 * \param int Longitud del array de propietario
 * \return int mayor a 0 si se pudo dar de baja , menor a 0 si no se pudo dar de baja
 *
 */
int ePropietario_baja(ePropietario[] ,int );
/** \brief Funcion que permite modificar los datos de un array de propietario(solo tarjeta)
 *
 * \param ePropietario[] Array de propietario
 * \param int Longitud del array
 * \return int Devuel mayor a 0 si se pudo modificar o menor a 0 si se pudo modificar
 *
 */
int ePropietario_modificacion(ePropietario[] ,int );




