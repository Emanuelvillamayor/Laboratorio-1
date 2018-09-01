function Mostrar()
{

	var numMax=0
	var numMin=0
	var num;
	var respuesta="si"
	var flag=0;

while(respuesta=="si")
{

num=parseInt(prompt("Ingrese un numero"));


if (num>numMax||flag==0)
{
	numMax=num;
}
if (num<numMin||flag==0)
{
	numMin=num;
	flag=1
}


respuesta=prompt("¿desea continuar ?");

}
document.getElementById("maximo").value=numMax;
document.getElementById("minimo").value=numMin;


}//FIN DE LA FUNCIÓN