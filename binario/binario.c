#include <stdio.h>
#include <stdlib.h>
#include "binario.h"

BINARIO crearBinario(int tamano){
	BINARIO B;
	B=(BINARIO)malloc(sizeof(Binario));
	if(B==NULL){
		//manejaError(0);
		printf("no\n");
		exit(0);
	}
	B->size=tamano;
	return B;
}

int obtenComponente(BINARIO B, int elemento){
	int i;
	for(i=0; i<B->size; i++){
		if(i==elemento){
			return i+1;
		}
	}
}

BINARIO ponComponente(BINARIO B, int elemento, int posicion){
	B->num[posicion-1]=elemento;
	return B;
}

int tamano(BINARIO B){
	return B->size;
}