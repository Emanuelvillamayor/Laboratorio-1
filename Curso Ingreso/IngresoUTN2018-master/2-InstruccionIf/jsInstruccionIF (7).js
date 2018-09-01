function Mostrar()
{
//tomo la edad  

	var edad ;
    var estadocivil

    edad=parseInt(document.getElementById("edad").value);
    estadocivil=document.getElementById("estadoCivil").value;
//AQUI MODIFICO EL ESTADO CIVIL QUE SE ENCUENTRA EN EL "HTML" DE "estadoCivil" en el option value "Soltero"
    if (edad < 18 && estadocivil != "Soltero" )

// El ejercicio dice "Al ingresar una edad menor a 18 años ( edad <18)" y un estado civil (estado civil)distinto (!=)
//a "soltero" (=Soltero)"
{



alert("Es muy pequeño para No ser soltero");


      }
    
    


}//FIN DE LA FUNCIÓN