#include<stdio.h>
#include"egresos.h"


void menu(ePropietario listadoPropietario[],eAutomovil listadoAutomovil[],eEgreso listadoEgresos[],int tamanioPropietario,int tamanioAutomovil,int tamanioEgresos)
{
    inicializarEstadosPropietario(listadoPropietario,tamanioPropietario);
    cargarHarcodePropietario(listadoPropietario,tamanioPropietario);
    inicializarEstadosAutomovil(listadoAutomovil,tamanioAutomovil);
    cargarHarcodeAutomovil(listadoAutomovil,tamanioAutomovil);
    inicializarEgresos(listadoEgresos,tamanioEgresos);
    egresosHarcode(listadoEgresos);
    char seguir='s';
    int valor=0;
    int opcion;
    int indice;
    do
    {
        printf("1- Alta propietario");
        printf("\n2- Mostrar usuario");
        printf("\n3- Modificar usuario");
        printf("\n4- Borrar usuario");
        printf("\n5- Alta automovil");
        printf("\n6- Mostrar Automoviles");
        printf("\n7- Egreso automovil");
        printf("\n8- Mostrar recaudacion total");
        printf("\n9- Mostrar recaudacion por marca");
        printf("\n10- Mostrar propietario con sus coches");
        printf("\n11- Mostrar propietarios que posean un coche marca Audi");
        printf("\n12- Autos ordenados por patente");
        printf("\n13- Salir\n");
        opcion=getInt("\nEliga una opcion ",opcion);
        fflush(stdin);
        switch(opcion)
        {
        case 1:
            indice=buscarLibrePropietario(listadoPropietario,tamanioPropietario);
            altaPropietario(listadoPropietario,tamanioPropietario,indice);
            break;
        case 2:
            mostrarListaPropietario(listadoPropietario,tamanioPropietario);
            break;
        case 3:
            modificarPropietario(listadoPropietario,tamanioPropietario);
            break;
        case 4:
            darDeBajaPropietario(listadoPropietario,listadoAutomovil,listadoEgresos,tamanioAutomovil,tamanioPropietario,tamanioEgresos,"Esta seguro que quiere dar de baja al propietario? (S/N) ");
            break;
        case 5:
            indice=buscarLibreAutomovil(listadoAutomovil,tamanioAutomovil);
            altaAutomovil(listadoAutomovil,listadoPropietario,tamanioAutomovil,tamanioPropietario,indice);
            break;
        case 6:
            mostrarListaAutomovil(listadoAutomovil,tamanioAutomovil);
            break;
        case 7:
            darDeBajaAutomovil(listadoAutomovil,listadoPropietario,listadoEgresos,tamanioAutomovil,tamanioPropietario,"Estas seguro que queres realizar el egreso de este automovil? (S/N) ",tamanioEgresos);
            break;
        case 8:
            mostrarRecaudaciones(listadoEgresos,tamanioEgresos);
            break;
        case 9:
            mostrarRecaudacionesPorMarca(listadoEgresos,tamanioEgresos);
            break;
        case 10:
            mostrarUsuarioConSusAutomoviles(listadoPropietario,listadoAutomovil,tamanioPropietario,tamanioAutomovil);
            break;
        case 11:
            mostrarPropietarioAudi(listadoPropietario,listadoAutomovil,tamanioPropietario,tamanioAutomovil);
            break;
        case 12:
            mostrarOrdenadosPorPatente(listadoPropietario,listadoAutomovil,tamanioPropietario,tamanioAutomovil);
            break;
        case 13:
            seguir='n';
            break;
        }
        printf("\n");
        system("pause");
        system("cls");
    }
    while(seguir=='s');
}

void inicializarEgresos(eEgreso listadoEgreso[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        listadoEgreso[i].estado=0;
    }
}

int idEgresoAutoIncremental(eEgreso listadoEgresos[],int tamanio)
{
    int contador=0;
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(listadoEgresos[i].estado==1)
        {
            contador=contador+1;
        }
    }
    return contador+1;
}

void darDeBajaAutomovil(eAutomovil listadoAutomovil[],ePropietario listadoPropietario[],eEgreso listadoEgresos[],int tamanio,int tamanioPropietario,char mensaje[],int tamanioEgreso)
{
    int Id=0;
    int indice;
    int indicePropietario;
    fflush(stdin);
    mostrarListaAutomovil(listadoAutomovil,tamanio);
    Id=getInt("\nIngresa el Id de ingreso a dar de baja ",Id);
    indice=buscarPorIdAutomovil(listadoAutomovil,tamanio,Id);
    indicePropietario=buscarPorIdPropietarioAutomovil(listadoAutomovil,listadoPropietario,indice,tamanioPropietario);
    borrarEntidadAutomovil(listadoAutomovil,listadoPropietario,listadoEgresos,indice,indicePropietario,mensaje,tamanioEgreso);
}

