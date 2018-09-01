function Mostrar()
{


var sexo=prompt("ingres un sexo f(femenino) o m (masculino)");

while (sexo!="f" && sexo!="m")
{


sexo=prompt("Error , reingrese un sexo correcto");
}

document.getElementById("Sexo").value=sexo;




}//FIN DE LA FUNCIÓN