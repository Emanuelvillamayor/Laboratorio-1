function Mostrar()
{
var num;
var i;
var esPrimo=true


num=parseInt(prompt("ingrese un numero"));

for(i=2;i< num;i++)
{
if(num%i==0)
{
esPrimo=false
break;
}

}
if (esPrimo)
{
alert(num + " es primo")

}
else{
    alert(num + " no es un numero primo")
}


}//FIN DE LA FUNCIÓN