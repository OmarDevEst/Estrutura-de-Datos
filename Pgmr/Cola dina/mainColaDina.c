#include<stdio.h>
#include<stdlib.h>
#include"colaDina.h"
#define TRUE 1
#define FALSE 0






void leerdatos(COLA C)
{
int a=0;
char x;
while (a==0)
	{
	printf("Ingrese su caracter ah apilar:");
	scanf("%c",&x);
	encolar(C,x);
	printf("Si desa ingresar mas elementos oprima 0\n");
	scanf("%d",&a);
	getchar();
	}	
}
char maxCola(COLA C1,COLA C2)
{
char MAX,AUX;
int x=0;	
MAX=desencolar(C1);
encolar(C2,MAX);
while(x==0)
	{
	if(es_vaciaCola(C1)==TRUE)break;		
	AUX=desencolar(C1);	
	if(MAX < AUX)
		{
		MAX=AUX;	
		}
	encolar(C2,AUX);	
	}
return MAX;	
}

void mostrarCola(COLA C, char MAX){ 
int aux;
int x=1;
printf("**********************************************************************\n");
printf("La letra maxima es:%c\n",MAX);
printf("Los elementos son:"); 
while(x==1)
{
if(es_vaciaCola(C)==TRUE)
	{
	break;
	}
aux=desencolar(C);
printf("%c,",aux);      
}
printf("\n");
printf("**********************************************************************\n");
}

void FREE(COLA C)
{
free(C);
}

void main()
{
COLA C1,C2;
char MAX;
C1=crearCola();
C2=crearCola();
leerdatos(C1);
MAX=maxCola(C1,C2);
mostrarCola(C2,MAX);
FREE(C1);
}