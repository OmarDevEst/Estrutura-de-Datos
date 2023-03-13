#include<stdio.h>
#include<stdlib.h>
#include "fila.h"
#define TRUE 1
#define FALSE 0

void mensajes(int e,int msg)
{
int i ;
if(msg==1)printf( "%dx",e);
if(msg==2)printf( "^%d+",e);
}





void manejaError(int e)
{
char *errores[]={"No hay memoria disponible\n",
				"La cola esta llena\n",
				"La cola esta Vacia\n",
				"La pila esta llena\n",
				"La pila esta Vacia\n",
				"La Lista esta vacia\n"};
printf("%s",errores[e]);
}



void menu(LISTA L1,LISTA L2,LISTA L3,LISTA L4,LISTA L5)
{
int x=0,y=0,exp,men=0,aux,cof;
while(men==0)
	{	
	printf("\n***************************************\n");
	printf("Bienvenido al programa polinomios\n");
	printf("1-Para introducir sus polinomios \n");
	printf("2-Obtener la suma de dos polinomios\n");
	printf("3-Obtener la primer derivada \n");
	printf("4-Obnter el producto de los polinomios\n");
	printf("5-Mostar Polinomios\n");
	printf("6-Salir \n");
	printf("7-Que opcion escoge:");
	scanf("%d",&aux);
	printf("***************************************\n");
	if(aux==1)	
		{
			while(y==0)
			{
			printf("Introduce el coeficiente X de la Lista A\n");
			scanf("%d",&cof);
			printf("Introduce el exponiente X de la Lista A\n");
			scanf("%d",&exp);
			L1=insertar(L1,cof,exp);
			printf("Para seguir escaneando oprima 0\n");
			scanf("%d",&y);
			}
			y=0;
			while(y==0)
			{
			printf("Introduce el coeficiente X de la Lista B\n");
			scanf("%d",&cof);
			printf("Introduce el exponiente X de la Lista B\n");
			scanf("%d",&exp);
			L2=insertar(L2,cof,exp);
	
			printf("Para seguir escaneando oprima 0\n");
			scanf("%d",&y);
			}
		}
	if(aux==2)
		{
		suma(L1,L2);	
		}
	if(aux==3)
		{
		L3=derivadafun(L1);
		mostrarLista(L3);
		printf("\n");
		L4=derivadafun(L2);
		mostrarLista(L4);
		printf("\n");	
		}
	if(aux==4)
		{
		producto(L1,L2);
		}
	if(aux==5)
		{
		mostrarLista(L1);
		printf("\n");	
		mostrarLista(L2);
		}
	if(aux==6)exit(0);
		 
	}
}


void main()
{
	LISTA L1,L2,L3,L4,L5;
	L1=crearLista();
	L2=crearLista();
	L3=crearLista();
	L4=crearLista();
	L5=crearLista();	
	menu(L1,L2,L3,L4,L5);

}