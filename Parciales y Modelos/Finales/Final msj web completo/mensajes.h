#include "Arraylisth.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct{

char date[11];
char time[6];
int serviceId;
int gravedad;
char msg[65];

}S_LogEntry;


typedef struct{

int id;
char name[33];
char email[65];

}S_Service;

S_LogEntry* Log_New();

int Log_setDate(S_LogEntry*,char*);
int Log_setTime(S_LogEntry*,char*);
int Log_setServiceId(S_LogEntry*,int);
int Log_setGravedad(S_LogEntry*,int);
int Log_setMsg(S_LogEntry*,char*);

char* Log_getDate(S_LogEntry*);
char* Log_getTime(S_LogEntry*);
int Log_getServiceId(S_LogEntry*);
int Log_getGravedad(S_LogEntry*);
char* Log_getMsg(S_LogEntry*);

int mostrarLog(S_LogEntry*);
int mostrarListaLog(ArrayList*);

S_Service* service_new();
int Service_setId(S_Service*,int);
int Service_setName(S_Service*,char*);
int Service_setEmail(S_Service*,char*);

int Service_getId(S_Service*);
char* Service_getName(S_Service*);
char* Service_getEmail(S_Service*);

int mostrarService(S_Service*);
int mostrarListaService(ArrayList*);


void getString(char* mensaje,char* input);
int esNumerico(char*);
int getValidInt(char* mensaje,char* mensajeError,char* input);
int parserReadLog(FILE* pFile , ArrayList* pArrayList);
int parserReadService(FILE*,ArrayList* );

int procesarInfo(ArrayList*,ArrayList*);
int mostrarEstadistica(ArrayList*,ArrayList*);

