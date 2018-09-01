//Debemos lograr mostrar un mensaje al presionar el botón  'MOSTRAR'.
function Mostrar()
{
    var importe=(parseFloat(prompt("Ingrese un importe")));
    var importefinal=importe+(importe*.21);

    document.getElementById("importe").value=importefinal.toFixed(2);




}

