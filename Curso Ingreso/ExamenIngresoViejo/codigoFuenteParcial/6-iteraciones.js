//Debemos lograr mostrar un mensaje al presionar el botón  'MOSTRAR'.
function Mostrar()
{
	
var venta
var ventaMayor;
var ventaMenor;
var flag=0
for(var i=1; i<=7;i++)

{
venta=parseInt(prompt("Ingrese una venta"));
while(venta==0)
{

    venta=parseInt(prompt("Ingrese una venta distinta de 0"))
}
if (venta>ventaMayor||flag==0)

{
ventaMayor=venta

}

if (venta<ventaMenor||flag==0)
{
    ventaMenor=venta
    flag=1


}





}
document.write("El importe mayor fue de "+ ventaMayor + " y el importe menor fue de "+ ventaMenor)





}
/*while(contador>=7)
{
importe=parseInt(prompt("Ingrese el importe de los 7 dias de la semana"));
contador++
if(contador==1)
{
    importemayor=importe
    importemenor=importe

}
if (importe>importemayor)
{
    importemayor=importe
}
if(importe<importemenor)
{
    importemenor=importe
}


}

document.write("El importe mayor fue de "+ importemayor + " y el importe menor fue de "+ importemenor)*/

