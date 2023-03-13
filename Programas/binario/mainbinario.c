#include <stdlib.h>
#include <stdio.h>
#include "binario.h"
#include <math.h>


BINARIO leerDim(BINARIO B1,BINARIO B2)
{
	int x;
	printf("Introduce el no de bits que tiene tu numero\n");
	scanf("%d",&x);
	B1=crearBinario(x);
	return B1;
}
BINARIO cre2(BINARIO B1)
{
	BINARIO B2;
	int x;
	x=tamano(B1);
	B2=crearBinario(x);
	return B2;

}


void llenaroBinario(BINARIO B1,BINARIO B2)
{
	printf("introduce el numero 1 bit x bit \n");
	int x,y,w,f;
	x=tamano(B1);
	x=x-1;
	y=tamano(B1);
	for (int i = 0; i < y; ++i)
	{
		printf("Bit[%d]",x+1);
		x=x-1;
		scanf("%d",&f);
		ponComponente(B1,f,i);
	}
	printf("introduce el numero 1 bit x bit \n");
	w=tamano(B1);
	w=w-1;
	for (int i = 0; i < y; ++i)
	{
		printf("Bit[%d]",w+1);
		w=w-1;
		scanf("%d",&f);
		ponComponente(B1,f,i);
	}

}

int sumabin(BINARIO B1,BINARIO B2)
{
	int x,w,f,ax=0,ay=0,r,y;
	x=tamano(B1);
	x=x-1;
	y=tamano(B1);
	
	for (int i = 0; i < y; ++i)
	{	
	f=obtenComponente(B1,i);
	ax=f*(pow(2,x))+ax;
	x=x-1;
	}

	for (int i = 0; i < y; ++i)
	{	
	f=obtenComponente(B2,i);
	ay=f*(pow(2,x))+ax;
	x=x-1;
	}

	r=ax+ay;
	return r;

}

int restabin(BINARIO B1,BINARIO B2)
{
	int x,w,f,ax=0,ay=0,r,y;
	x=x-1;
	y=tamano(B1);
	
	for (int i = 0; i < y; ++i)
	{	
	f=obtenComponente(B1,i);
	ax=f*(pow(2,x))+ax;
	x=x-1;
	}

	for (int i = 0; i < y; ++i)
	{	
	f=obtenComponente(B2,i);
	ay=f*(pow(2,x))+ax;
	x=x-1;
	}

	r=ax-ay;
	printf("ax:%d y ay:%d\n",ax,ay);
	return r;

}

void mostrar(BINARIO B1,BINARIO B2,int r1,int r2)
{
	int tam,x;
	tam=tamano(B1);
	printf("Binario 1\n");
	for (int i = 0; i <tam; ++i)
	{
	x=obtenComponente(B1,i);
	printf("%d",x);
	}
	
	printf("\nBinario 2\n");
	for ( int i = 0; i <tam; ++i)
	{
	x=obtenComponente(B2,i);
	printf("%d",x);
	}
	
	printf("\nLa suma es:\n");
	int n,m,a[tam+5];
	n=r1;
	int w=0;
	while(n>0)
	{
	a[w]=n%2;
	n/=2;
	w++;	
	}
	for(int j=w-1; j>=0;--j)
	{
	printf("%d",a[j]);	
	}


	printf("\nLa resta es:\n");
	n=r2;
	w=0;	
	while(n>0)
	{
	a[w]=n%2;
	n/=2;
	w++;	
	}
	for(int j=w-1; j>=0;--j)
	{
	printf("%d",a[j]);	
	}


}

int main()
{
	int r1,r2;
	BINARIO B1,B2;
	B1=leerDim(B1,B2);
	B2=cre2(B1);
	llenaroBinario(B1,B2);
	r1=sumabin(B1,B2);
	r2=restabin(B1,B2);
	mostrar(B1,B2,r1,r2);
	return 0;
}

