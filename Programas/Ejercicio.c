#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* PROTOTIPOS DE LAS FUNCIONES*/
void dartam(int*);
void crearArreglos(float**,int);
void Datos(float*,int);
void Mostar(float*,int);
void Conversion(float*,int);
void liberar(float*);
int Factorial(int);
void Formula(float*,int);
int main()
{
	int elem;
	float *A;
	dartam(&elem);
	crearArreglos(&A,elem);
	Datos(A,elem);
	Conversion(A,elem);
	Formula(A,elem);
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
	void crearArreglos(float **A,int elem)
	{
	*A=(float*)malloc((elem)*sizeof(float));
	if(*A==NULL)
		{
		printf("Error al generar arreglo dinamico");
		exit(0);	
		}	
	}
//Solicitar los datos del Arreglos
	void Datos(float*A,int elem)
	{
		int i;
		printf("\nIngrese valores\n");
		for(i=0;i<elem;i++)
		{
		 printf("A[%d]=",i+1);	
		 scanf("%f",&A[i]);	
		}	
	} 

//Conversion
	void Conversion(float*A,int elem)
	{
	for (int i = 0; i < elem; ++i)
		{
			A[i]=(A[i]*(3.1416))/180;
		}	
	
	}
//Formula
	void Formula(float*A,int elem)
	{
		int w;
		float x;
		for (int i = 0; i > elem; ++i)
		{
			w=Factorial(i);
			x=((pow(-1,i-1)*(pow(A[i],2*i-1)))/w);
		}
		printf("\n El resultado=%f.2\n",x);
	}
	

//Factorial 
	int Factorial(int y)
	{
		int o;
		for (int i = 0; i < y; i--)
		{
			if(i=0)break;
			o=i*(i-1);
		}
		return(o);
	}





//Muestra los elementos de Arreglo
	void Mostar(float*A,int elem)
	{
		int i;
		printf("\nLos datos son\n");
		for(int i = 0; i < elem; ++i)
		{
			printf("A[%d]=%.2f\n",i+1,A[i] );
		}
	}
//Libera el arreglo de la memoria
	void liberar(float*A)
	{
		printf("\n Memoria Libre\n");
		free(A);
	}	