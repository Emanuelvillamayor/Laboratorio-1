function Mostrar()
{
/*al presionar el botón pedir un número. Mostar los numeros pares desde el 1 al número ingresado, 
y mostar la cantidad de numeros pares encontrados*/
var num;
var cantPar=0;
var i;

num=parseInt(prompt("Ingrese un numero"));
for (i=1;i<=num;i++)
{
    if (i%2==0)
    {
        cantPar++
        console.log(i)
    }
}


console.log("Se encontraron "+ cantPar+" numeros pares");





}//FIN DE LA FUNCIÓN