#include<stdlib.h>
#include<stdio.h>
#include "ecuacion.h"
#include<math.h>

void scanear(ECUA C)
{
	float a,b,c;
	printf("Introduzca el Valor cuadratico:");
	scanf("%f",&a);
	PONA(C,a);
	printf("Introduzca el Valor lineal:");
	scanf("%f",&b);
	PONB(C,b);
	printf("Introduzca el Valor complemento:");
	scanf("%f",&c);
	PONC(C,c);
}

float Creadiscrimina(ECUA C)
{
	float a,b,ce,d,w,y,Z;
	a=OBTENA(C);
	b=OBTENB(C);
	ce=OBTENC(C);
	d=((4)*(a)*(ce));
	d=pow(b,2)-d;
	
	return d;

}

void formula(ECUA C, float d)
{
float a,b,ce;
a=OBTENA(C);
b=OBTENB(C);
ce=OBTENC(C);
float x,y,w;
if(d<0)
{
 	d=(d*(-1));
 	printf("***Solucion Doble Imaginaria***\n");
	d=pow(d,1/2);
	x=b+d;
	x=x/(2*a);
	y=b-d;
	y=x/(2*a);
	printf("La solucion 1 es:%f i\n",x);
	printf("La solucion 2 es:%f i\n",y);

}

if(d>0)
	{
	printf("***Solucion Doble***\n");
	d=sqrt(d);
	x=-b+d;
	x=x/(2*a);
	y=-b-d;
	y=y/(2*a);
	printf("La solucion 1 es:%f\n",x);
	printf("La solucion 2 es:%f\n",y);
	}
	
if(d==0)	
	{
	printf("***Solucion unica***\n");
	x=(-b/(2*a));
	printf("La solucion es %f\n",x);	
	}

}



void main()
{
	float d;
	ECUA C;
	C=crearEcuac();
	scanear(C);
	d=Creadiscrimina(C);
	formula(C,d);
	FREE(C);
}