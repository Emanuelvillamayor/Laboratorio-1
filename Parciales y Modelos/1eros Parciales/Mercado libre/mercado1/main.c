
#include <stdlib.h>
#include <string.h>
#include "general.h"
#define  TAMusuario 7
#define TAMproducto 10

int main()
{
    eUsuario usuario[TAMusuario] ;
    eProducto producto[TAMproducto];


    char auxiliarOpcionStr[30];

    int modificar;
    int modificarproducto;
    int baja;
    int bajaproducto;
    int mostrar;

    int initU;
    int initP;


    int opcion;
    int alta;
    int publicar;



    initU=eUsuario_init(usuario,TAMusuario);
    if(initU==-1){
    printf("Error");
    }
    else{
    }
    inicializarUsuarioHardCode( usuario);

  initP=eProducto_init(producto,TAMproducto);
       if(initP==-1){
    printf("Error");
    }
    else{}
    inicializarProductoHardCode(producto);
    do
    {
        printf("1. Alta Usuario\n2. Modificar datos Usuario\n3. Baja Usuario\n4. Publicar Producto\n5. Modificar Publicacion\n6. Cancelar Publicacion\n7. Comprar Producto\n8. Listar Publicaciones Usuario\n9. Listar Publicaciones\n10. Listar Usuario\n11. Salir");
         if (!getStringNumeros("\nIngrese una opcion: ",auxiliarOpcionStr))
                {
                    printf ("\nERROR:Ingrese un valor numerico \n");
                }
                else{
           opcion= atoi(auxiliarOpcionStr);


        switch(opcion)
        {
            case 1:
           printf("\n-----ALTA-------\n");

          alta=eUsuario_alta(usuario,TAMusuario);
          if(alta==-1)
          {
              printf("No quedan mas lugares\n");
          }
          else if(alta==-3){
            {
                printf("\n");
            printf("USUARIO INGRESADO\n");

          }
          }
          else{}

              break;
            case 2:
                printf("NOMBRE - ID - ESTADO");
                //eUsuario_ordenar(usuario,TAMusuario);

                mostrar=eUsuario_mostrarListado(usuario,TAMusuario);


                     modificar=eUsuario_modificacion(usuario,TAMusuario);
                     if (modificar==-2){

                     }
                     else if (modificar>=0)

                     {
                         printf("Modificacion realizada\n");
                     }

               else{
                printf("ERROR:Ingrese un id correcto\n");
               }


                break;
           case 3:
             printf("NOMBRE - ID - ESTADO");
             mostrar=eUsuario_mostrarListado(usuario,TAMusuario);


                     baja=eUsuario_baja(usuario,TAMusuario);
                     if (baja==-2){

                     }
                     else if (baja>=0)
                     {
                         printf("Baja realizada\n");
                     }

               else{
                printf("ERROR:Ingrese un id correcto\n");
               }
                break;


            case 4:
         printf("NOMBRE - ID - ESTADO\n");
         mostrar=eUsuario_mostrarListado(usuario,TAMusuario);

         publicar=eUsuario_publicarProducto(usuario,TAMusuario ,producto,TAMproducto);
         if (publicar==-2)
         {
         break;
         }
         else if (publicar==0)
         {

             printf("Producto ingresado\n");
         }
         else{
            printf("\nNO QUEDAN MAS LUGARES\n");
         }

                break;
            case 5:
              printf("NOMBRE - ID - ESTADO\n");
              mostrar=eUsuario_mostrarListado(usuario,TAMusuario);
             modificarproducto=eUsuario_modificarProducto(usuario,TAMusuario ,producto,TAMproducto);
                      if (modificarproducto==-2){

                     }
                     else if (modificarproducto>=0)
                     {
                         printf("Modificacion realizada\n");
                     }

               else{
                printf("ERROR:Ingrese un id correcto\n");
               }


                break;

            case 6 :
                  printf("NOMBRE - ID - ESTADO\n");
              mostrar=eUsuario_mostrarListado(usuario,TAMusuario);
              bajaproducto=eUsuario_bajaproducto(usuario,TAMusuario,producto,TAMproducto);
               if (bajaproducto==-2){

                     }
                     else if (bajaproducto>=0)
                     {
                         printf("Baja realizada\n");
                     }

               else{
                printf("ERROR:Ingrese un id correcto\n");
               }

                break;
            case 7 :




                break;

            case 8 :
                    printf("\nNOMBRE - ID - ESTADO\n");
                    eUsuario_mostrarListado(usuario,TAMusuario);
                    mostrar= mostrarUsuarioprodutoeleccion(usuario,TAMusuario,producto,TAMproducto);
                    if(mostrar==-1)
                    {
                        printf("Ingrese un id valido");
                    }
                    else{
                    }
                break;

            case 9 :
                printf("\n  Id Producto  Nombre   Precio     Stock     Cantvendida  Nombre Usuario\n");
                mostrar=eProducto_mostrarProductosUsuario(producto,TAMproducto,usuario,TAMusuario);

                break;

             case 10 :

                break;
             default:
                  printf("ERROR: Ingrese una de las opciones indicadas \n");
                break;


        }
                }
        system("pause");
        system("cls");
    }
    while(opcion!=11);

    return 0;
}
