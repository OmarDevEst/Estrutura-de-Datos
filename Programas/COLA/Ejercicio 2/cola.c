#include <stdio.h>
#include <stdlib.h>
#include "cola.h"



void manejaError(int e)
{
char *errores[]=
	{
	"No hay memoria disponible \n",
	"La Pila esta llena\n",
	"La Pila esta vacia\n",
	"La Cola esta llena\n",
	"La Cola esta vacia\n"	
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
p=(i+1)%TAMCOLA;
return p;	
}

void encolar(COLA C,int x)
{
if(C->tam==TAMCOLA)
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

