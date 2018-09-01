/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param char[] (mensaje) Es el mensaje a ser mostrado
 * \param char[] (input) Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char [],char []);

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] (mensaje) Es el mensaje a ser mostrado
 * \param char[] (input) Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char [],char []);


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
int cargarAlumno(int [], char [][20], int [], int [], float [], int );
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
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
/** \brief Permite modificar datos de alguna Id
 *
 * \param int[] el vector a recorrer
 * \param char[][20] descripciones
 * \param int[] stock
 * \param float[] precio Unitario
  * \param int cantidad de elementos de la lista
 * \return 0 si no se pudo modificar o el Id si se pudo modificar
 *
 */
int modificarAlumno(int[], char[][20], int[], int[], float[], int);
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
void ordenarAlumnos(int[], char [][20], int[], int[], float[],int);
void borrarAlumno(int[], char[][20], int[], int[], float[], int);

/** \brief
 *
 * \param int [] Es el array en el cual se va a buscar
 * \param int int cantidad_de_elementos Indica la logitud del array
 * \return int Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int buscarLibre(int [], int );
/**
 * \brief Busca la primer ocurrencia de un valor en un array de enteros
 * \param int [] array Es el array en el cual buscar
 * \param  int cantidad_de_elementos Indica la logitud del array
 * \param  int valor Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int buscarLegajo(int [],int ,int );


/** \brief Funcion que calcula el promedio de dos ENTEROS
 *
 * \param int Primer entero
 * \param int Segundo entero
 * \return float devuelve el resultado entre el primer y el segundo entero
 *
 */
float calcularPromedio(int , int );

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
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] (mensaje) Es el mensaje a ser mostrado
 * \param char [] (input) Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char [],char []);
