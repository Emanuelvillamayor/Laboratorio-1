#include <stdio.h>
#include <stdlib.h>
#include "general.h"
#define TAMPropietario 10
#define TAMautomovil 20
int main()
{

    int opcion;
    ePropietario Propietario[TAMPropietario];
    eAutomovil Automovil[TAMautomovil];
    eEgreso egreso[TAMautomovil];
    char auxOpcionStr[50];
    int init;
    int mostrar;
    int modificar;
    int alta;
    int baja;
    int estacionado;

    init=ePropietario_init(Propietario,TAMPropietario);
    inicializarPropietarioHardCode(Propietario);
    init=eAutomovil_init(Automovil,TAMautomovil);
    inicializarAutomovilHardCode(Automovil);
    init=eEgreso_init(egreso,TAMautomovil);
    inicializarEgresoHardCode(egreso);

    do
    {
        printf("1. Alta propietario \n2. Modificar propietario\n3. Baja de propietario\n4.Ingreso automovil \n5.Egreso automovil \n6.Recaudacion total del estacionamiento.\n7.Recaudacion total por marca. \n8. Autos de un propietario\n");
        printf("9. Datos propietarios (AUDI) \n10.Listado de autos estacionados con sus propietarios \n11.Listar propietarios \n12.Listar estacionados\n13.Salir\n");
        if(!getStringNumeros("Ingrese una opcion : ",auxOpcionStr))
        {
            printf("ERROR:Ingrese un valor numerico\n");
        }
        else{

        opcion=atoi(auxOpcionStr);



        switch(opcion)
        {
            case 1:
                alta=ePropietario_alta(Propietario,TAMPropietario);

                  if(alta==-1)
          {
              printf("No quedan mas lugares\n");
          }
          else if(alta==-3)
            {
                printf("\n");
            printf("Propietario INGRESADO\n");
            printf("\n");
          }
          else{

          }

           break;
            case 2:
            printf("Id \t  Nombre \t Apellido \t  Direccion \t  N°Tarjeta \t Estado ");
              mostrar=ePropietario_mostrarListado(Propietario,TAMPropietario);
              modificar=ePropietario_modificacion(Propietario,TAMPropietario);
              if(modificar>=0)
              {
                  printf("Modificacion realizada");
              }
              else if (modificar==-2)
              {

              }

                break;
            case 3:
                  printf("Id \t  Nombre \t Apellido \t  Direccion \t  N°Tarjeta \t Estado ");
                 mostrar=ePropietario_mostrarListado(Propietario,TAMPropietario);
                 baja=ePropietario_baja(Propietario,TAMPropietario);
                 if(baja>=0)
                 {
                     printf("Baja exitosa \n");
                 }
                 else{

                 }


                break;
            case 4:
                 printf("Id \t  Nombre \t Apellido \t  Direccion \t    Tarjeta \t Estado ");
                 mostrar=ePropietario_mostrarListado(Propietario,TAMPropietario);
                estacionado=ePropietario_publicarAutomovil(Propietario,TAMPropietario,Automovil,TAMautomovil);
            if (estacionado==-2)
         {
         break;
         }
         else if (estacionado==0)
         {

             printf("Automovil ingresado\n");

         }
         else{
            printf("\nNO QUEDAN MAS LUGARES\n");
         }


                break;
            case 5:
                printf("IDAuto \t Patente Marca\t MarcaChar\t Estado\t  IdProp");
                mostrar=eAutomovil_mostrarListado(Automovil,TAMautomovil);
                baja=eEgreso_darBaja(egreso,TAMautomovil,Automovil,TAMautomovil,Propietario,TAMPropietario);
                break;
            case 6:

                 mostrarRecaudacionTotal(egreso,TAMautomovil);
                break;
            case 7:
               mostrarRecaudacionMarca(egreso,TAMautomovil);
                break;
            case 8 :
                printf("Id \t  Nombre \t Apellido \t  Direccion \t  N Tarjeta \t Estado ");
              mostrar=ePropietario_mostrarListado(Propietario,TAMPropietario);
              baja=ePropietario_mostrarEstacionados(Propietario,TAMPropietario,Automovil,TAMautomovil);
                break;
            case 9:
                 printf("Usuarios que solo estacionaron autos de marca AUDI : \n");
                  printf("Id \t  Nombre \t Apellido \t  Direccion \t    Tarjeta \t  Estado ");
                  ePropietario_autoAudi(Propietario,TAMPropietario,Automovil,TAMautomovil);

                break;
            case 10:
                //printf("IDAuto \t Patente Marca\t MarcaChar\t Estado\t  IdProp");
                // ePropietario_mostrarOrdenado(Propietario,TAMPropietario,Automovil,TAMautomovil);
                ePropietario_MostrarAutoyDueno(Propietario,TAMPropietario,Automovil,TAMautomovil);

                break;
            case 11:
                  printf("Id \t  Nombre \t Apellido \t  Direccion \t    Tarjeta \t  Estado ");
             mostrar=ePropietario_mostrarListado(Propietario,TAMPropietario);
             break;
            case 12:
                     printf("IDAuto \t Patente Marca\t MarcaChar\t Estado\t  IdProp");
                mostrar=eAutomovil_mostrarListado(Automovil,TAMautomovil);
                break;
        default:
        printf("ERROR:Ingrese una de las opciones indicadas \n");
        break;

        }
        }


   system("pause");
        system("cls");
    }
    while(opcion!=13);

    return 0;
}






