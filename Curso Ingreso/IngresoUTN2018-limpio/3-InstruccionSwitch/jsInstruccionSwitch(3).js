function Mostrar()
{
    var mes=document.getElementById("mes").value;

    switch(mes)
    {
        case"Febrero" :alert("este mes no tiene mas de 29 dias");
        break;
        default:
        alert("este mes tiene 30 o mas dias")
    }
}//FIN DE LA FUNCIÓN