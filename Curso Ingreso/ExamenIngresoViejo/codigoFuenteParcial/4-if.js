//Debemos lograr mostrar un mensaje al presionar el botón  'MOSTRAR'.
function Mostrar()
{
    
    var num1=parseInt(prompt("Ingrese el primer numero"));
    var num2=parseInt(prompt("Ingrese el segundo numero"));

    if (num1==num2)
    {

        document.write("El resultado es "+  num1*num2);
    }

 else if (num1>num2)

{
resultado=num1-num2
    document.write("El resultado es "+ resultado);
    
}

else
{
    resultado=num1+num2
document.write("El resultado es "+resultado);
}



}

