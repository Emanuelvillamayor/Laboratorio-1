function Mostrar()
{
//tomo el mes 
var mesDelAño = document.getElementById('mes').value;

switch (mesDelAño)

{
case "Julio"   : alert("Abrigate que hace frio");
break ;
case "Agosto" : alert("Abrigate que hace frio");
break;
case "Enero" : 
case "Febrero":
case "Marzo":
case "Abril":
case "Mayo":
case "Junio":alert("Falta para el invierno")
break;
case "Septiembre":
case "Octubre":
case "Noviembre":
case "Diciembre":alert("Ya pasamos el frio , ahora el calor ")
break ;

}
}//FIN DE LA FUNCIÓN