function Mostrar()
{
/* 1-suma de negativos
2-suma de positivos
3-cantidad de positivos
4-cantidad de negativos
5-cantidad de ceros
6-cantidad de numeros pares
7- promedio de positivos
8-promedio de negativos
9-diferencia entre positivos y negativos

*/
var sumaNeg=0;
var sumaPos=0;
var cantPos=0;
var cantNeg=0;
var cant0=0;
var cantPar=0
var promPos;
var promNeg;
var diferencia;
var numero;

do 
{

numero=parseInt(prompt("Ingrese un numero"));
if (numero<0)
{

sumaNeg=sumaNeg+numero;
cantNeg++;

}
else if (numero >0)
{

	sumaPos=sumaPos+numero
	cantPos ++
}
else
{
  cant0++
}
if (numero%2==0)
{
cantPar++
}

respuesta=prompt("Desea continuar? ")
}
	
while(respuesta=="si")

promNeg=sumaNeg/cantNeg
promPos=sumaPos/cantPos
diferencia=sumaPos-sumaNeg



document.write("La suma de los negativos es igual a " + sumaNeg+ "<br/>")
document.write("La cantidad de numeros negativos es " + cantNeg+ "<br/>")
document.write("La suma de los postivos es igual a " + sumaPos+ "<br/>")
document.write("La cantidad de numeros positivos es  " + cantPos + "<br/>")
document.write("La cantidad de ceros es  " + cant0 + "<br/>")
document.write("La cantidad de numeros pares es  " + cantPar + "<br/>")
document.write("El promedio de los negativos es   " + promNeg + "<br/>")
document.write("El promedio de los positivos es  " + promPos + "<br/>")
document.write("La diferencia es  " + diferencia + "<br/>")
}//FIN DE LA FUNCIÓN

