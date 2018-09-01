function Mostrar()
{
//tomo la edad  

var edad
edad=parseInt(document.getElementById("edad").value);

if (edad <13)

{

alert("Usted es un niño")


}

else if ( edad >=13 && edad <=17)
{
    alert("Usted es un adolescente")





}
// EL "else"  NO TIENE CONDICIONES ES DECIR NO VA NADA ACOMPAÑADO SOLO LA INFO ENTRE LOS CORCHETES

 else
 {
     alert("Usted es un adulto")
}
}//FIN DE LA FUNCIÓN