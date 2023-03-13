#include <stdio.h>
#include <stdlib.h>
#include "mainh.h"



void manejaError(int e)
{
char *errores[]=
	{
	"No hay memoria disponible \n",
	"La Cola esta llena\n",
	"La Cola esta vacia\n",
	"La Pila esta llena\n",
	"La Pila esta vacia\n"	
	};
printf("%s\n",errores[e]);
}

COLA crearCola()
{
COLA C;
C=(COLA)malloc(sizeof(Cola));
if(C==NULL)
	{
	manejaError(0);
	exit(0);	
	}
C->primero=0;
C->ultimo=0;
return C;		
}

int sig(int i)
{
int p;
p=(i+1)%TAM;
return p;	
}

void encolar(COLA C,char x)
{
if(C->tam==TAM)
	{
	manejaError(3);
	exit(0);	
	}	
C->cola[C->ultimo]=x;
C->ultimo=sig(C->ultimo);
C->tam=C->tam+1;
}

int es_vaciaCola(COLA C)
{
if(C->tam==0)return TRUE;
else return FALSE;
}


int desencolar(COLA C)
{
int v;
if(es_vaciaCola(C)==TRUE)
	{
	manejaError(4);
	exit(0);	
	}
v=C->cola[C->primero];
C->primero=sig(C->primero);
C->tam=C->tam-1;
return v;	
}

int primero(COLA C)
{
int v;
if(es_vaciaCola(C)==TRUE)
	{
	manejaError(4);
	exit(0);	
	}
v=C->cola[C->primero];
return v;	
}
/////Funciones Pila//

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
if(S->tope==TAM-1)
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