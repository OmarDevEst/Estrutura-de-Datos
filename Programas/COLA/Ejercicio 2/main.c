#include <stdio.h>
#include <stdlib.h>
#include "cola.h"


void datosEntrada(COLA C)
{
	int x,y=0;
	for (int i = 0; i < 99; ++i)
	{
		if(y==1)break;
		printf("Ingrese un valor\n");
		scanf("%d",&x);
		encolar(C,x);
		printf("Si desa dejar de ingresar valores oprima 1\n");
		scanf("%d",&y);
	}
}

void mostrarCola(COLA C)
{
	int w;
	for (int i = 0; i < 99; ++i)
	{
		if(es_vaciaCola(C)==TRUE)break;
		w=desencolar(C);
		printf("%d,",w);
	}
	printf("\n");
}

void main()
{
COLA C;
C=crearCola();
datosEntrada(C);
mostrarCola(C);	
}

