function Mostrar()
{

	var num;
	var respuesta="si";
	var acumNeg=1;
	var acumPos=0;
 

	while(respuesta=="si")
	{
	 num=parseInt(prompt("Ingrese un numero"));
	 if (num<0)
	 {

	acumNeg=acumNeg*num;
	 }
	 if(num>0)
	 {
		 acumPos=acumPos+num;
	 }
	 respuesta=prompt("¿Desea continuar?");
	 


	}
	if (acumNeg==1)
	{
		acumNeg=0;
	}

document.getElementById("suma").value=acumPos;
document.getElementById("producto").value=acumNeg;




}//FIN DE LA FUNCIÓN