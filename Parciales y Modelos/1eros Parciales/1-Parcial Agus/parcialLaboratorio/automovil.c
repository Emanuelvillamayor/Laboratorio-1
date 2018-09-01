#include"automovil.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ALPHA_ROMEO "ALFA ROMERO"
#define FERRARI "FERRARI"
#define AUDI "AUDI\t"
#define OTRO "OTRO\t"

int idAutoIncrementalAutomovil(eAutomovil listadoAutomovil[],int tamanioAutomovil)
{
    int contador=0;
    int i;
    for(i=0;i<tamanioAutomovil;i++)
    {
        if(listadoAutomovil[i].estado==1)
        {
            contador=contador+1;
        }
    }
    return contador+1;
}


void altaAutomovil(eAutomovil listadoAutomovil[],ePropietario listadoPropietario[],int tamanioAutomovil,int tamanioPropietario,int indice)
{
    int ID;
    if(indice!=-1)
    {
        mostrarListaPropietario(listadoPropietario,tamanioPropietario);
        listadoAutomovil[indice].idPropietario=getInt("\nIngresa el ID del propietario al que se le va a asignar el coche ",listadoAutomovil[indice].idPropietario);
        ID=buscarPorIdPropietario(listadoPropietario,tamanioPropietario,listadoAutomovil[indice].idPropietario);
        if(ID!=-1)
        {
            getString("Ingresa la patente de tu coche (ABC-123) ",listadoAutomovil[indice].patente);
            mostrarMarcasAutomovil(listadoAutomovil);
            listadoAutomovil[indice].marca=getInt("Ingresa la marca de tu automovil ",listadoAutomovil[indice].marca);
            verificarMarca(listadoAutomovil[indice].marca);
            cambiarMarcas(listadoAutomovil,listadoAutomovil[indice].marca,listadoAutomovil[indice].marcaNombre);
            listadoAutomovil[indice].idIngreso=idAutoIncrementalAutomovil(listadoAutomovil,tamanioAutomovil);
            listadoAutomovil[indice].estado=1;
        }
        else
        {
            printf("\nID de propietario no encontrado");
        }

    }
    else
    {
        printf("\nNo hay lugares libres");
    }
}

