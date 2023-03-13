#ifndef _pila_
#define _pila_
#define TAMPLIA 100
#define TRUE 1
#define FALSE 0

typedef struct 
{
float pila[TAMPLIA];
int tope;	
}Pila;


typedef Pila * PILA;
PILA crearPila();
void manejaError(int);
int es_vaciaPila(PILA);
void apilar(PILA,float);
float desapilar (PILA);
float elemtTope(PILA);

#endif