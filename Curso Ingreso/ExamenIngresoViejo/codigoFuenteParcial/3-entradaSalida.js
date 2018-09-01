//Debemos lograr mostrar un mensaje al presionar el botón  'MOSTRAR'.
function Mostrar()
{
    
    
var largo=parseInt(document.getElementById("largo").value);
var ancho=parseInt(document.getElementById("ancho").value);

var perimetro=largo+largo+ancho+ancho
var resultado=perimetro*6

document.write("El perimetro del terreno va a ser de "+resultado);




}

