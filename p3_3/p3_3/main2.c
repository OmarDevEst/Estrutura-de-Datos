#include<stdlib.h>
#include<stdio.h>
#include "main1.h"
#include<math.h>
#include<stdbool.h>

void manejaError(int e)
{
	char* error[]={"Memoria No disponible \n"};
	printf("%s",error[e]);
}


 NAT crearNatural(int x)
 {
 	NAT C;
	C=(NAT)malloc(sizeof(op));
	if(C==NULL)
		{
		manejaError(0);//Mensaje No hay memoria disponible
		exit(0);	
		}

		C->nat1=x;
	return C;
}


 int esCero(NAT C)
 {
  	int x;
 	if(C->nat1==0)x=1;
 	else x=0;
 	return x;
 }

int sucesor(NAT C)
{
int x ;
x=C->nat1+1;
return x;
}

int esMenor(NAT x, NAT y)
{
	int w;
	if(x->nat1 < y->nat1)w=1;
	else w=0;
	return w;
}

int esMAyor(NAT x,NAT y)
{
	int w;
	if(x->nat1 > y->nat1)w=1;
	else w=0;
	return w;
}

 int esMenorIgual(NAT x,NAT y)
 {
 	int w;
	if(x->nat1 <= y->nat1)w=1;
	else w=0;
	return w;
 }




int esMAyorigual(NAT x,NAT y)
{
	int w;
	if(x->nat1 >= y->nat1)w=1;
	else w=0;
	return w;
}

int predecesor(NAT X)
{
	int x ;
	x=X->nat1-1;
	return x;
}

void FREE (NAT x)
{
	free (x);
}