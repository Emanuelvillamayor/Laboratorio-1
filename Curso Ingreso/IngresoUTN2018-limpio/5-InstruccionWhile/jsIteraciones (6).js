function Mostrar()
{

var acumulador=0;
var promedio;
var contador=0;
var num;


while(contador<5)
{
num=parseFloat(prompt("Ingrese un numero"));
acumulador=acumulador+num;
contador++;


}

promedio =acumulador/5;

document.getElementById("suma").value=acumulador;
document.getElementById("promedio").value=promedio.toFixed(2);












}//FIN DE LA FUNCIÓN