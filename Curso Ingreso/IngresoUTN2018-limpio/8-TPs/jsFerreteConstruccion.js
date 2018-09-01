/*2.	Para el departamento de Construcción:
A.	 Mostrar la cantidad de alambre a comprar  si se ingresara el largo y el ancho de un terreno rectangular y se debe alambra con tres hilos de alambre.
B.	Mostrar la cantidad de alambre a comprar  si se ingresara el radio  de un terreno circular y se debe alambra con tres hilos de alambre.
C.	Para hacer un contrapiso de 1m x 1m se necesitan 2 bolsas de cemento y 3 de cal, debemos mostrar cuantas bolsas se necesitan de cada uno para las medidas que nos ingresen.
*/

function Rectangulo () 
{

var largo=parseInt(document.getElementById("Largo").value);
var ancho=parseInt(document.getElementById("Ancho").value);
var perimetro=largo+largo+ancho+ancho;
var resultado=perimetro*3;
alert(resultado);




}
function Circulo () 
{
    
    var radio=parseInt(document.getElementById("Radio").value);
    var perimetro=(2*3.14)*radio;
    var final=perimetro*3
    alert(  final);





}
function Materiales () 
{



    
    





    
}