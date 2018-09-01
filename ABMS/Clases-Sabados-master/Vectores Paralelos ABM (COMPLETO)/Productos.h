
/** \brief Permite el ingreso de datos
 *
 * \param int[] el vector a recorrer
 * \param char[]char[][50] descripciones
 * \param int[] stock
 * \param float[] precio Unitario
  * \param int cantidad de elementos de la lista
 * \return -1 si no se pudo realizar la accion , 0 si se realiza y -2 si hubo error ortografico
 *
 */
int cargarProductos(int [], char [][50], int[],float[],int);

/** \brief muestra los productos en forma de lista
 *
 * \param int[] ids
 * \param char[][50] descripciones
 * \param int[] stock
 * \param float[] precio Unitario
 * \param int cantidad de elementos de la lista
 * \return void
 *
 */
void mostrarProductos(int[], char[][50], int[], float[], int);

/** \brief Permite ordenar por nombre un array de vectores
 *
 * \param int[] el vector a recorrer
 * \param char[]char[][50] descripciones
 * \param int[] stock
 * \param float[] precio Unitario
  * \param int cantidad de elementos de la lista
 * \return void
 *
 */

void ordenarProductos(int[], char[][50], int[], float[], int);
/** \brief Permite modificar datos de alguna Id
 *
 * \param int[] el vector a recorrer
 * \param char[][50] descripciones
 * \param int[] stock
 * \param float[] precio Unitario
  * \param int cantidad de elementos de la lista
 * \return 0 si no se pudo modificar o el Id si se pudo modificar
 *
 */
int modificarProducto(int[],char[][50],int[],float[],int);




/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] (mensaje) Es el mensaje a ser mostrado
 * \param char[] (input) Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char [],char []);

/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param char[] (mensaje) Es el mensaje a ser mostrado
 * \param char[] (input) Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char [],char []);




/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param char [] (str) Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char []);
/**
 * \brief Verifica si el valor recibido es numérico
 * \param char [] (str) Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumerico(char []) ;





/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param char [] Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char []);
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param char [] Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char []);
/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param char [] Es el mensaje a ser mostrado
 * \return El CARACTER(no cadena) ingresado por el usuario
 *
 */
char getChar(char []);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] (mensaje) Es el mensaje a ser mostrado
 * \param char [] (input) Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char [],char []);






/**
 * \brief Busca la primer ocurrencia de un valor en un array de enteros
 * \param int [] array Es el array en el cual buscar
 * \param  int cantidad_de_elementos Indica la logitud del array
 * \param  int valor Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int buscarId(int [],int ,int );

/** \brief
 *
 * \param int [] Es el array en el cual se va a buscar
 * \param int int cantidad_de_elementos Indica la logitud del array
 * \return int Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int buscarLibre(int[], int);




