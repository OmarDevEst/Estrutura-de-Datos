#include<stdio.h> 
#include<stdlib.h>
#include"pilaDina.h"


PILA datosEntrada(PILA P1){
    int x,y,z=1,w;
    while(z==1)	
    {
	printf("Para ingresar dato oprima 1 en caso contrario oprima cualquier otra tecla \n"); 
	scanf("%d",&w);
	if(w==1)
		{
		printf("Ingrese su numero ah apilar:");
        scanf("%d",&y);
        apilar(P1,y);
		}
	else break;
	}
    return P1;
}


void mostrarPilas(PILA P1,PILA P2){
	int x=0,y,z,w=0;
	while(x==0)
	{
		y=desapilar(P1);
        apilar(P2,y);
        if(es_vaciaPila(P1)==TRUE)break;
	}

	printf("Numeros introducidos:");
	while(w==0)
	{
		z=desapilar(P2);
		printf("%d,",z);
		if(es_vaciaPila(P2)==TRUE){w=1;}
	}
	printf("\n");
}

void FREE(PILA P1,PILA P2)
{
free (P1);
free (P2);	
}

void main()
{
	PILA P1,P2;
	P1=crearPila();
	datosEntrada(P1);
    P2=crearPila();
    mostrarPilas(P1,P2);
    FREE(P1,P2);

}