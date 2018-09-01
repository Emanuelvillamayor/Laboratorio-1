
#include <stdio.h>
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param char[] Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char []);
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char []);
/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param char [] Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
char getChar(char []);


/**
 * \brief Verifica si el valor recibido es numérico entero
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si es númerico entero y 0 si no lo es
 *
 */

int esNumerico(char []) ;
/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
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
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTarjeta(char []);
/**
 * \brief Verifica si el valor recibido es numérico flotante
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si es númerico flotante  y 0 si no lo es
 *
 */
int esNumericoFlotante(char []);


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[]);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras y numeros
 */
int getPassword(char mensaje[],char input[]);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[]);
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números enteros
 */
int getStringNumeros(char mensaje[],char input[]);
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números enteros o flotantes
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





