#include <stdlib.h>
#include <stdio.h>
#include "binario.h"

void menu(BINARIO, BINARIO, BINARIO);
void suma(BINARIO, BINARIO, BINARIO);
void leerDim(BINARIO, BINARIO, BINARIO);
BINARIO llenarBinario(BINARIO);

void main(){
	BINARIO Br, B1, B2;
	menu(Br, B1, B2);
}

void menu(BINARIO Br, BINARIO B1, BINARIO B2){
	int opcion;
	do{
		printf("1.suma\n2.resta\n3.salir\n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:{
				printf("suma\n");
				leerDim(B1, B2, Br);
				llenarBinario(B1);
				llenarBinario(B2);
				break;
			}
			case 2:{

				break;
			}
		}
	}while(opcion==1||opcion==2);
}

void leerDim(BINARIO B1, BINARIO B2, BINARIO Br){
	int tamano;
	printf("tamano de los numeros binarios: \n");
	scanf("%d", &tamano);

	B1=crearBinario(tamano);
	B2=crearBinario(tamano);
	Br=crearBinario(tamano+1);
}

BINARIO llenarBinario(BINARIO B){
	int i;
	printf("introduzca cada elemento seguido de un enter: \n");
	for(i=0; i<B->size; i++){
		scanf("%d", &B->num[i]);
	}
	return B;
}