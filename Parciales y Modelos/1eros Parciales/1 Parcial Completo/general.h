#include "egreso.h"

/** \brief Funcion que permite estacionar un automovil a un determinado propietario
 *
 * \param ePropietario[] Array del propietario
 * \param int Longitud del array de propietario
 * \param eAutomovil[] Array de automovil
 * \param int Longitud del array de automovil
 * \return int Devuelve 0 si se pudo ingresar, -2 si hay errores de ortografia y -1 si no queda mas lugar
 *
 */
int ePropietario_publicarAutomovil(ePropietario[] ,int ,eAutomovil[],int);

/** \brief Funcion que permite dar de baja un automovil y mostrar valores de estadia y precio
 *
 * \param eEgreso[] array de Egreso
 * \param int Longitud del array de Egreso
 * \param eAutomovil[] array de automovil
 * \param int Longitud del array de automovil
 * \param ePropietario[] array de Propietario
 * \param int Longitud del array de Propietario
 * \return int 1 si se pudo egresar el auto , -1 si no
 *
 */
int eEgreso_darBaja(eEgreso[],int,eAutomovil[],int,ePropietario[],int);
/** \brief Funcion que permite ingresar id de propietario y mostrar sus autos estacionados
 *
 * \param ePropietario[] array de Propietario
 * \param int Longitud del array de Propietario
 * \param eAutomovil[] array de Automovil
 * \param int Longitud del array de Automovil
 * \return int -1 si no se pudo mostrar, mayor a 0 si pudo mostrar
 *
 */
int ePropietario_mostrarEstacionados(ePropietario[],int,eAutomovil[],int);
/** \brief Funcion que muestrar los datos de los propietarios que tengan estacionados autos audi
 *
 * \param ePropietario[] array de Propietario
 * \param int  Longitud del array de Propietario
 * \param eAutomovil[] array de Automovil
 * \param int  Longitud del array de Automovil
 * \return void
 *
 */
void ePropietario_autoAudi(ePropietario[],int,eAutomovil[],int);
/** \brief Funcion que permite mostrar todos los autos estacionados ordenados por patente
 *
 * \param [] ePropietario  array de Propietario
 * \param int Longitud del array de Propietario
 * \param [] eAutomovil array de Automovil
 * \param int Longitud del array de Automovil
 * \return void
 *
 */
void ePropietario_mostrarOrdenado(ePropietario [],int ,eAutomovil [],int);

void ePropietario_MostrarAutoyDueno(ePropietario[],int,eAutomovil[],int);
