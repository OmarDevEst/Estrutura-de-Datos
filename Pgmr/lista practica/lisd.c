#include <stdio.h>
#include <stdlib.h>
#include "lisd.h"
void mensajes(int mat,char *nom,int cal,int msg,float x);

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


void mostrarListaD(LISTA_D L)
{
Nodo_ListaD *aux;
aux=crearNodoListaD();
aux=L;
if(es_vaciaListaD(L)==TRUE)
	{
	manejaError(6);
	exit(0);	
	}
while(aux!=NULL)
	{
	mensajes(aux->mat,aux->nom,aux->cal,1,0);
	aux=aux->sig;	
	}		
}

void ImostrarListaD(LISTA_D L)
{
Nodo_ListaD *aux1;
LISTA_D L2;
L2=crearListaD();
aux1=crearNodoListaD();
aux1=L;

if(es_vaciaListaD(L)==TRUE)
	{
	manejaError(6);
	exit(0);	
	}
while(aux1!=NULL)
	{
		L2=principio(L2,aux1->mat,aux1->nom,aux1->cal);
		aux1=aux1->sig;	
	}

mostrarListaD(L2);
	
}

void promedio(LISTA_D L)
{
Nodo_ListaD *aux;
aux=crearNodoListaD();
aux=L;
float x=0;
int pos=0;
if(es_vaciaListaD(L)==TRUE)
	{
	manejaError(6);
	exit(0);	
	}
while(aux!=NULL)
	{
	x=(aux->cal)+x;
	aux=aux->sig;
	pos ++;	
	}
	x=x/pos;
mensajes(0,0,0,2,x);			
}



LISTA_D borrarD(LISTA_D L,int mat)
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

while(aux != NULL && mat != aux->mat)
	{
		aux2=aux;
		aux=aux->sig;
	}

if(aux==NULL)mensajes(mat,0,0,0,0);
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

LISTA_D principio(LISTA_D L,int mat,char *noma,int cal)
{
Nodo_ListaD *aux;
Nodo_ListaD *nvo;
nvo=crearNodoListaD();
aux=crearNodoListaD();
nvo->mat=mat;
nvo->cal=cal;
for (int i = 0; i < 100; ++i)
{
nvo->nom[i]=noma[i];
}

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
