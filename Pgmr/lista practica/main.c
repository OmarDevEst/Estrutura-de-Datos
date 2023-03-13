#include <stdio.h>
#include <stdlib.h>
#include "lisd.h"

void mensajes(int mat,char *nom,int cal,int msg,float prom)
{

if(msg==0)printf("EL elemnto %d no se encuentra en la lista\n",mat);	

if(msg==1)
	{
	printf("*******************************\n");
	printf("Nombre:%s\n",nom);
	printf("Calificacion:%d\n",cal);
	printf("Matricula:%d\n",mat);
	printf("*******************************\n");	
	}
if(msg==2)
	{
	printf("*******************************\n");
	printf("El promedio es:%f\n",prom);
	printf("*******************************\n");	
	}
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

void menu()
{
	LISTA_D L;
	L=crearListaD();
	int x=0,opc;
	char nom[100];	
	while(x==0)
	{
	printf("*******Bienvenido al Programa lista********\n");
	printf("Oprime 1 para crear ListaD\n");
	printf("Oprime 2 para insertar\n");
	printf("Oprime 3 para mostrar\n");
	printf("Oprime 4 para promedio\n");
	printf("Oprime 5 para borrar\n");
	printf("Oprime 6 para salir\n");
	scanf("%d",&opc);
	printf("*******************************************\n");
	if(opc==1)
	{
	L=crearListaD();
	printf("*****Lista Creada*****\n");	
	}
	

	if(opc==2)
		{
		printf("Introdusca Nombre\n");
		getchar();
		scanf("%[^\n]",nom);
		printf("Introdusca Matricula\n");
		int x;
		scanf("%d",&x);
		printf("Introduzca Calificacion\n");
		int y;
		scanf("%d",&y);
		L=principio(L,x,nom,y);
		}
	if(opc==3)
		{
			int x;
			printf("Como desea que se imprima la lista \n");
			printf("1- Desde el principio\n");
			printf("2- Desde el final\n");
			scanf("%d",&x);
			if (x==1)
			{
			mostrarListaD(L); 
			}
			if (x==2)
			{
			ImostrarListaD(L);
			}
		}
	if(opc==4)
		{
		promedio(L);	
		}		
	if(opc==5)
		{
		int aux;	
		printf("Que Matricula elimanare:\n");
		scanf("%d",&aux);
		borrarD(L,aux);
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

	menu();

}