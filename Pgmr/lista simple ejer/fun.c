#include<stdio.h>
#include<stdlib.h>
#include"fila.h"
#define TRUE 1
#define FALSE 0

void mensajes(int e,int msg,int p);

void manejaError(int e);

LISTA crearLista()
{
	LISTA L;
	L=NULL;
	return L;
}

int es_vaciaLista(LISTA L)
{
if(L==NULL)return TRUE;
else return FALSE;	
}

Nodo_Lista * crearNodoLista()
{
Nodo_Lista * nvo;
nvo=(Nodo_Lista*)malloc(sizeof(Nodo_Lista));
if(nvo==NULL)
	{
	manejaError(0);
	exit(0);	
	}	
}

LISTA insertar(LISTA L,int e)
{
Nodo_Lista *nvo;
Nodo_Lista * actual,*anterior;
nvo=crearNodoLista();
actual=crearNodoLista();
anterior=crearNodoLista();
nvo -> dato=e;
if(es_vaciaLista(L)==TRUE)
	{
	nvo->siguiente=NULL;
	L=nvo;
	}
else
	{
	actual =L;
	while(actual != NULL)
		{
		anterior=actual;
		actual=actual->siguiente;	
		}
	nvo->siguiente=NULL;
	anterior->siguiente=nvo;		
	}
return L;
}

LISTA principio(LISTA L,int e)
{
Nodo_Lista *nvo;
Nodo_Lista *actual;
nvo=crearNodoLista();
actual=crearNodoLista();
nvo->dato=e;
if(es_vaciaLista(L)==TRUE)
	{	
	nvo->siguiente=NULL;
	L=nvo;	
	}
else{
	actual=L;
	L=nvo;
	L->siguiente=actual;
	}
	return L;	
}

void mostrarLista(LISTA L)
{
Nodo_Lista * actual;
int pos;
actual=crearNodoLista();
actual = L;
if(es_vaciaLista(L)==TRUE)
	{
	manejaError(5);
	exit(0);	
	}
pos=1;
while(actual != NULL)
	{
	mensajes(actual->dato,1,pos);
	pos++;
	actual=actual->siguiente;	
	}	
}


void buscarElem(LISTA L,int elem)
{
Nodo_Lista *actual;
actual=crearNodoLista();
int pos=1;
actual=L;
if(es_vaciaLista(L)==TRUE)
	{
	manejaError(5);
	exit(0);	
	}
while(actual!=NULL && elem != actual->dato)
	{
	actual= actual-> siguiente;
	pos++;	
	}

if(actual==NULL)mensajes(elem,0,0);
else mensajes(elem,2,pos);	
}

LISTA elimina(LISTA L,int elem)
{
Nodo_Lista * actual,*anterior;
actual=crearNodoLista();
anterior=crearNodoLista();

if(es_vaciaLista(L)==TRUE)
	{
	manejaError(5);
	exit(0);	
	}
actual=L;
anterior=L;
while(actual!=NULL && elem != actual->dato)
	{
	anterior = actual;
	actual = actual->siguiente;	
	}
if (actual==NULL)mensajes(elem,0,0);
else if(anterior==actual)
	{
	L=anterior->siguiente;
	free(anterior);	
	}
		else
			{
			anterior-> siguiente=actual->siguiente;
			free(actual);	
			}
return L;		
}

