#include <stdio.h>
#include <stdlib.h>
//PROTOTIPOS
int scaneo (int);
void trabajo(int,char*);
void crearArreglos(char**,int);


int main()
{
	int tam,basura;
	char *B;
	tam =scaneo(basura);
	crearArreglos(&B,tam);
	trabajo(tam,B);
}
//SCANEO SCANEO SCANEO SCANEO 
int scaneo (int basura)
{
	int tam;
	printf("Dame el numero de letras que tendra tu oracion:");
	scanf("%d",&tam);
	return (tam);
}

//CHAMBA CHAMBA CHAMBA CHAMBA CHAMBA CHAMBA
void trabajo(int tam,char*B)
{
	char A[tam];
	printf("Tu cadena usuario hermoso:");
	getchar();
	scanf("%[^\n]",A);
	getchar();

	int w=0;
	

	for (int i = 0; i < tam; i++)
	{
		if(A[i]=00)
		{
			B[w]=00;
		}

		if(A[i]==65)
		{
			B[w]=A[i];
			A[i]=42;
			w++;
		}

	}
	printf("La cadena 1 :%s\n",A);
	printf("La cadena 2 :%s\n",B);
}

//Crear el arreglo MOD EN CASO DE FLOATS O INT
	void crearArreglos(char **A,int elem)
	{
	*A=(char*)malloc((elem)*sizeof(char));
	if(*A==NULL)
		{
		printf("Error al generar arreglo dinamico");
		exit(0);	
		}	
	}