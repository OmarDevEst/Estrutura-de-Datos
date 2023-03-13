
#include<stdlib.h>
#include<stdio.h>
#include "main1.h"
#include<math.h>


NAT scanear1(NAT C1)
{
	int x;
	printf("Ingrese un numero natural pls\n");
	scanf("%d",&x);
	C1=crearNatural(x);
	return C1;
}

void prolblema (NAT C1, NAT C2)
{
int  cero1,cero,menor,menorig,mayor,mayori;
cero=esCero(C1);
cero1=esCero(C2);
menor=esMenor(C1,C2);
menorig=esMenorIgual(C1,C2);
mayor=esMAyor(C1,C2);
mayori=esMAyorigual(C1,C2);
int pr1,pr2,su1,su2;
pr1=predecesor(C1);
pr2=predecesor(C2);
su1=sucesor(C1);
su2=sucesor(C2);

if (cero==1)printf("El valor 1 es 0\n");
if (cero1==1)printf("El valor 2 es 0\n");
if (menor==1)printf("El valor 1 es menor a 2\n");
if (menorig==1)printf("El valor 1 es menor igual 2\n");
if (mayor==1)printf("El valor 1 es mayor 2\n");
if (mayori==1)printf("El valor 1 es mayor igual a 2\n");


printf("Sucesor 1 :%d\n",pr1);
printf("Sucesor 2 :%d\n",pr2);
printf("ANtecesor 1 :%d\n",su1);
printf("Antecsor 2 :%d\n",su2 );
}



int main()
{
	NAT C1,C2;
	C1=scanear1(C1);
	C2=scanear1(C2);
	prolblema(C1,C2);
	FREE(C1);
	FREE(C2);
	return 0;
}
