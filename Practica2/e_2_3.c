#include <stdio.h>
#include<stdlib.h>

//ESTRUCTURAS
typedef struct datos
{
char nombre[15];
char ap_patern[15];
int edad;
char carrera[20];
}Datos;

typedef struct deportista
{
Datos * pers;
char deporte[30];
int medallas;
}Deportista;

//Prototipos
void s_tamano( int*);
Deportista* c_arreglo(int);
void p_datos(Deportista *dep, int);
void burbuja(Deportista *dep, int);
void h_promedio(Deportista *dep,int tam);
void burbuja(Deportista *dep, int tam);
void imprimir(Deportista *dep, int tam);

int main()
{
	int tam;
	Deportista *dep;
	s_tamano(&tam);
	dep = c_arreglo(tam);
	p_datos(dep,tam);
	h_promedio(dep,tam);
	burbuja(dep, tam);
	imprimir(dep,tam);
}

void s_tamano(int *tam)
{
	printf("Con cuantos deportes tienes ");
	scanf("%d",tam);
}

Deportista * c_arreglo(int tam)
{
	Deportista *dep;
	dep=(Deportista*)malloc((tam)*sizeof(Deportista));
	
	int num=0;
	for (int i = 0; i < tam; ++i)
	{
	 printf("\nComo se llama el deporte[%d]\n",i+1);
	 getchar();
	 scanf("%[^\n]",dep[i].deporte);
	 getchar();
	 printf("\nCuantas medallas tiene \n");
	 scanf("%d",&dep[i].medallas);
	}
	return dep;
	

}

void p_datos(Deportista *dep,int tam )
{

	
	for (int i = 0; i < tam; ++i)
	{
		dep[i].pers=(Datos*)malloc((1)*sizeof(Datos));
		printf("\nDame el nombre del jugador de %s\n",dep[i].deporte);
		printf("Ingrese nombre:");
		getchar();
		scanf("%[^\n]",dep[i].pers->nombre);
		getchar();

		printf("Ingrese apellido paterno:");
		scanf("%[^\n]",dep[i].pers->ap_patern);
		getchar();

		printf("Ingrese edad:");
		scanf("%d",&dep[i].pers->edad);
		getchar();

		

		printf("Ingrese carrera:");
		scanf("%[^\n]",dep[i].pers->carrera);
		

	}
}

void h_promedio(Deportista *dep,int tam)
{
	int c=0,p=0;
	for (int i = 0; i < tam; ++i)
	{
		c=dep[i].medallas+c;
	}
	p=c/tam;
	printf("\nEl promedio de medallas es:%d\n",p);

}

void burbuja(Deportista *dep, int tam)
{
	Deportista aux;

	for(int i=1; i<tam; i++)

	{

		for(int j=0; j<tam-i; j++)

		{

			if(dep[j].medallas < dep[j+1].medallas)

			{

			    aux  = dep[j+1];

				dep[j+1]=dep[j];

				dep[j] = aux;

			}

		}
	}
}

void imprimir(Deportista *dep, int tam)
{
	printf("\nMas medallas es:%s  Carrera:%s \n",dep[0].pers->nombre,dep[0].pers->carrera);
	printf("\nMenos medallas es:%s  Carrera:%s \n",dep[tam-1].pers->nombre,dep[tam-1].pers->carrera);
}