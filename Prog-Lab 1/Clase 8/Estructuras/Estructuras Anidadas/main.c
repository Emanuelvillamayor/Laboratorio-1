#include <stdio.h>
#include <stdlib.h>
/**Primero se definen las estructuras anidadas y luego las principales */
typedef struct
{
  char calle[50];
    int numero;
    char localidad[50];
    int piso;
    char dpto;
    int cp;
}eDomicilio;

typedef struct
{
    int legajo;
    char nombre[50];//Utilizamos solo una dimension

    eDomicilio domicilio;

    /**Esto se reemplaza por lo de arriba por el "eDomicilio";*/
 /*   char calle[50];
    int numero;
    char localidad[50]; /
    int piso;
    char dpto;
    int cp;*/



}eAlumno; //solo info para alumno
typedef struct
{
    /**para el profesor se van a repetir los mismos datos , es decir patron y lo que hacemos es abstraernos , es decir
tomar de varias cosas lo que tienen en comun y encapsularlas-PROCESO DE ABSTRACCION*/




}eProfesor;


int main()
{
    //al lado del vector , en este caso "miAlumno" tengo que poner si es necesario "[]"

    eAlumno miAlumno;//declaro la variable
    /**seteo legajo de alumno*/

   miAlumno.legajo=400; //doy valor al legajo
    /**entro a la struc de domicilio y ponemos "." y despliega los campos que hay dentro de la estructura*/

    miAlumno.domicilio.cp=1879;//doy valor al domicilio
    /**paramostrar especificamente lo que quiero
printf("legajo: %d----cp:  %d",miAlumno.legajo,miAlumno.domicilio.cp);

*/
    return 0;

}
