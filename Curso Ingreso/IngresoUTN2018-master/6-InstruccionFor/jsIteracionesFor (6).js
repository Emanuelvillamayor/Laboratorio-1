function Mostrar()


{

var num;
var contPar=0;
var i;
num=parseInt(prompt("ingrese un numero "));

for (i=1; i<=num;i++)

{
//para obtener numeros Pares se usa esta formula
if (i%2==0)
{
    
console.log(i);
contPar++;

}
}
console.log("Se encontraron " + contPar + " cantidad de numeros pares"                 );



}


















//FIN DE LA FUNCIÓN