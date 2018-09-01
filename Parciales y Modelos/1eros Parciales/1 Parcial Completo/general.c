#include "general.h"
#include <ctype.h>
#include <stdlib.h>
#define OCUPADO 0
#define LIBRE 1
int ePropietario_publicarAutomovil(ePropietario Propietario[] ,int limitePropietario,eAutomovil Automovil[],int limiteAutomovil)
{
    char auxId[20];
    int id;
    int indice;
    int alta;
    int retorno;
      retorno=eAutomovil_buscarLugarLibre(Automovil,limiteAutomovil);
      if(retorno!=-2)
      {


    if(!getStringNumeros("\nIngrese el id de Propietario: ",auxId))
    {
        printf("Error ,ingrese un valor numerico\n");
        return -2;
    }
    id=atoi(auxId);
    indice=ePropietario_buscarPorId(Propietario,limitePropietario,id);

    if(indice>=0)

      {


      alta=eAutomovil_alta(Automovil,limiteAutomovil,id);

          if (alta==-2){
             indice=-2;
          }
          else if(alta==-1)
          {
          indice =-1;
          }
          else{
            indice=0;
          }
      }
      else{
        printf("Propietario no encontrado\n");
        indice=-2;
      }
      }
      else
      {
          indice=-3;
      }
return indice;
}

int eEgreso_darBaja(eEgreso egreso [],int limiteEgreso,eAutomovil automovil [],int limiteAuto,ePropietario propietario[],int limitePropietario)
{

    char auxId[20];
    char auxRespuesta[20];
    int respuesta;
    int id;
    int idEgreso;
    int indice;
   int horas;
    int retorno;
    int precio;
    int marca;

      retorno=eEgreso_buscarLugarLibre(egreso,limiteEgreso);
      if(retorno!=-2)
      {

        if(!getStringNumeros("\nIngrese el id de automvil a dar de baja: ",auxId))
        {
          printf("Error ,ingrese un valor numerico\n");
          return -2;
        }
        id=atoi(auxId);
        indice=eAutomovil_buscarPorId(automovil,limiteAuto,id);
          if(indice>=0)

           {
             if(!getStringNumeros("\nSeguro desea dar de baja ? 1-Si 2-No: \n",auxRespuesta))
              {
                printf("Error ,ingrese un valor numerico\n");
                return -2;
              }
           respuesta=atoi(auxRespuesta);
            if(respuesta==1)
               {
                idEgreso=eEgreso_siguienteId(egreso,limiteEgreso);
                marca=automovil[indice].marca;
                horas=devolverHorasEstadia();
                precio=precioHoras(horas,marca);
                egreso[indice].estado=OCUPADO;
                egreso[indice].importe=precio;
                egreso[indice].marca=marca;
                egreso[indice].idEgreso=idEgreso;
                automovil[indice].estado=LIBRE;

                printf("Nombre del propietario : %s\n",propietario[indice].Nombre);
                printf("Patente : %s\n",automovil[indice].Patente);
                printf("Marca : %s\n",automovil[indice].marcaLetra);
                printf("Valor estadia :$ %d\n",precio);
               }
         else{
           printf("baja cancelada\n");
           retorno=-1;
             }
         }
         else
         {
             printf("Ingrese un id existente\n");
             retorno=-1;
         }
     }
    return retorno;
}



int ePropietario_mostrarEstacionados(ePropietario propietario [],int limitePro,eAutomovil automovil[],int limiteauto)
{

   int indice;
   char auxIdusuario[20];
   int id;
   int retorno;
   int i;
   if(!getStringNumeros("Ingrese el id de usuario : ",auxIdusuario))
      {
          printf("ERROR: ingrese solo numeros\n");
          return -2;
      }
      id=atoi(auxIdusuario);
      indice=ePropietario_buscarPorId(propietario,limitePro,id);
      if(indice>=0)
      {
          printf("Nombre de usuario : %s\n",propietario[indice].Nombre);
          printf("Patente\t Marca \n");
          for(i=0;i<limiteauto;i++)
          {
              if(automovil[i].estado == OCUPADO &&automovil[i].idPropietario==id)
              {
                  printf("%s  -  %s\n",automovil[i].Patente,automovil[i].marcaLetra);
              }
          }
      }
      else
      {
          printf("Error , ingrese un Id existente\n");
          retorno=-1;
      }


return retorno;
}


void ePropietario_autoAudi(ePropietario propietario[],int limitepro,eAutomovil automovil[],int limiteauto)
{
    int i;
    int j;
    for(i=0;i<limitepro;i++)
    {

    if (propietario[i].estado==OCUPADO)
    {
        for(j=0;j<limiteauto;j++)
        {
            if(automovil[j].estado==OCUPADO)
            {
                 if ((propietario[i].idPropietario==automovil[j].idPropietario)&&automovil[j].marca==5)
               {

                    printf("\n%d \t - %s \t - %s \t - %s \t - %s \t -%d\n",propietario[i].idPropietario,propietario[i].Nombre,propietario[i].apellido,propietario[i].direccion,propietario[i].tarjeta,propietario[i].estado);
               }
            }
        }

    }
}

}



void ePropietario_mostrarOrdenado(ePropietario propietario[],int limitepro,eAutomovil automovil[],int limiteauto)
{
      int i;
    int j;
    for(i=0;i<limiteauto;i++)
    {

    if (automovil[i].estado==OCUPADO)
    {
        for(j=0;j<limiteauto;j++)
        {
            if(propietario[j].estado==OCUPADO)
            {
                 if (automovil[i].idPropietario==propietario[j].idPropietario)
               {
                   printf("\n %d\t-%s\t- %d\t-%s  \t-  %d   -   %d\n",automovil[i].idAutomovil,automovil[i].Patente,automovil[i].marca,automovil[i].marcaLetra,automovil[i].estado,automovil[i].idPropietario);
               }
            }
        }

    }
}
}


void ePropietario_MostrarAutoyDueno(ePropietario propietario[],int tamPro,eAutomovil coche [],int tamCoche)
{
    int i=0;

    printf("Propietario      Auto\n");

    for(i=0;i<tamCoche;i++)
    {
        if(propietario[i].idPropietario==coche[i].idPropietario)
        {
            printf("%s       %d \n",propietario[i].Nombre,coche[i].idAutomovil);
        }

    }

}
