#include <stdio.h>
/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param char[] Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
int getInt(char*);
/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
float getFloat(char*);
/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param char [] Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
char getChar(char*);
/**
 * \brief Verifica si el valor recibido es num�rico entero
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si es n�merico entero y 0 si no lo es
 *
 */

int esNumerico(char*) ;
/**
 * \brief Verifica si el valor recibido contiene solo letras y n�meros
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y n�meros, y 0 si no lo es
 *
 */
int esAlfaNumerico(char*);

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char []);
/**
 * \brief Verifica si el valor recibido es num�rico flotante
 * \param char[] Array con la cadena a ser analizada
 * \return 1 si es n�merico flotante  y 0 si no lo es
 *
 */
int esNumericoFlotante(char []);
