function Mostrar()
{
// Tanto CONTADOR como ACUMULADOR se les agrega un "=0" para que la variable venga cargada para operacion mate
	var contador=0;
	var acumulador=0;
var numero;
//CONTADOR porque son las veces que quiero que ingrese un numero de nuevo hasta que llegue al "5"
while (contador<5)

{

numero=parseInt(prompt("Ingreses un numero"));
//ACUMULADOR se le suma (+=) la variable
acumulador += numero;
//CONTADOR se le suma un numero "1" en este caso o "++"
contador ++;



}

document.getElementById('suma').value=acumulador;
//EL /5 es para sacar el promedio 
document.getElementById('promedio').value=acumulador/5;

}//FIN DE LA FUNCIÓN