#ifndef _binario_
#define _binario_

typedef struct {
	int size;
	int *tam;
}Binario;

typedef Binario * BINARIO; 

BINARIO crearBinario(int);
int obtenComponente(BINARIO, int);
BINARIO ponComponente(BINARIO, int, int);
int tamano(BINARIO);

#endif