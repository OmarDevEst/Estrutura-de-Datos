#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
char nombre[15];
int antiguedad;
float * ventas;	
}T_empleado;

int darTam(int n);
T_empleado* crearEmpleados(int n);
void solicitaDatos(T_empleado *ap,int n);
float * promedioVentas(int n,T_empleado * ap);
void mayorTiempo (int n,T_empleado*ap);
void ventas(float**ap);
void mostar(float *n,int,T_empleado *ap);
void auxprom(float **ap,int n);

main()
{
int n;
T_empleado *ap;
float *promedio;
n = darTam(n);
ap = crearEmpleados(n);
solicitaDatos(ap,n);
promedio=promedioVentas(n,ap);
mayorTiempo(n,ap);
mostar(promedio,n,ap);

}


int darTam(int n)
{
	printf("Dame el numero de empleados a registar:");
	scanf("%d",&n);
	return n;
}




T_empleado* crearEmpleados(int n)
{
	T_empleado *ap;
	ap=(T_empleado*)malloc((n)*sizeof(T_empleado));
	return ap;
}


void solicitaDatos(T_empleado *ap,int n)
{
	int w=3;
	for (int i = 0; i < n; ++i)
		{
		printf("Ingrese el nombre del empleado[%d]:",i+1);
		getchar();
		scanf("%[^\n]",ap[i].nombre);
		printf("Ingrese su antiguedad:");
		scanf("%d",&ap[i].antiguedad);
		ventas(&ap[i].ventas);
			
			for (int j = 0; j < w; ++j)
			{
			printf("Inserte la venta [%d]:",j+1 );
			scanf("%f",&ap[i].ventas[j]);
			}

		}
}
void ventas(float**ap)
{
 *ap=(float*)malloc(sizeof(float)*3);
}







float * promedioVentas(int n,T_empleado * ap)
{
float acum=0;
int w=3;
float *promedio;
auxprom(&promedio,n);


for (int i = 0; i < n; ++i)
	{
	for (int j = 0; j < w; ++j)
		{

		acum+=(ap[i].ventas[j]);
		}
		promedio[i]=acum/w;
		acum=0;
	}
return promedio;	
}


void auxprom(float **ap,int n)
{
*ap=(float*)malloc(sizeof(float)*n);
}



void mayorTiempo (int n,T_empleado*ap)
{

	T_empleado aux;

	for(int i=1; i<n; i++)

	{

		for(int j=0; j<n-1; j++)

		{

			if(ap[j].antiguedad < ap[j+1].antiguedad)

			{

			    aux  = ap[j+1];

				ap[j+1]=ap[j];

				ap[j] = aux;

			}

		}
	}
}	




void mostar(float *promedio ,int n,T_empleado * ap)
{
printf("\nEl empleado con mayor antiguedad es %s\n",ap[0].nombre);	
for (int i = 0; i < n; ++i)
	{
	printf("\nEl promedio de ventas del empleado[%d] es :%f\n",i+1,promedio[i]); 
	}	
}
