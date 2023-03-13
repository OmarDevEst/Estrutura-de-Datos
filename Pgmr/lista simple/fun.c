#include<stdio.h>
#include<stdlib.h>
#include"fila.h"
#define TRUE 1
#define FALSE 0

void mensajes(int e,int msg);

void manejaError(int e);

LISTA derivada(LISTA L,int e,int e1);

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

LISTA insertar(LISTA L,int e,int e1)
{
Nodo_Lista *nvo;
Nodo_Lista * actual,*anterior;
nvo=crearNodoLista();
actual=crearNodoLista();
anterior=crearNodoLista();
nvo -> cof=e;
nvo -> exp=e1;
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


void mostrarLista(LISTA L)
{
Nodo_Lista * actual;
actual=crearNodoLista();
actual = L;
if(es_vaciaLista(L)==TRUE)
	{
	manejaError(5);
	exit(0);	
	}
while(actual != NULL)
	{
	mensajes(actual->cof,1);
	mensajes(actual->exp,2);
	actual=actual->siguiente;	
	}	
}


LISTA derivadafun(LISTA L)
{
Nodo_Lista * actual;
actual=crearNodoLista();
actual = L;
LISTA L1;
L1=crearLista();
if(es_vaciaLista(L)==TRUE)
	{
	manejaError(5);
	exit(0);	
	}

while(actual != NULL)
	{
	int exp2,cof2;	
	cof2=(actual->cof)*(actual->exp);
	exp2=(actual->exp)-1;
	L1=insertar(L1,cof2,exp2);
	actual=actual->siguiente;
	}
return L1;		
}

void suma(LISTA L1,LISTA L2)
{
int aux,aux2,aux3=FALSE,sum,k=0,taml1=0;
Nodo_Lista * actual,* actual1;
actual=crearNodoLista();
actual1=crearNodoLista();
actual = L1;
actual1=L2;
LISTA L4;
L4=crearLista();
if(es_vaciaLista(L1)==TRUE||es_vaciaLista(L2)==TRUE)
	{
	manejaError(5);
	exit(0);	
	}
	
		while(actual!=NULL)
		{	
			taml1=taml1+1;
			if(actual==NULL)break;
	
			aux=actual->exp;
			while(actual1!=NULL)
			{
				
				aux2=actual1->exp;
				if(aux==aux2)
					{
					sum=(actual->cof )+(actual1->cof);
					L4=insertar(L4,sum,aux);
					aux3=TRUE;	
					}	
					actual1=actual1->siguiente;
			}
			actual1=L2;
			if(aux3==FALSE)L4=insertar(L4,actual->cof,aux);
			aux3=FALSE;
			actual=actual->siguiente;
		}

		actual=L1;
		actual1=L2;


		while(actual1!=NULL)
		{
			aux=actual1->exp;
			while(actual!=NULL)
			{
			aux2=actual->exp;
			if(aux!=aux2)
				{
				k++;	
				}
			actual=actual->siguiente;
			}
			
			if(k==taml1)
				{
				L4=insertar(L4,actual1->cof,actual1->exp);	
				}
				actual=L1;
				k=0;
			
			actual1=actual1->siguiente;
    	}
   	
    mostrarLista(L4);
}


void producto(LISTA L1,LISTA L2)
{
int aux1,aux2,aux3,aux4,cofc,expo;
Nodo_Lista * actual,* actual1;
actual=crearNodoLista();
actual1=crearNodoLista();
actual = L1;
actual1=L2;
LISTA L3;
L3=crearLista();
while(actual!=NULL)
		{	
			aux1=actual->cof;
			aux2=actual->exp;
			while(actual1!=NULL)
			{
			aux2=actual1->cof;
			aux3=actual1->exp;
			expo=aux3+aux2;
			cofc=aux2*aux1;
			L3=insertar(L3,cofc,expo);
			actual1=actual1->siguiente;	
			}
		actual=actual->siguiente;
		}
mostrarLista(L3);
}