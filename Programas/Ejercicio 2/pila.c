#include<stdio.h>
#include<stdlib.h>
#include "pila.h"


void manejaError(int e)
{
	char* error[]={"Memoria No disponible \n",
					"La Pila esta llena\n",
					"La Pila esta Vacia\n"};
	printf("%s",error[e]);
}


PILA crearPila()
{
PILA S;
S=(PILA)malloc(sizeof(Pila));
if(S==NULL)
	{
	manejaError(0);
	exit(0);	
	}
S->tope=-1;
return S;
}

int es_vaciaPila(PILA S)
{
if(S->tope<0)return TRUE;
else return FALSE;	
}

void apilar(PILA S,int e)
{
if(S->tope==TAMPLIA-1)
	{
	manejaError(1);
	exit(0);	
	}
S->tope++;
S->pila[S->tope]=e;	
}

int desapilar (PILA S)
{
	int v;
	if(es_vaciaPila(S)==TRUE)
	{
	manejaError(2);
	exit(0);	
	}
	v=S->pila[S->tope];
	S->tope --;
	return v;
}

int elemtTope(PILA S)
{
int v;
if(es_vaciaPila(S)==TRUE)
	{
	manejaError(2);
	exit(0);	
	}

v=desapilar(S);
apilar(S,v);
return v;	
}