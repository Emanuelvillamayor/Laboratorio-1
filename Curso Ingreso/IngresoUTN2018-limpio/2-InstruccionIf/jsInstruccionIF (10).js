function Mostrar()
{
	//Genero el número RANDOM entre 1 y 10 
	

	var numerorandom;
	numerorandom= Math.floor(Math.random()*10)+1 ;
	 
	if (numerorandom==9 ||numerorandom==10)
{
	alert("Excelente");
}


else if (  numerorandom>4 && numerorandom<=8)
{
	alert("Aprobo");
}

}

if (numerorandom<=4 || numerorandom >=0)
{
	alert("Vamos la proxima se puede");
}

