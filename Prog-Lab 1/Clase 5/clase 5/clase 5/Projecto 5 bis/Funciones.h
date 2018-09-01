/** \brief Funcion que permite el ingreso de datos(int) al vector
 *
 * \param vect[] int El vector indicado
 * \param tamanio int Cantidad de vectores ingresados
 * \return void
 *
 */
void cargarVector(int [],int);


/**********************************************************/

/** \brief Funcion que obtiene el valor maximo de un vector
 *
 * \param int[] El vector
 * \param int Cantidad de vectores ingresados
 * \return int El maximo valor encontrado en el vector
 *
 */
int Maximo(int[],int);


/**********************************************************/


/** \brief Funciones que muestra el "sub-indice" y el "valor" que hay en un vector
 *
 * \param int[] El vector
 * \param int   Cantidad de vectores ingresados
 * \return void
 *
 */
void mostrarVector(int[],int);

/**********************************************************/



/** \brief Funcion que modifica un vector en determinada posicion
 *
 * \param int[] El vector
 * \return void
 *
 */
void modificarValor(int[]);


/**********************************************************/




/** \brief Funcion que indica si se encontro un determinado valor(int) dentro de un vector
 *
 * \param int[] El vector
 * \param Cantidad de elementos dentro del vector
 * \param El valor (int) que quiero revisar si esta
 * \return Resultado de bandera "-1" si esta o "valor" si esta
 *
 */
int buscarValor (int[],int,int);
