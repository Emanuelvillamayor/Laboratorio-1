function Mostrar()
{

var num;
var esprimo=true;
num=parseInt(prompt("Ingrese un numero"));

for (i=2;i<num;i++)
if (num%i==0)
{
    esprimo=false;
    break;
}
if (esprimo)

{
    alert (num+"  es primo");
}

else
{    
    alert(num + " no es primo");
}







}//FIN DE LA FUNCIÓN