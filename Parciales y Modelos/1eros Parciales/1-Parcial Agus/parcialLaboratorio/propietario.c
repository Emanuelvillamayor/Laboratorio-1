#include<stdio.h>
#include<string.h>
#include"propietario.h"


void inicializarEstadosPropietario(ePropietario listadoPropietario[],int tamanioPropietario)
{
    int i;
    for(i=0; i<tamanioPropietario; i++)
    {
        listadoPropietario[i].estado=0;
    }
}

void cargarHarcodePropietario(ePropietario listadoPropietario[],int tamanioPropietario)
{
    int id[]= {1,2,3,4};
    char nombre[][20]= {"Juan","Luis","Maria","Jose"};
    char tarjeta[][20]= {"111-111","222-222","333-333","444-444"};
    char direccion[][20]= {"mitre","urquiza","belgrano","alsina"};
    int i;
    for(i=0; i<4; i++)
    {
        strcpy(listadoPropietario[i].nombre,nombre[i]);
        listadoPropietario[i].Id=id[i];
        strcpy(listadoPropietario[i].tarjeta,tarjeta[i]);
        strcpy(listadoPropietario[i].direccion,direccion[i]);
        listadoPropietario[i].estado=1;
    }
}

char getString(char mensaje[], char caracter[])
{

    printf("%s",mensaje);
    gets(caracter);
    fflush(stdin);
    return caracter;
}

int getInt(char mensaje[],int A)
{

    char auxstring[100];
    printf("%s",mensaje);
    gets(auxstring);
    fflush(stdin);
    A=validarStringEntero(auxstring);
    return A;
}

float getFloat(char mensaje[],float numeroIngresado)
{
    char auxstring[100];
    printf("%s",mensaje);
    scanf("%f",&numeroIngresado);
    fflush(stdin);
    return numeroIngresado;
}

char getChar(char mensaje[],char caracter)
{
    fflush(stdin);
    printf("%s",mensaje);
    scanf("%c",&caracter);
    return caracter;
}

void stringToUpper(char caracter[])
{
    int i;
    int largo;
    caracter[0]=toupper(caracter[0]);
    largo=strlen(caracter);
    for(i=0;i<largo;i++)
    {
        if(caracter[i]==' ')
        {
            i=i+1;
            caracter[i]=toupper(caracter[i]);
        }
    }
    return caracter;
}

