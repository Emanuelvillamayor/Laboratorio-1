#include "propietario.h"
typedef struct
{
int tiempo;
float importe;
int marca;
int idEgreso;
int estado;

}eEgreso;

/** \brief Funcion que devuelve una cantidad de horas random
 *
 * \return int Tiempo de horas
 *
 */
int devolverHorasEstadia();
/** \brief Funcion que calcula el precio de acuerdo a la marca del auto y el tiempo
 *
 * \param int Tiempo de estadia
 * \param int Marca del auto
 * \return int Precio de acuerdo a la cantidad de horas que el auto estuvo estacionado
 *
 */
int precioHoras(int,int);
/** \brief Funcion que hardcodea datos de egreso en un array de egreso
 *
 * \param eEgreso[] array de egreso
 * \return void
 *
 */
void inicializarEgresoHardCode(eEgreso[]);
/** \brief Funcion que permite el inicio en 0 del estado e id de un array de egresos
 *
 * \param eEgreso[] Array de egresos
 * \param int Longitud del array de egresos
 * \return int 1 si se pudo inicializar,0 si no se pudo inicializar
 *
 */
int eEgreso_init(eEgreso[] ,int );
/** \brief Funcion que permite el id autoncremental de un array de egreso
 *
 * \param eEgreso[] Array de  egreso
 * \param int Longitud del array de  egreso
 * \return int Devuelve el id del  egreso incrementado en 1 si se pudo y sino devuelve 0
 *
 */
int eEgreso_siguienteId(eEgreso [] ,int );
/** \brief Funcion que muestra la recaudacion total de los autos que estuvieron estacionados
 *
 * \param [] eEgreso Array  de egreso
 * \param int Longitud del array de egreso
 * \return void
 *
 */
void mostrarRecaudacionTotal(eEgreso [],int );
/** \brief Funcion que muestra la recaudacion total de acuerdo a cada marca de auto
 *
 * \param eEgreso[] Array  de egreso
 * \param int Longitud del array de egreso
 * \return void
 *
 */
void mostrarRecaudacionMarca(eEgreso[],int);
/** \brief Funcion que permite saber si queda lugar o no en un array de Egreso para cargar datos
 *
 * \param eEgreso[] Array  de egreso
 * \param int Longitud del array de egreso
 * \return int Devuelve -1 si no queda lugar o mayor a 0 si hay lugar
 *
 */
int eEgreso_buscarLugarLibre(eEgreso [],int );

