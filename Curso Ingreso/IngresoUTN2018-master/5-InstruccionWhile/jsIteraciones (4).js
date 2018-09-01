function Mostrar()
{

	var numero = prompt("ingrese un número entre 0 y 9.");


	while (numero <0 || numero >9)
//se puede poner tambien (!(numero>=0 && numero <=9))

{

numero=prompt("El numero no se encuentra dentro del 0 y 9 , reingrese numero ")




}
document.getElementById("Numero").value=numero


//NO PONGO EL ALERT PORQUE TENGO QUE MSOTRARLO POR EL CUADRO QUE ME APARECE EN LA PAGINA
// ENTONCES USO "DOCUMENT"




}//FIN DE LA FUNCIÓN