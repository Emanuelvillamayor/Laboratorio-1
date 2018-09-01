function Mostrar()
{

	var contador=0;
	// declarar variables
	
var max=0;
var min=0;
var contador=0;
var numero;

do 
{

	numero=parseInt(prompt("ingrese un numero"));
	contador ++
	if (contador==1)
	{
max=numero
min=numero
 }
if(numero>max)
{
max=numero
}
if (numero<min)

{
min=numero
}

respuesta=prompt("Desea continuar?")
}
while (respuesta =="si")

document.getElementById("maximo").value=max;
document.getElementById("minimo").value=min;


}//FIN DE LA FUNCIÓN