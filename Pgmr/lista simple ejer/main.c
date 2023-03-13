#include<stdio.h>
#include<stdlib.h>
#include "fila.h"
#define TRUE 1
#define FALSE 0

void mensajes(int e,int msg,int p)
{
int i ;
if(msg==0)printf("EL elemnto %d no se encuentra en la lista\n",e);	
else if(msg==1)printf("Nodo %d = %d \n",p,e);
else printf("El elemento %dse encuentra en la posicon %d \n",e,p);
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

void menu(LISTA L)
{
	int x=0,opc;
	while(x==0)
	{
	printf("Bienvenido al Programa lista\n");
	printf("Oprime 1 para crear lista\n");
	printf("Oprime 2 para insertar\n");
	printf("Oprime 3 para mostrar\n");
	printf("Oprime 4 para buscar\n");
	printf("Oprime 5 para borrar\n");
	printf("Oprime 6 para salir\n");
	scanf("%d",&opc);

	if(opc==1)
		{
		L=crearLista();
		printf("****Lista creada ***\n");
		}

	if(opc==2)
	{
	int op1,aux;
	printf("Como desea ingresar\n");
	printf("1 para al final\n");
	printf("2 para el inicio\n");
	scanf("%d",&op1);
	if(op1==1)
			{
			printf("Introduce el numero:");
			scanf("%d",&aux);
			L=insertar(L,aux);	
			}
			if(op1==2)
			{
			scanf("%d",&aux);
			L=principio(L,aux);	
			}
		if(op1!=1 && op1!= 2)printf("Opcion no valida");	
	}
	if(opc==3)mostrarLista(L);
	if(opc==4)
	{
	int aux;
	printf("Que elemento busca:\n");
	scanf("%d",&aux);
	buscarElem(L,aux);
	}
if(opc==5)
	{
	int aux;	
	printf("Que elemento elimanare:\n");
	scanf("%d",&aux);
	elimina(L,aux);
	}
if(opc==6)
	{
	free(L);
	exit(0);
 	}
	}  
}




void main()
{
	LISTA L;	
	menu(L);

}