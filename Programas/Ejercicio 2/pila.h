#ifndef _pila_
#define _pila_
#define TAMPLIA 100
#define TRUE 1
#define FALSE 0

typedef struct 
{
int pila [TAMPLIA];
int tope;	
}Pila;

typedef Pila * PILA;
PILA crearPila();
int es_vaciaPila(PILA);
void apilar(PILA,int);
int desapilar (PILA);
int elemtTope(PILA);

#endif