#include <stdio.h>
#include <string.h>
#include <stdio.h>

typedef struct 
{
 char *codigo;
 int can;
 char autor[20];
 char titulo[20];
}FI;

int crearArreglos(FI **lb,int tam);
void scaneos(FI *lb, int tam);
void menu(FI *lb,int tam);

int main()
{
	int tam;
	FI *lb;
	tam=crearArreglos(&lb,tam);
	scaneos(lb,tam);
	menu(lb,tam);

}

int crearArreglos(FI **lb,int tam)
{
 printf("Cuanto libros diferentes se tienen ?\n");
 scanf("%d",&tam);
*lb=(FI*)malloc((tam)*sizeof(FI));
return tam;
}

void scaneos(FI *lb, int tam)
{
 for (int i = 0; i < tam; ++i)
 {
 	printf("Ingrese el codigo:");
 	getchar();
 	scanf("%[^\n]",lb[i].codigo);
 	printf("Ingrese el cantidad:");
 	getchar();
 	scanf("%[^\n]",lb[i].can);
 	printf("Ingrese el autor:");
 	getchar();
 	scanf("%[^\n]",lb[i].autor);
 	printf("Ingrese el titulo:");
 	getchar();
 	scanf("%[^\n]",lb[i].codigo);
 }
}

void menu(FI * lb,int tam)
{
 int aux;
 printf("De cuantos caracteres es el codigo del libro");
 scanf(&aux);
 for (int i = 0; i < tam; ++i)
 	{
 	 lb[i].codigo=(char*)malloc((aux)*sizeof(char));
 	}
 char codigo[aux];
	
	int w=4;
	printf("\n1-Prestamo de libros\n2-Recebcion de libro\n3-Salir");
	while(w=3)
	{
		switch(w)
		{
			case 1:
		int x=0	
		while(x=1)
		{
			printf("\nIntroduzca el codigo del libro");
			scanf("%[^\n]",codigo);
			for (int i = 0; i < tam; ++i)
			{
			 if(strcmpr(lb[i].codigo;codigo)==0)
			 {
			 	if(lb[i].cantidad==1)printf("\nSolo queda ejemplar de lectura en Sala");
			 	else{
			 		printf("\nDisponible para prestamo");
			 		lb[i].cantidad=lb[i].cantidad-1;
			 		x=1;
			 		}	
			 }
			 else
			 {
			 	if(lb[i]==lb[tam-1])
			 	{
			 	if(strcmpr(lb[i].codigo;codigo)==1)
			 		{
			 		printf("Sin concidencias");
			 		}
			 	}	
				
			 }		
			 
			}
		}	
			case 2:
		int x=0;
		while(x==1)
		{	
			printf("\nIntroduzca el codigo del libro");
			scanf("%[^\n]",codigo);
			for (int i = 0; i < -1; ++i)
			{
			 if(strcmpr(lb[i].codigo,codigo)==0)
			 {
			  printf("Autor:%s",lb[i].autor);
			  printf("Autor:%s",lb[i].titulo);
			  printf("Si desea devoler el libro oprima 1");
			  int m;
			  scanf("%d",&m),
			  if (m==1)
			  {
			  	lb[i].can=lb[i].can+1
			  	printf("Libros en expediente:",lb[i].can);
			  	x=1;
			  }
			 }
			 else
			 {
				if(lb[i]==lb[tam-1])
			 	{
			 		if(strcmpr(lb[i].codigo;codigo)==1)
			 		{
			 		printf("Sin concidencias");
			 		}
				}
			}	
			case 3: exit();
			default: 
			printf("\nerror\n");
			exit(0);
		}
	}
}
