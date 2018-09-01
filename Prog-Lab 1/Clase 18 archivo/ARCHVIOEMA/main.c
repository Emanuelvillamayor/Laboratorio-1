#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE * archivo;//REPRESENTA EL ARCHIVO EN MEMORIA
char cadena[50]="hola amigo\n";

archivo =fopen ("C:\\Users\\Manu\\Desktop\\SABADO\\ARCHVIOEMA\\archivo.txt","w");
fprintf(archivo,cadena);
fprintf(archivo,"\nhola");


fclose(archivo);


archivo =fopen ("C:\\Users\\Manu\\Desktop\\SABADO\\ARCHVIOEMA\\archivo.txt","r");
while (!feof(archivo))
{
    fgets(cadena,50,archivo);
    puts(cadena);
}

fclose(archivo);
    return 0;
}
