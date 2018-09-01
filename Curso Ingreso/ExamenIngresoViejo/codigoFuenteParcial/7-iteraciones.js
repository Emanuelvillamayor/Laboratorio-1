//Debemos lograr mostrar un mensaje al presionar el botón  'MOSTRAR'.Realizar el algoritmo que al presionar el botón 
// "Mostrar" pida por prompt las notas (validar entre 0 y 10) y el sexo(validar el sexo “f” o “m”) de 6 alumnos
//, informar por alert:
//a) el promedio de las notas totales. 
//b) la nota más baja. 
//c) la cantidad de varones que su nota haya sido mayor o igual a 6.





function Mostrar()
{
var sexo;
var nota;
var promNota;
var sumaNotas=0;
var notaBaja;
var varonesNota=0
var flag=0

for(i=1;i<=6;i++)
{
nota=parseInt(prompt("Ingrese un nota "));
while(nota>11 ||nota<-1)

{ 
    nota=parseInt(prompt("Error, ingrese una nota entre 0 y 10"));
}
sexo=prompt("Ingreso un sexo f(femenino) o m (masculino)");
while(!(sexo =="m" || sexo=="f"))
{

    sexo=prompt("Ingrese un sexo correcto");
}

sumaNotas=nota+sumaNotas;
if (nota<notaBaja|flag==0)
{
    notaBaja=nota
    flag=1


}
if (nota>=6 && sexo=="m")
{
    varonesNota++;
}
}
promNota=sumaNotas/6;


document.write("El promedio de las notas totales es "+ promNota+"<br/>");
document.write("La nota mas baja es "+notaBaja+ "<br/>");
document.write("Cantidad de varones que su nota fue 6 o mas es igual a "+varonesNota+"<br/>")








}

