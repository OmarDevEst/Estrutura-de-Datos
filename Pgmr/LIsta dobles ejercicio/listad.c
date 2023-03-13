#include <stdio.h>
#include <stdlib.h>
#include "listad.h"

void mensajes(int e,int msg,int p);

void manejaError(int e);

LISTA_D crearListaD()
{
LISTA_D L;
L=NULL;
return L;	
}

int es_vaciaListaD(LISTA_D L)
{
if(L==NULL)return TRUE;
else return FALSE;	
}

Nodo_ListaD * crearNodoListaD()
{
Nodo_ListaD * nvo;
nvo=(Nodo_ListaD*)malloc(sizeof(Nodo_ListaD));
if(nvo==NULL)
	{
	manejaError(0);
	exit(0);	
	}
nvo->sig=NULL;
nvo->ant=NULL;
return nvo;		
}

LISTA_D principio(LISTA_D L,int e)
{
Nodo_ListaD *aux;
Nodo_ListaD *nvo;
nvo=crearNodoListaD();
aux=crearNodoListaD();
nvo->dato=e;
if(es_vaciaListaD(L)==TRUE)
	{	
	nvo->sig=NULL;
	L=nvo;	
	}
else{
	aux=L;
	L=nvo;
	nvo->sig=aux;
	L->ant=NULL;
	}
	return L;	
}

LISTA_D insertarD(LISTA_D L,int e)
{
Nodo_ListaD *nvo;
Nodo_ListaD *aux, *aux2;

nvo=crearNodoListaD();
nvo->dato=e;

if(es_vaciaListaD(L)==TRUE)
	{
	L=nvo;
	}
else
	{
	aux=L;
	while(aux!=NULL)
		{
		aux2=aux;
		aux=aux->sig;	
		}
	aux2->sig=nvo;
	nvo->ant=aux2;
	nvo->sig=aux;
	}
	return L;		
}

void mostrarListaD(LISTA_D L)
{
Nodo_ListaD *aux;
aux=crearNodoListaD();
int pos;
aux=L;
if(es_vaciaListaD(L)==TRUE)
	{
	manejaError(6);
	exit(0);	
	}
pos=1;
while(aux!=NULL)
	{
	mensajes(aux->dato,1,pos);
	pos++;
	aux=aux->sig;	
	}		
}

void buscarElemD(LISTA_D L,int elem)
{
Nodo_ListaD * aux;
aux=crearNodoListaD();
int pos=1;
aux=L;
if(es_vaciaListaD(L)==TRUE)
	{
	manejaError(6);
	exit(0);	
	}
while(aux != NULL && elem != aux->dato)
	{
	aux= aux->sig;
	pos++;	
	}
	if(aux==NULL)mensajes(elem,0,0);
	else mensajes(elem,2,pos);

}

LISTA_D borrarD(LISTA_D L,int elem)
{
Nodo_ListaD * aux,*aux2;
aux=crearNodoListaD();
aux2=crearNodoListaD();
if(es_vaciaListaD(L)==TRUE)
	{
	manejaError(6);
	exit(0);	
	}
aux=aux2=L;
while(aux != NULL && elem != aux->dato)
	{
		aux2=aux;
		aux=aux->sig;
	}
if(aux==NULL)mensajes(elem,0,0);
else if(aux2==aux)
	{
	L=aux2->sig;
	if(aux2->sig!=NULL)
	L->ant=NULL;
	free(aux2);	
	}
		else
		{
		aux2->sig=aux->sig;
		if(aux->sig!=NULL)
		aux->sig ->ant=aux->ant;
		free(aux);	
		}
return L;				
}