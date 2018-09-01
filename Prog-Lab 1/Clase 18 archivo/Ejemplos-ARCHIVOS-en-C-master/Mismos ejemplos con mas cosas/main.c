#include <stdio.h>
#include <stdlib.h>
typedef struct
{
int a ;
char b;
}eDato;
void funcion1();
void funcion2a();
void funcion2b();
void funcion3();

int main()
{
    //funcion1();
     //funcion2a();
     //funcion2b();
     funcion3();
    return 0;
}



void funcion1() /**Lectura y esritura de 1*/
{
FILE* miArchivo;
int numero=64;

/**Si utilizo esto muestra el valor del codigo ascii */
miArchivo=fopen("prueba.1.txt","w");
fwrite(&numero,sizeof(int),1,miArchivo);//escribe lo que sea en el archivo y lo escribe en modo de texto

fclose(miArchivo);

/**Si utilizo esto muestra el valor verdadero es decir el 64 */

miArchivo=fopen("prueba.1.txt","r");

fread(&numero,sizeof(int),1,miArchivo); // comvierte el 64 en ascii porque se guarda en modo texto
fclose(miArchivo);
printf("Numero : %d",numero);

}


void funcion2a()
{
FILE* miArchivo;
int lista[5];
int numero;
int i;

/** Va guardando en tiempo real, pero el acceso a disco puede tener problemas que sea mas lento*/

miArchivo=fopen("prueba.txt","w");
for(i=0;i<5;i++)
{
printf("Ingrese un numero: ");
scanf("%d",&numero);

fwrite(&numero,sizeof(int),1,miArchivo);
}
fclose(miArchivo);


miArchivo=fopen("prueba.txt","r");
i=0;
while(!feof(miArchivo))
{
    //fread(&numero,sizeof(int),1,miArchivo);
    fread(&lista[i],sizeof(int),1,miArchivo);
     if(feof(miArchivo)){
        break;
    }
    i++;
}
fclose(miArchivo);

for (i=0;i<5;i++)
{
    printf("%d",lista[i]);
}

}


void funcion2b()
{
    /**Inconveniente con esta forma de trabajo : por ejemplo si en un ABM doy de baja alguno guarda todo, no hay filtrado*/
    /**para eso creamos estructura repetitiva para saber si alguno esta activo o no, a medida que recorro el array lo guardamos*/
    /**Es como cuando mostramos solo los que estan dados de alta y regulamos que solo muestre los que estan dados de alta
    y los que no  no los muestrar , pero en este caso en el archivo*/

    FILE* miArchivo;
    int lista[5]={1,5,9,6,4};
    int numero;
    int i;
    miArchivo=fopen("prueba3.txt","w");
    fwrite(lista,sizeof(int),5,miArchivo);
    fclose(miArchivo);

    miArchivo=fopen("prueba3.txt","r");
    fread(lista,sizeof(int),5,miArchivo);
    fclose(miArchivo);
    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }

}

void funcion3() /**Archivo de tipo binario write y read de estructura*/
{
    FILE* miArchivo;
    eDato d={1,'B'}; //quiero escribir este dato en binario

   /* miArchivo=fopen("miBinario.dat","wb");//dat , bin o nada
    if(miArchivo!=NULL)
    {
        fwrite(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);
    }
*/
    miArchivo=fopen("miBinario.dat","rb");//dat , bin o nada
    if(miArchivo!=NULL)
    {
         fread(&d,sizeof(eDato),1,miArchivo);
         fclose(miArchivo);
    }
    printf("%d--%c",d.a,d.b);
}



void funcion3a() /**Archivo de tipo binario write y read de estructura*/
{
    FILE* miArchivo;
    eDato d={1,'B'}; //quiero escribir este dato en binario

    miArchivo=fopen("miBinario.dat","wb");//dat , bin o nada
    if(miArchivo!=NULL)
    {
        fwrite(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);
    }

    miArchivo=fopen("miBinario.dat","rb");//dat , bin o nada
    if(miArchivo!=NULL)
    {
         fread(&d,sizeof(eDato),1,miArchivo);
         fclose(miArchivo);
    }
    printf("%d--%c",d.a,d.b);
}

