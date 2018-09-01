function Mostrar()
{
	var numero=parseInt(prompt("Ingrese un numero entre 0 y 9"));

	while (!(numero>=0 && numero<=9))
	{

	numero=	prompt("Reingrese un numero entre 0 y 9")
	}


document.getElementById("Numero").value=numero;


}//FIN DE LA FUNCIÓN