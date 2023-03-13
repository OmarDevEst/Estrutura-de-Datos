#include <stdio.h>
#include <stdlib.h>
/* PROTOTIPOS DE LAS FUNCIONES*/
void dartam(int*);
void crearArreglos(int**,int);
void Datos(int*,int);
void Mostar(int*,int);
void liberar(int*);

int main()
{
	int *A,elem;
	dartam(&elem);
	crearArreglos(&A,elem);
	Datos(A,elem);
	Mostar(A,elem);
	liberar(A);
	return 0;
}
//Solicita el tamaño del Arreglo

	void dartam(int*elem)
	{
		printf("Cuantos elemntos tiene su Arreglo\n");
		scanf("%d",&*elem);
	}
//Crear el arreglo MOD EN CASO DE FLOATS O INT
	void crearArreglos(int **A,int elem)
	{
	*A=(int*)malloc((elem)*sizeof(int));
	if(*A==NULL)
		{
		printf("Error al generar arreglo dinamico");
		exit(0);	
		}	
	}
//Solicitar los datos del Arreglos
	void Datos(int*A,int elem)
	{
		int i;
		printf("\nIngrese valores\n");
		for(i=0;i<elem;i++)
		{
		 printf("A[%d]=",i+1);	
		 scanf("%d",&A[i]);	
		}	
	} 
//Muestra los elementos de Arreglo
	void Mostar(int*A,int elem)
	{
		int i;
		printf("\nLos datos son\n");
		for(int i = 0; i < elem; ++i)
		{
			printf("A[%d]=%d\n",i+1,A[i] );
		}
	}
//Libera el arreglo de la memoria
	void liberar(int*A)
	{
		printf("\n Memoria Libre\n");
		free(A);
	}	
