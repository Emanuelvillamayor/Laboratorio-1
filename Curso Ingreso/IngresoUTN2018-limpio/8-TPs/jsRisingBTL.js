/*RISING BTL. Empresa dedicada a la toma de datos para realizar estadísticas y censos nos pide realizar una carga de datos validada e ingresada por ventanas emergentes solamente (para evitar hacking y cargas maliciosas) y luego asignarla a cuadros de textos. 
12.   Los datos requeridos son los siguientes:
A.	Edad, entre 18 y 90 años inclusive.
B.	Sexo, “M” para masculino y “F” para femenino
C.	Estado civil, 1-para soltero, 2-para casados, 3-para divorciados y 4-para viudos
D.	Sueldo bruto, no menor a 8000.
E.	Número de legajo, numérico de 4 cifras, sin ceros a la izquierda.
F.	Nacionalidad, “A” para argentinos, “E” para extranjeros, “N” para nacionalizados.
 */
function ComenzarIngreso () 
{
 var edad=parseInt(prompt("Ingrese una edad entre 18 y 90 años"));
 var sexo;
 var estadoCiv;
 var sueldo;
 var numLegajo;
 var nacionalidad;

 while(!(edad>=18 && edad <=90))
 {

    edad=parseInt(prompt("Error.Reingrese una edad entre 18 y 90 años"));

 }

sexo=prompt("Ingreso un sexo m (masculino) y f (femenino)");
while (!(sexo=="f"||sexo=="m"))
{
    sexo=prompt("Error,Reingrese un sexo m (masculino) y f (femenino)");
}

estadoCiv=parseInt(prompt("Ingrese los numeros 1-para soltero, 2-para casados, 3-para divorciados y 4-para viudos"));
while (!(estadoCiv<=4 && estadoCiv>=1))
{
    estadoCiv=parseInt(prompt("Error, ingrese numero entre 1 y 4"));
}

switch(estadoCiv)
{
    case 1: estadoCiv="soltero"
    break;
    case 2:estadoCiv="casado"
    break;
    case 3:estadoCiv="divorciado"
    break;
    case 4:estadoCiv="viudo"
    break;

}
 sueldo=parseInt(prompt("Ingrese un sueldo bruto no menor a 8000"));
 while (!(sueldo>=8000))
 {
    sueldo=parseInt(prompt("Error.Reingrese un sueldo bruto no menor a 8000"));
 }














document.getElementById("Edad").value=edad;
document.getElementById("Sexo").value=sexo;
 document.getElementById("EstadoCivil").value=estadoCiv;
document.getElementById("Sueldo").value=sueldo;








}
