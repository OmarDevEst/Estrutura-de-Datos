#include <stdio.h>
#include<stdlib.h>
#include "complejo.h"
#include <math.h>
void manejaError(int);
void solicitarDatos(COMPLEJO,COMPLEJO);
void mostrarDatos(COMPLEJO);
void mostrarDatos_2(float);
void mostrarDatos_3(COMPLEJO C);
void mostrarDatos_4(COMPLEJO C);
void mostrarDatos_5(COMPLEJO C);
void liberar(COMPLEJO,COMPLEJO,COMPLEJO,COMPLEJO,COMPLEJO,COMPLEJO);

void main()
{
COMPLEJO C1,C2,C3,C5,C6,C7;
float z;
C1=crearComplejo();
C2=crearComplejo();
solicitarDatos(C1,C2);
C3=SUMA(C1,C2);
z=modulo(C1,C2);
C5=resta(C1,C2);
C6=multi(C1,C2);
C7=divi(C1,C2);
mostrarDatos(C3);
mostrarDatos_2(z);
mostrarDatos_3(C5);
mostrarDatos_4(C6);
mostrarDatos_5(C7);
liberar(C1,C2,C3,C5,C6,C7);
}

void manejaError(int e)
{
	char* error[]={"Memoria No disponible \n"};
	printf("%s",error[e]);
}

void solicitarDatos(COMPLEJO C1,COMPLEJO  C2)
{
	float r,i;
	printf("Introduce el valor real e imaginario de Complejo 1\n");
	scanf("%f ",&r);
	scanf("%f",&i);
	C1=asignaReal(C1,r);
	C1=asignaImagi(C1,i);
	

	printf("Introduce el valor real e imaginario de Complejo 2\n");
	scanf("%f ",&r);
	scanf("%f",&i);
	C2=asignaReal(C2,r);
	C2=asignaImagi(C2,i);
}

void mostrarDatos(COMPLEJO C3)
{
	printf("La suma de complejo \n");
	printf("Real %f + Imaginario %f \n",obtenReal(C3),obtenImagi(C3));
}


void mostrarDatos_3(COMPLEJO C5)
{
printf("La resta de complejo \n");
printf("Real %f + Imaginario %f \n",obtenReal(C5),obtenImagi(C5));
}

void mostrarDatos_2(float z)
{
	printf("El modulo de complejo \n");
	printf("Es %f\n",z);
}



void mostrarDatos_4(COMPLEJO C6)
{
printf("La multiplicacion  de complejo \n");
printf("Real %f + Imaginario %f \n",obtenReal(C6),obtenImagi(C6));
}

void mostrarDatos_5(COMPLEJO C7)
{
printf("La division de complejo \n");
printf("Real %f + Imaginario %f \n",obtenReal(C7),obtenImagi(C7));
}






void liberar(COMPLEJO C1,COMPLEJO C2, COMPLEJO C3,COMPLEJO C5,COMPLEJO C6,COMPLEJO C7)
{
	free(C1);
    free(C2);
  	free(C3);
    free(C5);
  	free(C6);
  	free(C7);
}