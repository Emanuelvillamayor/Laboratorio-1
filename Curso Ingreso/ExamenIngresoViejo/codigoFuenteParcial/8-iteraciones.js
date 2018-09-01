//Debemos lograr mostrar un mensaje al presionar el botón  'MOSTRAR'.
function Mostrar()
{
    /*
Realizar el algoritmo que al presionar el botón "Mostrar" permita ingresar números positivos (validar que sea positivo) 
 hasta que el usuario quiera.
Informar al terminar el ingreso por document.write: 
a) la cantidad de números pares. 
b) el promedio de todos los números ingresados. 
c) la suma de todos los números. 
d) El número máximo y el mínimo.

*/
    var num;
    var cantPar=0
    var cantNum=0
    var promNum;
    var sumaNum=0
    var numMax;
    var numMin;
    var flag=0
    var respuesta="si"

while(respuesta=="si")
{
num=parseInt(prompt("Ingrese un numero positivo"))
while(num<0)
{

    num=parseInt(prompt("Error.Ingrese un numero positivo"))

}

if (num%2==0)
{
    cantPar++
}
sumaNum=num+sumaNum

if(num>numMax||flag==0)
{
    numMax=num
}
if(num<numMin||flag==0)
{

numMin=num
flag=1

}
cantNum++
respuesta=prompt("Desea continuar?")
}
promNum=sumaNum/cantNum;

document.write("La cantidad de numeros pares es "+ cantPar+"<br/>");
document.write("El promedio de todos los numeros es "+promNum.toFixed(2) + "<br/>");
document.write("La suma de todos los numeros es "+sumaNum+"<br/>");
document.write("El numero maximo es "+numMax+"<br/>");
document.write("El numero minimo es "+numMin+"<br/>");




}

