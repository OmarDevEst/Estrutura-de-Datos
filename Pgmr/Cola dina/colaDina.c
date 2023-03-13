//DEFINICION DEL TAD
#include<stdio.h>
#include<stdlib.h>
#include"colaDina.h"
#define TRUE 1
#define FALSE 0


void manejaError(int e)
{
char *errores[]={"No hay memoria disponible\n"
				,"La cola esta llena\n",
				"La cola esta Vacia\n"};
printf("%s",errores[e]);
}

//CREACION DE UNA COLA VACÍA

COLA crearCola(){
COLA C; 
C = (COLA)malloc(sizeof(Cola)); 
if(C == NULL){
manejaError(0);
exit(0);
}
C->primero = NULL;
C->ultimo = NULL;
return C;
}

//CREA UN ELEMENTO DE LA PILA

Nodo_Cola *crearNodoCola(){ 
Nodo_Cola * nvo;
nvo=(Nodo_Cola *)malloc(sizeof(Nodo_Cola));
if(nvo == NULL){
manejaError(0);
exit(0);
}
return nvo;
}

// ESTA VACÍA LA COLA

int es_vaciaCola (COLA C){
if(C->primero == NULL && C->ultimo == NULL)
return TRUE;
else
return FALSE;
}

//CONSULTAR EL PRIMER ELEMENTO DE LA ESTRUCTURA COLA

char primero (COLA C){
char v;
if(es_vaciaCola(C)==TRUE){
manejaError(2); //COLA VACIA
exit(0);
}
v=C->primero->dato;
return v;
}

// AGREGAR ELEMENTOS A LA COLA

void encolar (COLA C,char e){ 
Nodo_Cola * nvo;
nvo=crearNodoCola(); 
nvo->dato=e; 
nvo->siguiente=NULL;

if(es_vaciaCola(C)==TRUE){ 
C->primero=nvo;
}
else{
C->ultimo->siguiente = nvo;
}
C->ultimo=nvo;
}


//ELIMINAR UN ELEMENTO DE LA COLA

char desencolar(COLA C){
char v; 
Nodo_Cola * aux;

if(es_vaciaCola(C)==TRUE){ 
manejaError(2); //COLA VACIA 
exit(0);
}
aux=C->primero;
v=aux->dato;
C->primero=aux->siguiente; 
if (C->primero == NULL) 
C -> ultimo = NULL;
free(aux); 
return v;
}

