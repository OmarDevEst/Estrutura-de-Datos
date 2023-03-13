#include <stdio.h>
#include <stdlib.h>
#include "cola.h"


void datosEntrada(COLA C1,COLA C2)
{
	char x=3,z,w=3;
	int y=0;
	for (int i = 0; i < 99; ++i)
	{	printf("Si desa dejar de ingresar valores oprima 1\n");
		scanf("%d",&y);
		if(y==1)break;
		printf("Ingrese un valor para C1\n");
		getchar();
		scanf("%c",&x);
		encolar(C1,x);
		printf("Ingrese un valor para C2\n");
		getchar();
		scanf("%c",&z);
		encolar(C2,z);
	}
}

int comparar(COLA C1,COLA C2,COLA C1A,COLA C2A)
{
int v=TRUE;
char w,x;
	for (int i = 0; i < 99; ++i)
	{
	if(es_vaciaCola(C1)==TRUE && es_vaciaCola(C2)==TRUE)break;
	if(primero(C1)!=primero(C2))v=FALSE;
	w=desencolar(C1);
	encolar(C1A,w);
	x=desencolar(C2);
	encolar(C2A,x);
	}
return(v);
}

void mostrarCola(COLA C)
{
	char w;
	for (int i = 0; i < 99; ++i)
	{
		if(es_vaciaCola(C)==TRUE)break;
		w=desencolar(C);
		printf("%c,",w);
	}
	printf("\n");
}

void resultado(int w)
{
	if(w==TRUE)printf("\nEstan contenidas\n");
	if(w==FALSE)printf("\nNo estan contenidas\n");
}

void main()
{
COLA C1,C2,C1A,C2A;
int w;
C1=crearCola();
C2=crearCola();
C1A=crearCola();
C2A=crearCola();
datosEntrada(C1,C2);
w=comparar(C1,C2,C1A,C2A);
mostrarCola(C1A);
mostrarCola(C2A);
resultado(w);	
}