int validarStringEntero(char datoAValidar[])
{
    int A;
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0;i<validar;)
    {
        if(isdigit(datoAValidar[i])==0||datoAValidar[i]==' ')
        {
            do
            {
                printf("\nIngresa un numero valido ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isdigit(datoAValidar[i])==0||datoAValidar[i]==' ');
        }
        else
        {
            i=i+1;
        }
    }
    A=atoi(datoAValidar);
    return A;
}

char validarStringCadena(char datoAValidar[])
{
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0;i<validar;)
    {
        if(isalpha(datoAValidar[i])==0&&datoAValidar[i]!=' ')
        {
            do
            {
                printf("\nIngresa una palabra valida ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isalpha(datoAValidar[i])==0);
        }
        else if(datoAValidar[0]== ' ')
        {
            do
            {
                printf("\nIngresa una palabra valida ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(datoAValidar[0]==' ');
        }
        else
        {
            i=i+1;
        }

    }
    return datoAValidar;
}

char validarStringCaracter(char datoAValidar)
{
        if(isalpha(datoAValidar)==0||datoAValidar==' ')
        {
            do
            {
                printf("\nIngresa un caracter valido ");
                scanf("%c",&datoAValidar);
                fflush(stdin);
            }
            while(isalpha(datoAValidar)==0||datoAValidar==' ');
        }
        return datoAValidar;
}

float validarStringFloat(char datoAValidar[])
{
    float numero;
    int validar;
    validar=strlen(datoAValidar);
    int i;
    for(i=0;i<validar;)
    {
        if(isdigit(datoAValidar[i])==0)
        {
            do
            {
                printf("\nIngresa un numero valido ");
                gets(datoAValidar);
                validar=strlen(datoAValidar);
                fflush(stdin);
            }
            while(isdigit(datoAValidar[i])==0);
        }
        else
        {
            i=i+1;
        }
    }
    numero=atof(datoAValidar);
    return numero;
}

char deseaContinuar(char mensaje[])
{
    char seguir;
    do
    {
        seguir=getChar(mensaje,seguir);
        seguir=tolower(seguir);
        fflush(stdin);
    }
    while(seguir!='s'&&seguir!='n');
    return seguir;
}

void altaPropietario(ePropietario listadoPropietario[],int tamanioPropietario,int indice)
{
    if(indice!=-1)
    {
        getString("Ingresa tu nombre ",listadoPropietario[indice].nombre);
        validarStringCadena(listadoPropietario[indice].nombre);
        stringToUpper(listadoPropietario[indice].nombre);
        listadoPropietario[indice].Id=idAutoIncrementalPropietario(listadoPropietario,tamanioPropietario);
        getString("Ingresa tu direccion: ",listadoPropietario[indice].direccion);
        stringToUpper(listadoPropietario[indice].direccion);
        getString("Ingresa tu tarjeta de credito: ",listadoPropietario[indice].tarjeta);
        listadoPropietario[indice].estado=1;
    }
    else
    {
        printf("\nNo hay lugares libres");
    }
}

int buscarLibrePropietario(ePropietario listadoPropietario[],int tamanioPropietario)
{
    int indice;
    int i;
    for(i=0; i<tamanioPropietario; i++)
    {
        if(listadoPropietario[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int idAutoIncrementalPropietario(ePropietario listadoPropietario[],int tamanioPropietario)
{
    int contador=0;
    int i;
    for(i=0;i<tamanioPropietario;i++)
    {
        if(listadoPropietario[i].estado==1||listadoPropietario[i].estado==2)
        {
            contador=contador+1;
        }
    }
    return contador+1;
}

void mostrarUnoPropietario(ePropietario listadoPropietario[],int tamanio,int i)
{
    printf("%d\t%s\t  %s\t\t%s\n",listadoPropietario[i].Id,listadoPropietario[i].nombre,listadoPropietario[i].tarjeta,listadoPropietario[i].direccion);
}

void mostrarListaPropietario(ePropietario listadoPropietario[],int tamanio)
{
    printf("ID\tNombre\tTarjeta de credito\tDireccion\n");
    int i;
    for(i=0; i<tamanio; i++)
    {
        if(listadoPropietario[i].estado==1)
        {
            mostrarUnoPropietario(listadoPropietario,tamanio,i);
        }

    }
}

void modificarPropietario(ePropietario listadoPropietario[],int tamanio)
{
    fflush(stdin);
    int Id;
    int indice;
    char caracter;
    mostrarListaPropietario(listadoPropietario,tamanio);
    Id=getInt("\nIngresa el Id del usuario que queres modificar ",Id);
    indice=buscarPorIdPropietario(listadoPropietario,tamanio,Id);
    if(caracter=='s')
    {
        modificarStringPropietario(listadoPropietario,indice,listadoPropietario[indice].tarjeta);
        printf("\nTarjeta modificada ");
    }
    else
    {
        printf("Modificacion no realizada ");
    }

}


int buscarPorIdPropietario(ePropietario listadoPropietario[],int tamanio,int id)
{
    int indice=-1;
    int i;
    for(i=0; i<tamanio; i++)
    {
        if(listadoPropietario[i].estado==1)
        {
            if(listadoPropietario[i].Id==id)
            {
                indice=i;
                break;
            }
        }
    }
    return indice;
}

char modificarStringPropietario(ePropietario listadoPropietario[],int indice,char caracter[])
{
    if(indice!=-1)
    {
        getString("\nIngresa el nuevo dato: ",caracter);
        stringToUpper(caracter);
    }
    else
    {
        printf("\nId no encontrado");
    }
}

