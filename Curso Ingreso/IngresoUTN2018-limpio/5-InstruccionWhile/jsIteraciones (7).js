function Mostrar()
{


	var acumulador=0;
	var promedio;
	var contador=0;
	var num;
	var respuesta="si"
	
	
	while(respuesta=="si")
	{
		num=parseFloat(prompt("Ingrese un numero"));
	acumulador=acumulador+num;
	contador++;
	respuesta=prompt("Desea continuar?");
	
	}
	
	promedio =acumulador/contador;
	
	document.getElementById("suma").value=acumulador;
	document.getElementById("promedio").value=promedio.toFixed(2);








}//FIN DE LA FUNCIÓN