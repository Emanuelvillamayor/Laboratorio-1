function Mostrar()
{


var num;
var contDiv=0;
var i;

num=parseInt(prompt("Ingrese un numero"));

for (  i=1      ;  i<=num        ; i++  )
{ 
// para obtener el DIVISOR debemos usar esta formula
if(num %i==0)

{

contDiv++;
console.log(i);

}




}

console.log("La cantidad de numeros divisores encontrados es " + contDiv  );







}//FIN DE LA FUNCIÓN