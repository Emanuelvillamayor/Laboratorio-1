function Mostrar()
{
//tomo la edad  

edad=parseInt(document.getElementById("edad").value);
estado=document.getElementById("estadoCivil").value;

if(edad<18 && estado!="Soltero")

{

}

if(edad >=18  && estado=="Soltero")


{
    alert("Es soltero y no es menor ");
}

}//FIN DE LA FUNCIÓN