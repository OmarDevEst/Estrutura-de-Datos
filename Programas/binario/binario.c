#include <stdio.h>
#include <stdlib.h>
#include "binario.h"
#include <math.h>

BINARIO crearBinario(int tamano){
	BINARIO B;
	B=(BINARIO)malloc(sizeof(Binario));
	if(B==NULL){
		//manejaError(0);
		printf("no\n");
		exit(0);
	}

	B->tam=(int*)malloc(sizeof(int));
	if(B==NULL){
		//manejaError(0);
		printf("no\n");
		exit(0);}


	B->size=tamano;
	return B;
}

int obtenComponente(BINARIO B, int elemento){
	int i;

	i=B->tam[elemento];
	return i;
}

BINARIO ponComponente(BINARIO B, int elemento, int posicion){
	B->tam[posicion]=elemento;
	return B;
}

int tamano(BINARIO B){
	return B->size;
}