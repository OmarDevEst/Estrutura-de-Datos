#include <stdio.h>
#include <stdlib.h>

/* Prototipos de las funciones */
void dimension_matriz(int*,int*);
int **crear_matriz(int n,int m);
void llenar_matriz(int **mtz,int fil,int col);
void mostar_matriz(int **mtz,int fil,int col);
void liberar_matriz(int **mtz,int fil,int col);

int main()
{
	int fil,col,**mtz;
	dimension_matriz(&fil,&col);
	mtz = crear_matriz(fil,col);
	llenar_matriz(mtz,fil,col);
	mostar_matriz(mtz,fil,col);
	liberar_matriz(mtz,fil,col);
}

//SOLICITA EL TAMAÑO DE LA MATRIZ
void dimension_matriz(int *fil,int *col)
{
	printf("\nIndique el numero de las filas:\n");
	scanf("%d",fil);
	printf("\nIndique el numero de las columnas\n");
	scanf("%d",col);
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
//MUESTRA LOS ELEMENTOS DE LA MATRIZ
void mostar_matriz(int**mtz,int fil,int col)
{
int i,j;
for (i = 0; i < fil; ++i)
	for (j = 0; j < col; j++)
	{
		printf("\nDato[%d][%d]=%d \n ",i+1,j+1,mtz[i][j]);
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
