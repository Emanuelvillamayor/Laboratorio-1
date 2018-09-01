function Mostrar()
{

/*Al presionar el botón pedir números hasta que el usuario quiera, mostar:
1-Suma de los negativos. 2-Suma de los positivos. 3-Cantidad de positivos. 4-Cantidad de negativos. 
5-Cantidad de ceros. 6-Cantidad de números pares. 7-Promedio de positivos. 
8-Promedios de negativos. 9-Diferencia entre positivos y negativos, (positvos-negativos).*/

var sumaNeg=0;
var sumaPos=0;
var contPos=0;
var contNeg=0;
var cantCero=0;
var cantPar=0;
var promPos;
var promNeg;
var diferencia;
var num;
var respuesta="si";

while(respuesta=="si")
{
    num=parseFloat(prompt("ingrese un numero"));
    if (num<0)
    {
    sumaNeg=sumaNeg+num;
    contNeg++;
    }
    else if (num>0)
    {
    sumaPos=sumaPos+num;
    contPos++
    }
    else
    {
        cantCero++;
    }

    if (num%2==0)
    {
        cantPar++;
    }

    respuesta=prompt("Desea continuar?");



}


promPos=sumaPos/contPos;
promNeg=sumaNeg/contNeg;
diferencia=sumaPos-sumaNeg;


document.write("La suma de los numeros negativos es "+sumaNeg+"<br/>");
document.write("La suma de los positivos es "+sumaPos+"<br/>");
document.write("La cantidad de numeros positivos es "+contPos+"<br/>");
document.write("La cantidad de numeros negativos es "+contNeg+"<br/>");
document.write("La cantidad de ceros es "+cantCero+"<br/>");
document.write("La cantidad de numeros pares es "+cantPar+"<br/>");
document.write("El promedio de los numeros positivos es de "+promPos+"<br/>");
document.write("El promedio de los numeros negativos es de "+promNeg+"<br/>");
document.write("La diferencia entre los numeros positivos y negativos es "+diferencia);









	






}//FIN DE LA FUNCIÓN