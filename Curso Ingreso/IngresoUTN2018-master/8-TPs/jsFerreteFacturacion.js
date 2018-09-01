/*1.	Para el departamento de facturación:
A.	Ingresar tres precios de productos y mostrar la suma de los mismos.
B.	Ingresar tres precios de productos y mostrar el promedio de los mismos.
C.	ingresar tres precios de productos  y mostrar precio final (más IVA 21%).
*/
function Sumar () 
{
    var pre1=parseInt(document.getElementById("PrecioUno").value);
    var pre2=parseInt(document.getElementById("PrecioDos").value);
    var pre3=parseInt(document.getElementById("PrecioTres").value);
    var suma=pre1+pre2+pre3;


alert(suma);

}
function Promedio () 
{
	 var pre1=parseInt(document.getElementById("PrecioUno").value);
    var pre2=parseInt(document.getElementById("PrecioDos").value);
    var pre3=parseInt(document.getElementById("PrecioTres").value);
 var suma=pre1+pre2+pre3;

alert(suma/3);



}
function PrecioFinal () 
{
	var pre1=parseFloat(document.getElementById("PrecioUno").value);
    var pre2=parseFloat(document.getElementById("PrecioDos").value);
    var pre3=parseFloat(document.getElementById("PrecioTres").value);
     var suma=pre1+pre2+pre3;
// PARA CALCULAR EL 21%(IVA) MAS SE HACE ESTE CALCULO:

alert(suma+(suma*.21)).toFixed(2);


}




