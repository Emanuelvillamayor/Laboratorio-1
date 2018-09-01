
#include <stdio.h>
/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param char[] Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
int getInt(char []);
/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
float getFloat(char []);
/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param char [] Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
char getChar(char []);


/**
 * \brief Verifica si el valor recibido es num�rico entero
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si es n�merico entero y 0 si no lo es
 *
 */

int esNumerico(char []) ;
/**
 * \brief Verifica si el valor recibido contiene solo letras y n�meros
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y n�meros, y 0 si no lo es
 *
 */
int esAlfaNumerico(char []);
/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char []);
/**
 * \brief Verifica si el valor recibido contiene solo n�meros, + y -
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTarjeta(char []);
/**
 * \brief Verifica si el valor recibido es num�rico flotante
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si es n�merico flotante  y 0 si no lo es
 *
 */
int esNumericoFlotante(char []);


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargar� el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[]);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo letras y numeros
 */
int getPassword(char mensaje[],char input[]);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[]);
/**
 * \brief Solicita un texto num�rico al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros enteros
 */
int getStringNumeros(char mensaje[],char input[]);
/**
 * \brief Solicita un texto num�rico al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros enteros o flotantes
 */
int getStringNumerosFlotantes(char mensaje[],char input[]);

/** \brief Funcion que solicita un texto numerico con un guion y lo devuelv
 *
 * \param [] char Es el mensaje a ser mostrado
 * \param [] char Array donde se cargara el texto ingresado
 * \return int 1 si el texto contiene solo numeros y guion o 0 si esto no ocurre
 *
 */
int getTarjeta(char [],char []);





