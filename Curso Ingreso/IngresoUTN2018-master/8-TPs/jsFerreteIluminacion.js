/*4.	Para el departamento de iluminación:
Tomando en cuenta que todas las lámparas están en oferta al mismo precio de $35 pesos final.
A.	Si compra 6 o más  lamparitas bajo consumo tiene un descuento del 50%. 
B.	Si compra 5  lamparitas bajo consumo marca "ArgentinaLuz" se hace un descuento del 40 % y si es de otra marca el descuento es del 30%.
C.	Si compra 4  lamparitas bajo consumo marca "ArgentinaLuz" o “FelipeLamparas” se hace un descuento del 25 % y si es de otra marca el descuento es del 20%.
D.	Si compra 3  lamparitas bajo consumo marca "ArgentinaLuz"  el descuento es del 15%, si es  “FelipeLamparas” se hace un descuento del 10 % y si es de otra marca un 5%.
E.	Si el importe final con descuento suma más de $120  se debe sumar un 10% de ingresos brutos en informar del impuesto con el siguiente mensaje:
 ”Usted pago X de IIBB.”, siendo X el impuesto que se pagó. 

 */
function CalcularPrecio () 
{
     var cantidad=parseFloat(document.getElementById("Cantidad").value);
     var descuento;
     var importefinal;
    var marca=document.getElementById("Marca").value;
     var precio=35;
    var preciocondescuento
var IIBB

 switch(cantidad)
 {
case 1 :
case 2:descuento=0
break;
case 3: 
if (marca=="ArgentinaLuz")

{

    descuento=precio*.15
}
else if ("FelipeLamparas")
   {
        descuento=precio*.10
   }
   else 
   {

    descuento=precio*.05
   }

break;
case 4: 
if (marca=="ArgentinaLuz" || marca=="FelipeLamparas")
{

    descuento=precio*.25
}
else
{

descuento=precio*.20
}
break;
case 5:
if (marca=="ArgentinaLuz")
{

    descuento=precio*.40
}
else{
    descuento=precio*.30
}
default:
descuento=precio*50
break;
 }
preciocondescuento=precio-descuento;
document.getElementById("precioDescuento").value=preciocondescuento;
importefinal=cantidad*preciocondescuento;
if (importefinal>120)
{


IIBB=importefinal * .10;

    
    alert("importe final $ "+ importefinal+ "de los cuales"+ IIBB+ "es impuesto en bruto");
}

else {
    alert ("importefinal $ "+importefinal)
}




}
