#include "mensajes.h"
#include <string.h>
#include <ctype.h>

S_LogEntry* Log_New()
{
    S_LogEntry* log;
    log=(S_LogEntry*)malloc(sizeof(S_LogEntry));
    return log;
}
int Log_setDate(S_LogEntry* this,char* date)
{
    int retorno=0;
    if(this!=NULL && date!=NULL)
    {
        strcpy(this->date,date);
        retorno=1;
    }
return retorno;
}


int Log_setTime(S_LogEntry* this,char* time)
{
 int retorno=0;
    if(this!=NULL && time!=NULL)
    {
        strcpy(this->time,time);
        retorno=1;
    }
 return retorno;
}


int Log_setServiceId(S_LogEntry* this,int service)
{
    int retorno=0;
    if(this!=NULL)
    {
        this->serviceId=service;
        retorno=1;
    }
 return retorno;
}


int Log_setGravedad(S_LogEntry* this,int gravedad)
{
 int retorno=0;
    if(this!=NULL)
    {
        this->gravedad=gravedad;
        retorno=1;
    }
 return retorno;
}


int Log_setMsg(S_LogEntry* this,char* msg)
{
 int retorno=0;
    if(this!=NULL && msg!=NULL)
    {
        strcpy(this->msg,msg);
        retorno=1;
    }
 return retorno;
}

char* Log_getDate(S_LogEntry* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->date;
    }
  return retorno;
}


char* Log_getTime(S_LogEntry* this)
{
 char* retorno=NULL;

    if(this!=NULL)
    {
        retorno=this->time;
    }
  return retorno;
}


int Log_getServiceId(S_LogEntry* this)
{
 int retorno=0;
    if(this!=NULL)
    {
        retorno=this->serviceId;
    }
  return retorno;
}


int Log_getGravedad(S_LogEntry* this)
{
 int retorno=0;
    if(this!=NULL)
    {
        retorno=this->gravedad;
    }
  return retorno;
}
char* Log_getMsg(S_LogEntry* this)
{
    char* retorno=NULL;

    if(this!=NULL)
    {
        retorno=this->msg;
    }
  return retorno;
}


int mostrarLog(S_LogEntry* this)
{
    int retorno=0;

    if(this!=NULL)
    {
        printf("%s;%s;%d;%d;%s\n",Log_getDate(this),Log_getTime(this),Log_getServiceId(this),Log_getGravedad(this),Log_getMsg(this));
        retorno=1;
    }
 return retorno;
}

int mostrarListaLog(ArrayList* this)
{
    int i;
    int len;
    int retorno=0;
    S_LogEntry* log;

    if(this!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            log=this->get(this,i);
            mostrarLog(log);
        }
      retorno=1;
    }
 return retorno;
}





S_Service* service_new()
{
    S_Service* service;
    service=(S_Service*)malloc(sizeof(S_Service));
    return service;
}

int Service_setId(S_Service* this,int id)
{
    int retorno=0;
    if(this!=NULL)
    {
        this->id=id;
        retorno=1;
    }
 return retorno;
}


int Service_setName(S_Service* this,char* name)
{
    int retorno=0;
    if(this!=NULL && name!=NULL)
    {
        strcpy(this->name,name);
        retorno=1;
    }
 return retorno;
}


int Service_setEmail(S_Service* this,char* email)
{
    int retorno=0;
    if(this!=NULL && email!=NULL)
    {
        strcpy(this->email,email);
        retorno=1;
    }
 return retorno;
}




int Service_getId(S_Service* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        retorno=this->id;
    }
 return retorno;
}


char* Service_getName(S_Service* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->name;
    }
 return retorno;
}


char* Service_getEmail(S_Service* this)
{
    char* retorno=NULL;
    if(this!=NULL)
    {
        retorno=this->email;
    }
 return retorno;
}

int mostrarService(S_Service* this)
{
    int retorno=0;
    if(this!=NULL)
    {
        printf("%d;%s;%s\n",Service_getId(this),Service_getName(this),Service_getEmail(this));
        retorno=1;
    }
 return retorno;
}
int mostrarListaService(ArrayList* this)
{
    int i;
    int retorno=0;
    int len;
    S_Service* service;

    if(this!=NULL)
    {
        len=this->len(this);
        for(i=0;i<len;i++)
        {
            service=this->get(this,i);
            mostrarService(service);
        }
      retorno=1;
    }
 return retorno;
}









void getString(char* mensaje,char* input)
{
    printf("%s",mensaje);
    fflush(stdin);
    gets(input);
}
int esNumerico(char* dato)
{
    int tam;
    int retorno=0;
    int i=0;
    tam=strlen(dato);
    for(i=0;i<tam;i++)
   {

    if(*(dato+i)>=0&&(isdigit(*(dato+i))!=0))
    {
        retorno=1;
    }
    else{
        retorno=0;
        break;
    }
   }
   return retorno;
}
int getValidInt(char* mensaje,char* mensajeError,char* input)
{
    int retorno=-1;

    char AUX[100];

    getString(mensaje,AUX);
    while(retorno==-1)
    {
    if(esNumerico(AUX))
    {

        strcpy(input,AUX);

        retorno=atoi(input);
        break;
    }
    else{
       getString(mensajeError,AUX);

      }
    }

    return retorno;
}


