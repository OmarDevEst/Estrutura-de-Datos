#include<stdio.h>
#include<stdlib.h>
#include "pila.h"

PILA datosEntrada(PILA S)
{
int x,aux,w=0;
S=crearPila();
for (int i = 0; i < 99; ++i)
	{
	printf("Desea agregar un valor ? SI oprima 1 no oprima lo que sea\n");
	scanf("%d",&x);
	if (x==1)
		{
		printf("Ingrese el valor a apilar\n");
		scanf("%d",&aux);
		apilar(S,aux);
		}
	if(x!=1)break;	
	}
return S;
}

void mostrarpila(PILA S)
{
PILA AUX;
AUX=crearPila();
int w=0,aux,aux2;



	printf("En desorden\n");
	for (int i = 0; i < 99; ++i)
	{
	aux=elemtTope(S);	
	apilar(AUX,aux);
	printf("%d,",aux);
	aux2=desapilar(S);
	if(es_vaciaPila(S)==TRUE)break;
	}

	printf("\nEn orden\n");
	for (int i = 0; i < 99; ++i)
	{
	if(es_vaciaPila(AUX)==TRUE)break;
	aux=desapilar(AUX);
	printf("%d,",aux);	
	}
	printf("\n");
}

int main()
{
	PILA S;
	S=datosEntrada(S);
	mostrarpila(S);
	return 0;
}