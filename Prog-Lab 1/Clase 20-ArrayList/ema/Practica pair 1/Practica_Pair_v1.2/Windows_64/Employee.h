/*
    utest example : Unit test examples.
    Copyright (C) <2016>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
struct
{
    int id;
    char name[51];
    char lastName[51];
    int isEmpty;

}typedef Employee;

int employee_agregarElemento(Employee*,ArrayList* );

int employee_compare(void* pEmployeeA,void* pEmployeeB);/**->*/
void employee_print(Employee* this);/**->*/
Employee* employee_new(void);//constructor-> malloc por fuera
void employee_delete(Employee* this);/**free,liberas el espaic pero el puntero sigue apuntando a esa memoria*/

//int employee_setId(Employee* this, int id);
int employee_setId(Employee* this, char* id);
//int employee_setName(Employee* this, char* nombre);
int employee_setName(Employee* this, char* nombre);
int employee_setLastName(Employee* this,char* apellido);
int employee_setIsEmpty(Employee* this,int espacio);

int employee_getId(Employee* this);
char* employee_getName(Employee* this);
char* employee_getLastName(Employee* this);
int employee_getIsEmpty(Employee* this);


/*****************************************************************************************/
/**
 * \brief Verifica si el valor recibido es numérico entero
 * \param char* puntero con la cadena a ser analizada
 * \return 1 si es númerico entero y 0 si no lo es
 *
 */

int esNumerico(char *) ;
/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param char* puntero con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char *);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char* Es el mensaje a ser mostrado
 * \param char* puntero donde se cargará el texto ingresado
 * \return void
 */
void getString(char* mensaje,char* input);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param char* Es el mensaje a ser mostrado
 * \param char* puntero donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */

int getStringLetras(char* mensaje,char* input);
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param char[] Es el mensaje a ser mostrado
 * \param char[] puntero donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números enteros
 */
int getStringNumeros(char* mensaje,char* input);


#endif // _EMPLOYEE_H



