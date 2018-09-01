/*Debemos lograr tomar nombre y edad por ID y mostrarlos concatenados 
ej.: "Usted se llama José y tiene 66 años" 	*/
function Mostrar()
{	
    // primero escribo los dos var uno  abajo del otro
var nombre=document.getElementById("elNombre").value;
var edad=document.getElementById("laEdad").value;
alert("Usted se llama "+nombre +" y tiene "+edad+" años");


	
}

