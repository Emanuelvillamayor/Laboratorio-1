/*2.	Para el departamento de Construcción:
A.	 Mostrar la cantidad de alambre a comprar  si se ingresara el largo y el ancho de un terreno rectangular y se debe alambra con tres hilos de alambre.
B.	Mostrar la cantidad de alambre a comprar  si se ingresara el radio  de un terreno circular y se debe alambra con tres hilos de alambre.
C.	Para hacer un contrapiso de 1m x 1m se necesitan 2 bolsas de cemento y 3 de cal, debemos mostrar cuantas bolsas se necesitan de cada uno para las medidas que nos ingresen.
*/

function Rectangulo () 
{
var largo=parseInt(document.getElementById("Largo").value);
var ancho=parseInt(document.getElementById("Ancho").value);
// SE CALCULA EL PERIMETRO PORQUE ES LO QUE PIDE EL EJERCICIO
//otra forma de calcular perimetro puede ser : "largo*2+ancho*2" o  "(largo+ancho)*2"
var perimetro=largo+largo+ancho+ancho
//SE MULTIPLICA AL PERIMETRO POR 3 PORQUE EL EJERCICIO PIDE "3 ALAMBRES"
alert("Se debe comprar " + (perimetro *3)+ " metros de alambre"  );




}
function Circulo () 
{
	var radio=parseFloat(document.getElementById("Radio").value);
// TAMBIEN SE PUEDE HACER "2*radio*math.pi"
    var perimetro=(2*3.14)*radio;
    alert(perimetro * 3);


}
function Materiales () 
{
	
var largo=parseInt(document.getElementById("Largo").value);
var ancho=parseInt(document.getElementById("Ancho").value);
var superficie=largo*ancho
var cemento=2*superficie
var cal=3*superficie
alert("Se necesitan " + cemento+" bolsas de cemento y " + cal + " bolsas de cal")


}