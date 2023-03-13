#include <stdio.h>
#include <stdlib.h>

/* Prototipos de las funciones */
void dimension_matriz(int*,int*);
int **crear_matriz(int n,int m);
void llenar_matriz(int **mtz,int fil,int col);
void mostar_matriz(int **mtz,int fil,int col);
void liberar_matriz(int **mtz,int fil,int col);
void cambiar_matriz(int*princi,int*cambio);

int main()
{
	int fil=1,col=2,**mtz,princi,cambio;
    dimension_matriz(&fil,&col);
	mtz = crear_matriz(fil,col);
	llenar_matriz(mtz,fil,col);
	cambiar_matriz(&princi,&cambio);
	mostar_matriz(mtz,fil,col);
	liberar_matriz(mtz,fil,col);
}

//SOLICITA EL TAMAÑO DE LA MATRIZ
void dimension_matriz(int *fil,int *col)
{

	while(*fil!=*col||*fil>11)
		{
			printf("\nIndique un valor de matriz menor de 10x10 porfavor\n");
			printf("\nIndique un valor de columnas y filas igual pls\n");
			printf("\nIndique el numero de las filas:\n");
			scanf("%d",fil);
			printf("\nIndique el numero de las columnas\n");
			scanf("%d",col);
		}
	
}
//CREAR UN ARRGELO BIDIMENSIONAL

int** crear_matriz(int fil,int col)
{
	int i;
	int **mtz = (int**)malloc(sizeof(int*)*fil);

	for (int i = 0; i < fil; i++)
	{
	 mtz[i]=(int*)malloc(sizeof(int)*col);
	}
	return mtz;
}

//SOLICITA LOS DATOS DE LA MATRIZ AL USUARIO 
void llenar_matriz(int**mtz,int fil,int col)
{
	int i,j;
	printf(" \n Introduzca los datos de la matriz \n");
	for (i= 0; i <fil; i++)
	{
		for (j= 0; j < col; j++)
		{
			printf("\nDato[%d][%d]\n",1+i,j+1);
			scanf("%d",&mtz[i][j]);
		}
	}
} 
//SOLICITA QUE CAMBIAR POR QUE 

void cambiar_matriz(int*princi,int*cambio)
{
	printf("Que columna desea cambiar");
	scanf("%d",princi);
	printf("Por cualo ?");
	scanf("%d",cambio);
}
//MUESTRA LOS ELEMENTOS DE LA MATRIZ
void mostar_matriz(int**mtz,int fil,int col)
{
int i,j;
for (i = 0; i < fil; ++i)
	{
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("%d",mtz[i][j]);
		}
	}
}
//Liberar la matriz de la memoria
void liberar_matriz(int**mtz,int fil,int col)
{
	int i;
	for (int i = 0; i < fil; ++i)
	{
		free(mtz[i]);
	}
	free(mtz);
}