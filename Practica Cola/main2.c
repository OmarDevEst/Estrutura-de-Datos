#include<stdio.h>
#include<stdlib.h>
#include"mainh.h"
#include<math.h>

int escanear ()
{
printf("Bienvenido al progama para comprobar si su numero es tapicua\n");	
int x;
printf("Inserte su numero:");
scanf("%d",&x);
return x;
}

int descompocion(PILA P,COLA C,int x)
{
	if (x<0)
	{
	printf("Este progama no acepta numeros negativos");
	exit(0);
	}

	if(x<10 && x>0)
	{
	printf("Numero demasiado pequeño\n");
	exit(0);	
	}
	
	if(x>9 && x<100)
	{
	int d,u;
	d=x/10;
	u=(x-(d*10));
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}


	if(x>99 && x<1000)
	{
	int c,d,u;
	c=(x/pow(10,2));
	d=(x-(c*pow(10,2)))/pow(10,1);
	u=(x-(c*pow(10,2))-(d*10));
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}

	if(x>999 && x<10000)
	{
	int m,c,d,u;
	m=(x/pow(10,3));
	c=(x-(m*pow(10,3)))/pow(10,2);
	d=(x-(m*pow(10,3))-(c*pow(10,2)))/pow(10,1);
	u=(x-(m*pow(10,3))-(c*pow(10,2))-(d*10));
	encolar(C,m);
	apilar(P,m);
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}

	if(x>9999 && x<100000)
	{
	int dm,m,c,d,u;
	dm=(x/pow(10,4));
	m=(x-(dm*pow(10,4)))/pow(10,3);
	c=(x-(dm*pow(10,4))-(m*pow(10,3)))/pow(10,2);
	d=(x-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2)))/pow(10,1);
	u=(x-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2))-(d*10));
	apilar(P,dm);
	encolar(C,dm);
	encolar(C,m);
	apilar(P,m);
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}

	if(x>99999 && x<1000000)
	{
	int cm,dm,m,c,d,u;
	cm=(x)/pow(10,5);
	dm=(x-(cm*pow(10,5)))/pow(10,4);
	m=(x-(cm*pow(10,5))-(dm*pow(10,4)))/pow(10,3);
	c=(x-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3)))/pow(10,2);
	d=(x-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2)))/pow(10,1);
	u=(x-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2))-(d*10));
	apilar(P,cm);
	encolar(C,cm);
	apilar(P,dm);
	encolar(C,dm);
	encolar(C,m);
	apilar(P,m);
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}

	if(x>999999 && x<10000000)
	{
	int M,cm,dm,m,c,d,u;
	M=(x)/pow(10,6);
	cm=(x-(M*pow(10,6)))/pow(10,5);
	dm=(x-(M*pow(10,6))-(cm*pow(10,5)))/pow(10,4);
	m=(x-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4)))/pow(10,3);
	c=(x-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3)))/pow(10,2);
	d=(x-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2)))/pow(10,1);
	u=(x-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2))-(d*10));
	apilar(P,M);
	encolar(C,M);
	apilar(P,cm);
	encolar(C,cm);
	apilar(P,dm);
	encolar(C,dm);
	encolar(C,m);
	apilar(P,m);
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}

	if(x>9999999 && x<100000000)
	{
	int dM,M,cm,dm,m,c,d,u;
	dM=(x/pow(10,7));
	M=(x-(dM*pow(10,7)))/pow(10,6);
	cm=(x-(dM*pow(10,7))-(M*pow(10,6)))/pow(10,5);
	dm=(x-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5)))/pow(10,4);
	m=(x-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4)))/pow(10,3);
	c=(x-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3)))/pow(10,2);
	d=(x-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2)))/pow(10,1);
	u=(x-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2))-(d*10));
	
	apilar(P,dM);
	encolar(C,dM);
	apilar(P,M);
	encolar(C,M);
	apilar(P,cm);
	encolar(C,cm);
	apilar(P,dm);
	encolar(C,dm);
	encolar(C,m);
	apilar(P,m);
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}


	if(x>99999999 && x<1000000000)
	{
	int CM,dM,M,cm,dm,m,c,d,u;
	CM=((x)/pow(10,8));
	dM=(x-(CM*pow(10,8)))/pow(10,7);
	M=(x-(CM*pow(10,8))-(dM*pow(10,7)))/pow(10,6);
	cm=(x-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6)))/pow(10,5);
	dm=(x-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5)))/pow(10,4);
	m=(x-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4)))/pow(10,3);
	c=(x-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3)))/pow(10,2);
	d=(x-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2)))/pow(10,1);
	u=(x-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2))-(d*10));
	
	apilar(P,CM);
	encolar(C,CM);
	apilar(P,dM);
	encolar(C,dM);
	apilar(P,M);
	encolar(C,M);
	apilar(P,cm);
	encolar(C,cm);
	apilar(P,dm);
	encolar(C,dm);
	encolar(C,m);
	apilar(P,m);
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}

	if(x>999999999 && x<10000000000)
	{
	int B,CM,dM,M,cm,dm,m,c,d,u;
	B=x/pow(10,9);
	CM=(x-(B*pow(10,9)))/pow(10,8);
	dM=(x-(B*pow(10,9))-(CM*pow(10,8)))/pow(10,7);
	M=(x-(B*pow(10,9))-(CM*pow(10,8))-(dM*pow(10,7)))/pow(10,6);
	cm=(x-(B*pow(10,9))-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6)))/pow(10,5);
	dm=(x-(B*pow(10,9))-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5)))/pow(10,4);
	m=(x-(B*pow(10,9))-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4)))/pow(10,3);
	c=(x-(B*pow(10,9))-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3)))/pow(10,2);
	d=(x-(B*pow(10,9))-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2)))/pow(10,1);
	u=(x-(B*pow(10,9))-(CM*pow(10,8))-(dM*pow(10,7))-(M*pow(10,6))-(cm*pow(10,5))-(dm*pow(10,4))-(m*pow(10,3))-(c*pow(10,2))-(d*10));

	apilar(P,B);
	encolar(C,B);
	apilar(P,CM);
	encolar(C,CM);
	apilar(P,dM);
	encolar(C,dM);
	apilar(P,M);
	encolar(C,M);
	apilar(P,cm);
	encolar(C,cm);
	apilar(P,dm);
	encolar(C,dm);
	encolar(C,m);
	apilar(P,m);
	encolar(C,c);
	apilar(P,c);
	encolar(C,d);
	apilar(P,d);
	encolar(C,u);
	apilar(P,u);	
	}
}

int verificacion(PILA P, COLA C)
{
int a,b;
int w=TRUE;
for (int i = 0; i < 99; ++i)
	{
		if(es_vaciaCola(C)==TRUE)break;
		a=desencolar(C);
		b=desapilar(P);
		if(a!=b)
		{
		w=FALSE;	
		}
	}
 return w;
}
void impresion(int x,int O)
{
if(O==TRUE)printf("%d es capicua\n",x);
if(O==FALSE)printf("%d no es capicua\n",x);
}
void FREE(PILA P,COLA C)
{
free(P);
free(C);	
}

void  main()
{
	int O;
	int x;
	PILA P;
	COLA C;
	P=crearPila();
	C=crearCola();
	x=escanear();
	descompocion(P,C,x);
	O=verificacion(P,C);
	impresion(x,O);
	FREE(P,C);
}