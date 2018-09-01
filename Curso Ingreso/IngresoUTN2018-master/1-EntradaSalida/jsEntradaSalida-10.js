/*Debemos lograr tomar el importe por ID.
Transformarlo a entero (parseInt), luego
mostrar el importe con un Descuento del 25 %
en el cuadro de texto "RESULTADO"*/
function MostrarDescuento()
{
    
    
var importe;
var nuevoimporte;

importe=parseInt(document.getElementById("importe").value);
nuevoimporte=importe-(importe *.25);

document.getElementById("resultado").value=nuevoimporte;



}