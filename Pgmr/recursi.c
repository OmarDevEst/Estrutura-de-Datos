
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pedirtam(int *tam)
{
printf("Cuantos elementos insertara:\n");
scanf("%d", &*tam);
}

void creaArregloUni(int **ARR, int tam)
{
*ARR = (int *) malloc ((tam)*sizeof(int));
if(*ARR == NULL)
	{
	printf("No hay memoria disponible....\n");
	exit(0);
	}
}

int pedirdatos(int *ARR, int tam)
{
	int clave;
	printf("Porfavor introduces los elementos\n");
	for(int i=0;i<tam;i++)
		{
		printf("A[%d]: ",i+1);
		scanf("%d",&ARR[i]);
		}
	printf("\nQue elemento desea buscar??? : ");
	scanf("%d",&clave);
	return clave;
}




void mezcla(int *A,int izqda,int medio,int dercha)
{ 
int aux[50],x,y,z;

x=z=izqda; 
y=medio+1;

while (x <=medio && y<=dercha)
	{
		if(A[x]<=A[y])
		aux[z++]=A[x++];
		else
		aux[z++]=A[y++];
	}

while (x<=medio)aux[z++]=A[x++]; 
while (y<=dercha) aux[z++]=A[y++];
for(z=izqda; z<=dercha; z++)A[z]=aux[z];
	
}




void mergeSort(int *ARR,int primero,int ultimo)
{ 
int central;
if (primero < ultimo)
	{ 
	central = (primero + ultimo)/2; 
	mergeSort(ARR, primero, central); 
	mergeSort(ARR,central+1, ultimo);
	mezcla(ARR, primero, central, ultimo);
	}

}

void mostrar(int *ARR,int tam)
{
	int i;
	printf("\n\n **************Ordenado**************** \n");
	for(i=0;i<tam;i++)
	printf("A[%d]=%d \n",i+1,ARR[i]);
}




int busquedaBinR(int *ARR,int inferior,int superior,int clave)
{ 
int central;
if(inferior > superior)
	{ // NO ENCONTRADO 
	printf("La clave %d no se encontro en el arreglo\n",clave);
	return -1;
	}
else
	{
	central=(inferior + superior)/2;
 	if (ARR[central]==clave)
 			{	 
			return central;
			}

	else if (ARR[central] < clave)
		{ 
		return busquedaBinR(ARR, central+1, superior, clave);
		}
	else
		{
	return busquedaBinR(ARR,inferior,central-1,clave);
		}

	}
}
void mostrarA(int *ARR,int tam,int clave)
{
	printf("\nPosicion ordenada : %d \n",busquedaBinR(ARR,0,tam-1,clave)+1);
}


 

void liberar(int *ARR)
{
printf("\n\nMemoria liberada... \n\n");
free(ARR);
}

void main()
{
	int *ARR ,tam,clave;
	pedirtam(&tam);
	creaArregloUni(&ARR,tam);
	clave=pedirdatos(ARR,tam);
	mergeSort(ARR,0,tam-1);
	mostrar(ARR,tam);
	mostrarA(ARR,tam,clave);
	liberar(ARR);
}