int parserReadLog(FILE* pFile , ArrayList* pArrayList)
{
int r;
int auxserviceId;
int auxgravedad;
char date[100],time[100],serviceId[100],gravedad[100],msg[100];

S_LogEntry* LOG;



  pFile=fopen("log.txt","r");

    if(pFile==NULL)
    {
        printf("Archivo vacio!!\n");
    return -1;
    }
    do{

        r=fscanf(pFile,"%[^;];%[^;];%[^;];%[^;];%[^\n]\n",date,time,serviceId,gravedad,msg);

        if(r==5)
        {
              LOG=Log_New();
              if(LOG!=NULL)
              {
               Log_setDate(LOG,date);

               Log_setTime(LOG,time);

               auxserviceId=atoi(serviceId);
               Log_setServiceId(LOG,auxserviceId);

               auxgravedad=atoi(gravedad);
               Log_setGravedad(LOG,auxgravedad);

               Log_setMsg(LOG,msg);

               pArrayList->add(pArrayList,LOG);
              }
        }
    }while(!feof(pFile));

    printf("Archivo cargado!!\n");

    fclose(pFile);

    return 0;
}

int parserReadService(FILE* pFile,ArrayList* pArrayList)
{

int r;
int auxid;
char id[100],name[100],email[100];

S_Service* service;


  pFile=fopen("services.txt","r");

    if(pFile==NULL)
    {
        printf("Archivo vacio!!\n");
    return -1;
    }
    do{

        r=fscanf(pFile,"%[^;];%[^;];%[^\n]\n",id,name,email);

        if(r==3)
        {

             service= service_new();
              if(service!=NULL)
              {
                auxid=atoi(id);
                Service_setId(service,auxid);

                Service_setName(service,name);

                Service_setEmail(service,email);

               pArrayList->add(pArrayList,service);
              }
        }
    }while(!feof(pFile));

    printf("Archivo cargado!!\n");

    fclose(pFile);
    return 0;
}




/*
int procesarInfo(ArrayList* listaLog,ArrayList* listaService)
{
    int i;
    int len;
    int retorno=0;
    S_LogEntry* log;
    ArrayList* warning;

    warning=al_newArrayList();

    if(listaLog!=NULL && listaService !=NULL)
    {
        len=listaLog->len(listaLog);

        for(i=0;i<len;i++)
        {
            log=listaLog->get(listaLog,i);

            if(log->gravedad==3)
            {
                warning->add(warning,log);
            }
            else if()
        }

    }
}
*/


int procesarInfo(ArrayList* listaLog,ArrayList* listaService)
{
    int i,j;
    int lenLog;
    int lenService;
    int retorno=0;
    S_LogEntry* auxlog;
    S_Service* auxservice;
    FILE* f;
    FILE* g;



    f=fopen("warning.txt","w");
    g=fopen("errors.txt","w");



    if(listaLog!=NULL && listaService!=NULL)
    {
        lenLog=listaLog->len(listaLog);
        lenService=listaService->len(listaService);

        for(i=0;i<lenLog;i++)
        {
            auxlog=(S_LogEntry*)listaLog->get(listaLog,i);

            for(j=0;j<lenService;j++)
            {
                auxservice=(S_Service*)listaService->get(listaService,j);
                 if(auxlog->gravedad==3 && auxlog->serviceId==auxservice->id)
                {
                    fprintf(f,"%s,%s,%s,%s,%s\n",auxlog->date,auxlog->time,auxservice->name,auxlog->msg,auxservice->email);
                }

                if(auxlog->gravedad>=4 &&auxlog->gravedad<=7 && auxlog->serviceId==auxservice->id)
                {
                      printf("%s,%s,%s,%s,%s\n",auxlog->date,auxlog->time,auxservice->name,auxlog->msg,auxservice->email);

                }
                   if(auxlog->gravedad>7 && auxlog->serviceId==auxservice->id)
                        {
                       fprintf(g,"%s,%s,%s,%s,%s\n",auxlog->date,auxlog->time,auxservice->name,auxlog->msg,auxservice->email);
                      }

            }

        }
    }


    fclose(f);
    fclose(g);

    return retorno;
}


int mostrarEstadistica(ArrayList* listaLog,ArrayList* listaService)
{
    int i,j;
    int lenLog;
    int lenService;
    int retorno=0;
    int contadortres=0;
    int contadorMenortres=0;
    int contadrocuatrosiete=0;
    int contadormayosiete=0;

    S_LogEntry* auxlog;
    S_Service* auxservice;

    int mayor=0;
    int flag=0;

    if(listaLog!=NULL && listaService!=NULL)
    {
        lenLog=listaLog->len(listaLog);
        lenService=listaService->len(listaService);

        for(i=0;i<lenLog;i++)
        {
            auxlog=(S_LogEntry*)listaLog->get(listaLog,i);

            for(j=0;j<lenService;j++)
            {
                auxservice=(S_Service*)listaService->get(listaService,j);
                 if(auxlog->gravedad==3 && auxlog->serviceId==auxservice->id)
                {
                 contadortres++;
                }

                if(auxlog->gravedad>=4 &&auxlog->gravedad<=7 && auxlog->serviceId==auxservice->id)
                {
                     contadrocuatrosiete++;
                }
                   if(auxlog->gravedad>7 && auxlog->serviceId==auxservice->id)
                        {
                            contadormayosiete++;
                      }
                if(auxlog->gravedad<3 && auxlog->serviceId==auxservice->id)
                {
                 contadorMenortres++;
                }
            }
        }
    }

  printf("Menores a tres : %d\n",contadorMenortres);
  printf("Iguales a tres : %d\n",contadortres);
  printf("Entre 4 y 7 : %d\n",contadrocuatrosiete);
  printf("Mayores a 7 : %d\n",contadormayosiete);

    return retorno;
}