int buscarLibreAutomovil(eAutomovil listadoAutomovil[],int tamanioAutomovil)
{
    int indice;
    int i;
    for(i=0; i<tamanioAutomovil; i++)
    {
        if(listadoAutomovil[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void mostrarUnoAutomovil(eAutomovil listadoAutomovil[],int tamanio,int i)
{
    printf("%d\t\t%d\t\t  %s\t     %s\n",listadoAutomovil[i].idIngreso,listadoAutomovil[i].idPropietario,listadoAutomovil[i].patente,listadoAutomovil[i].marcaNombre);
}

void mostrarListaAutomovil(eAutomovil listadoAutomovil[],int tamanio)
{
    int i;
    printf("Id ingreso\tId propietario\t Patente    Marca \n");
    for(i=0; i<tamanio; i++)
    {
        if(listadoAutomovil[i].estado==1)
        {
            cambiarMarcas(listadoAutomovil,listadoAutomovil[i].marca,listadoAutomovil[i].marcaNombre);
            mostrarUnoAutomovil(listadoAutomovil,tamanio,i);
        }

    }
}

void mostrarMarcasAutomovil()
{
    printf("\n1- ALFA ROMEO");
    printf("\n2- FERRARI");
    printf("\n3- AUDI");
    printf("\n4- OTRO");
}

void inicializarEstadosAutomovil(eAutomovil listadoAutomovil[],int tamanioAutomovil)
{
    int i;
    for(i=0; i<tamanioAutomovil; i++)
    {
        listadoAutomovil[i].estado=0;
    }
}

void cargarHarcodeAutomovil(eAutomovil listadoAutomovil[],int tamanioAutomovil)
{
    int id[]= {1,2,3,4,5,6,7,8,9,10};
    char patente[][20]= {"AAA","CCC","DDD","BBB","ZZZ","III","HHH","EEE","FFF","GGG"};
    int marca[]= {1,3,3,2,2,3,3,4,3,1};
    int propietario[]= {2,1,2,1,3,3,4,1,4,3};
    int i;
    for(i=0; i<10; i++)
    {
        strcpy(listadoAutomovil[i].patente,patente[i]);
        listadoAutomovil[i].idIngreso=id[i];
        listadoAutomovil[i].marca=marca[i];
        listadoAutomovil[i].idPropietario=propietario[i];
        listadoAutomovil[i].estado=1;
    }
}

int verificarMarca(int marcaAVerificar)
{
    while(marcaAVerificar!=1&&marcaAVerificar!=2&&marcaAVerificar!=3&&marcaAVerificar!=4)
    {
        marcaAVerificar=getInt("Marca no existente. Ingrese una valida ",marcaAVerificar);
    }
    return marcaAVerificar;
}

int devolverHorasEstadia()
{
    int horas;

    srand(time(NULL));

    horas = (rand()%24)+1;

    return horas ;

}

int buscarPorIdAutomovil(eAutomovil listadoAutomovil[],int tamanioAutomovil,int id)
{
    int indice=-1;
    int i;
    for(i=0; i<tamanioAutomovil; i++)
    {
        if(listadoAutomovil[i].estado==1)
        {
            if(listadoAutomovil[i].idIngreso==id)
            {
                indice=i;
                break;
            }
        }
    }
    return indice;
}

int tasarEstadia(int marca,int horas)
{
    int valorTotal;
    if(marca==1)
    {
        valorTotal=horas*150;
    }
    else if(marca==2)
    {
        valorTotal=horas*175;
    }
    else if(marca==3)
    {
        valorTotal=horas*200;
    }
    else
    {
        valorTotal=horas*250;
    }
    return valorTotal;
}

char cambiarMarcas(eAutomovil listadoAutomovil[],int marca,char marcaString[])
{
    if(marca==1)
    {
        strcpy(marcaString,ALPHA_ROMEO);
    }
    else if(marca==2)
    {
        strcpy(marcaString,FERRARI);
    }
    else if(marca==3)
    {
        strcpy(marcaString,AUDI);
    }
    else
    {
       strcpy(marcaString,OTRO);
    }
    return marcaString;
}


int buscarPorIdPropietarioAutomovil(eAutomovil listadoAutomovil[],ePropietario listadoPropietario[],int indiceAutomovil,int tamanioPropietario)
{
    int indicePropietario;
    int i;
    for(i=0;i<tamanioPropietario;i++)
    {
        if(listadoPropietario[i].estado==1)
        {
            if(listadoAutomovil[indiceAutomovil].idPropietario==listadoPropietario[i].Id)
            {
                indicePropietario=i;
                break;
            }
        }
    }
    return indicePropietario;
}

void mostrarUsuarioConSusAutomoviles(ePropietario listadoPropietario[],eAutomovil listadoAutomovil[],int tamanioPropietario,int tamanioAutomovil)
{
    int IdPropietario;
    int indice;
    int i;
    mostrarListaPropietario(listadoPropietario,tamanioPropietario);
    IdPropietario=getInt("Ingresa el propietario del que quieras ver sus coches: ",IdPropietario);
    indice=buscarPorIdPropietario(listadoPropietario,tamanioPropietario,IdPropietario);
    if(indice!=-1)
    {
        printf("\nPropietario: %s\n",listadoPropietario[indice].nombre);
        for(i=0;i<tamanioAutomovil;i++)
        {
            if(listadoPropietario[indice].Id==listadoAutomovil[i].idPropietario)
            {
                cambiarMarcas(listadoAutomovil,listadoAutomovil[i].marca,listadoAutomovil[i].marcaNombre);
                printf("\nMarca: %s",listadoAutomovil[i].marcaNombre);
                printf("\nPatente: %s\n",listadoAutomovil[i].patente);
            }
        }
    }
    else
    {
        printf("\nPropietario no encontrado\n");
    }
}

void mostrarPropietarioAudi(ePropietario listadoPropietario[],eAutomovil listadoAutomovil[],int tamanioPropietario,int tamanioAutomovil)
{
    int i;
    int j;
    printf("ID\tNombre\tTarjeta de credito\tDireccion\n");
    for(i=0;i<tamanioAutomovil;i++)
    {
        if(listadoAutomovil[i].estado==1&&listadoAutomovil[i].marca==3)
        {
            for(j=0;j<tamanioPropietario;j++)
            {
                if(listadoAutomovil[i].idPropietario==listadoPropietario[j].Id&&listadoPropietario[j].estado==1)
                {
                    printf("%d\t%s\t  %s\t\t%s\n",listadoPropietario[j].Id,listadoPropietario[j].nombre,listadoPropietario[j].tarjeta,listadoPropietario[j].direccion);

                }
            }
        }
    }
}


void mostrarOrdenadosPorPatente(ePropietario listadoPropietario[],eAutomovil listadoAutomovil[],int tamanioPropietario,int tamanioAutomovil)
{
    eAutomovil auxiliarAutomovil;
    int i;
    int j;
    for(i=0;i<tamanioAutomovil-1;i++)
    {
        for(j=i+1;j<tamanioAutomovil;j++)
        {
            if(strcmp(listadoAutomovil[i].patente,listadoAutomovil[j].patente)>0)
            {
                auxiliarAutomovil=listadoAutomovil[i];
                listadoAutomovil[i]=listadoAutomovil[j];
                listadoAutomovil[j]=auxiliarAutomovil;
            }
        }
    }
    printf("Id ingreso\tPatente\t  Marca\t\t   Propietario  Id Propietario \n");
    for(i=0;i<tamanioAutomovil;i++)
    {
        if(listadoAutomovil[i].estado==1)
        {
            for(j=0;j<tamanioPropietario;j++)
            {
                if(listadoAutomovil[i].idPropietario==listadoPropietario[j].Id&&listadoPropietario[j].estado==1)
                {
                    cambiarMarcas(listadoAutomovil,listadoAutomovil[i].marca,listadoAutomovil[i].marcaNombre);
                    printf("\n%d\t\t%s\t  %s\t   %s\t\t%d",listadoAutomovil[i].idIngreso,listadoAutomovil[i].patente,listadoAutomovil[i].marcaNombre,listadoPropietario[j].nombre,listadoPropietario[j].Id);
                }
            }
        }
    }
}


char validarPatente(char patente[])
{
    int i=0;
    int largo;
    largo=strlen(patente);
    while(largo!=7)
    {
        printf("\nEl formato de patente debe ser ABC-123 (Incluyendo guion). Ingrese una patente valida ",patente);
        scanf("%s",&patente);
        fflush(stdin);
        largo=strlen(patente);
    }
    for(i=0;i<7;i++)
    {
        if(i<3)
        {
            if(isalpha(patente[i])==0)
            {
                printf("\nEl formato de patente debe ser ABC-123 (Incluyendo guion). Ingrese una patente valida ",patente);
                scanf("%s",&patente);
                fflush(stdin);
                i=0;
            }
        }
        else if(i==3)
        {
            if(patente[i]!='-')
            {
                printf("\nEl formato de patente debe ser ABC-123 (Incluyendo guion). Ingrese una patente valida ",patente);
                scanf("%s",&patente);
                fflush(stdin);
                i=0;
            }
        }
        else if(patente<7)
        {
            if(isdigit(patente[i])==0)
            {
                printf("\nEl formato de patente debe ser ABC-123 (Incluyendo guion). Ingrese una patente valida ",patente);
                scanf("%s",&patente);
                fflush(stdin);
                i=0;
            }
        }
    }
    return patente;
}