void borrarEntidadAutomovil(eAutomovil listadoAutomovil[],ePropietario listadoPropietario[],eEgreso listadoEgresos[],int indice,int indicePropietario,char mensaje[],int tamanioEgreso)
{
    char pregunta;
    int horas;
    int valor;
    int indiceEgreso;
    if(indice!=-1)
    {
        horas=devolverHorasEstadia();
        valor=tasarEstadia(listadoAutomovil[indice].marca,horas);
        cambiarMarcas(listadoAutomovil,listadoAutomovil[indice].marca,listadoAutomovil[indice].marcaNombre);
        printf("\nNombre del propietario: %s\nPatente del Auto: %s\nMarca del auto: %s\nValor de la estadia: $%d\n",listadoPropietario[indicePropietario].nombre,listadoAutomovil[indice].patente,listadoAutomovil[indice].marcaNombre,valor);
        pregunta=deseaContinuar(mensaje);
        if(pregunta=='s')
        {
            listadoAutomovil[indice].estado=0;
            indiceEgreso=buscarLibreEgresos(listadoEgresos,tamanioEgreso);
            listadoEgresos[indiceEgreso].estado=1;
            listadoEgresos[indiceEgreso].idEgreso=idEgresoAutoIncremental(listadoEgresos,tamanioEgreso);
            listadoEgresos[indiceEgreso].idIngreso=listadoAutomovil[indice].idIngreso;
            listadoEgresos[indiceEgreso].marca=listadoAutomovil[indice].marca;
            listadoEgresos[indiceEgreso].recaudacion=valor;
        }
    }
    else
    {
        printf("\nId no encontrado");
    }
}

int buscarLibreEgresos(eEgreso listadoEgresos[],int tamanio)
{
    int indice;
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(listadoEgresos[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void mostrarRecaudaciones(eEgreso listadoEgresos[],int tamanio)
{
    float egresos=0;
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(listadoEgresos[i].estado==1)
        {
            egresos+=listadoEgresos[i].recaudacion;
        }
    }
    printf("La recaudacion total del estacionamiento es de: $%.2f",egresos);
}

void mostrarRecaudacionesPorMarca(eEgreso listadoEgresos[],int tamanio)
{
    float alpha=0;
    float ferrari=0;
    float audi=0;
    float otro=0;
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(listadoEgresos[i].estado==1)
        {
            if(listadoEgresos[i].marca==1)
            {
                alpha+=listadoEgresos[i].recaudacion;
            }
            else if(listadoEgresos[i].marca==2)
            {
                ferrari+=listadoEgresos[i].recaudacion;
            }
            else if(listadoEgresos[i].marca==3)
            {
                audi+=listadoEgresos[i].recaudacion;
            }
            else
            {
                otro+=listadoEgresos[i].recaudacion;
            }

        }
    }
    printf("\nRecaudacion de los coches pertenecientes a la marca Alfa Romeo: $%.2f",alpha);
    printf("\nRecaudacion de los coches pertenecientes a la marca Ferrari: $%.2f",ferrari);
    printf("\nRecaudacion de los coches pertenecientes a la marca Audi: $%.2f",audi);
    printf("\nRecaudacion de los coches pertenecientes a otras marcas: $%.2f",otro);
}

void egresosHarcode(eEgreso listadoEgreso[])
{
    int marca[]= {1,1,2,3,2,2,3,4,1,1};
    float importe[]= {100,200,100,300,100,100,200,200,100,100};
    int i;
    for(i=0;i<10;i++)
    {
        listadoEgreso[i].marca=marca[i];
        listadoEgreso[i].recaudacion=importe[i];
        listadoEgreso[i].estado=1;
    }
}

void darDeBajaPropietario(ePropietario listadoPropietario[],eAutomovil listadoAutomovil[],eEgreso listadoEgresos[],int tamanioAutomovil,int tamanioPropietario,int tamanioEgreso,char mensaje[])
{
    int Id;
    int indice;
    fflush(stdin);
    mostrarListaPropietario(listadoPropietario,tamanioPropietario);
    Id=getInt("\nIngresa el Id a dar de baja ",Id);
    indice=buscarPorIdPropietario(listadoPropietario,tamanioPropietario,Id);
    borrarEntidadPropietario(listadoPropietario,listadoAutomovil,listadoEgresos,tamanioAutomovil,indice,tamanioEgreso,mensaje);
}

void borrarEntidadPropietario(ePropietario listadoPropietario[],eAutomovil listadoAutomovil[],eEgreso listadoEgresos[],int tamanioAutomovil,int indice,int tamanioEgreso,char mensaje[])
{
    char pregunta;
    if(indice!=-1)
    {
        int i;
        for(i=0;i<tamanioAutomovil;i++)
        {
            if(listadoPropietario[indice].Id==listadoAutomovil[i].idPropietario&&listadoAutomovil[i].estado==1)
            {
                borrarEntidadAutomovil(listadoAutomovil,listadoPropietario,listadoEgresos,i,indice,"El propietario a dar de baja tiene este coche estacionado. Para dar de baja al propietario, es necesario realizar el egreso del coche. Desea continuar? (S/N) ",tamanioEgreso);
            }
        }
        pregunta=deseaContinuar(mensaje);
        if(pregunta=='s')
        {
            listadoPropietario[indice].estado=2;
        }

    }
    else
    {
        printf("\nId no encontrado");
    }
}
