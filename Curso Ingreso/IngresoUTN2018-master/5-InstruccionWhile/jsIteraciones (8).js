function Mostrar()
{


	var positivo=0;
	var negativo=1;
	//ESTA VARIABLE SE UTILIZA PARA QUE NO QUEDE "0" AL FINAL SI SOLO HACEMOS UNA SUMA Y NO QUEDE "1" EN MULT.
	var flag=0
	var respuesta='si';
var numero

while (respuesta == "si")
{

numero=parseInt(prompt("Ingrese un numero"));

if (0 <=numero)
{
positivo += numero;

}
else
{
negativo *= numero;
flag =1;
}
respuesta =prompt("¿Desea continuar ?");
}



document.getElementById('suma').value=positivo;

if (flag==0)
{
negativo=0
	}
document.getElementById('producto').value=negativo;

}//FIN DE LA FUNCIÓN