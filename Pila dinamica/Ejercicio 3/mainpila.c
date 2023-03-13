#include<stdio.h> 
#include<stdlib.h>
#include"pila.h"



void dinamic(PRAC **x)
{
	*x = (PRAC *)malloc(sizeof(PRAC));
}

PILA pedirdatos(PILA P1,PRAC *AUX)
{
	int x,y,z=1,ho,w;
    while(z==1)	
    {
    dinamic(&AUX);
	printf("Para ingresar una estructura oprima 1 en caso contrario oprima cualquier otra tecla \n"); 
	scanf("%d",&w);
	if(w==1)
		{
		printf("Ingrese el nombre:");
		getchar();
		scanf("%[^\n]",AUX->nombre);
		printf("Ingrese el tema:");
		getchar();
		scanf("%[^\n]",AUX->tema);
		printf("Ingrese la materia:");
		getchar();
		scanf("%[^\n]",AUX->materia);
		printf("Ingrese el numero de hojas:");
        scanf("%d",&ho);
        AUX->hojas=ho;
        apilar(P1,AUX);
		}
	else break;
	}
    return P1;
}



void mostrar(PILA P1)
{
	PRAC *AUX;
	int x=0;
	while(x==0)
	{
		AUX=desapilar(P1);
		printf("\n");
		printf("Nombre:%s\n",AUX->nombre);
		printf("tema:%s\n",AUX->tema);
		printf("materia:%s\n",AUX->materia);
		printf("hojas:%d\n",AUX->hojas);
		if(es_vaciaPila(P1)==TRUE)break;
		printf("\n");
	}
}

void ordenar(PILA P1, PILA P2, PILA PA)
{
	PRAC *v;
	char k = 90;

	for (int i = k; i >= 65; --i)
	{
		do
		{
			v = desapilar(P1);
			apilar(PA, v);
			if(v -> nombre[0] == i)
				apilar(P2, v);
		}while(es_vaciaPila(P1) == FALSE);

		do
		{
			v = desapilar(PA);
			apilar(P1,v);
		}while(es_vaciaPila(PA) == FALSE);
	}
}


void main()
{
PILA P1,P2,PA;
P1=crearPila();
P2=crearPila();
PA=crearPila();
PRAC *AUX;
pedirdatos(P1,AUX);
ordenar(P1,P2,PA);
printf("****Los ingresados fueron****\n");
mostrar(P1);
printf("***Los datos ordenados son****\n");
mostrar(P2);
}
