function Mostrar()
{

var num;
var cantDiv=0;
var i;
num=parseInt(prompt("Ingrese un numero"));
for (var i=1;i<num;i++)
{

if (num%i==0 )
{
    console.log(i)
    cantDiv++
}

}

console.log("Sen encontraron "+cantDiv+ " cantidad de numeros divisores");

















}//FIN DE LA FUNCIÓN