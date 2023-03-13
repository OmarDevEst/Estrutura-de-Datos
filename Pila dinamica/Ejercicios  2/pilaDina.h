//Definiciones del TAD
#ifndef _pilaDina_
#define _pila_Dina_

#define TRUE 1
#define FALSE 0

typedef struct Nodo_Pila
{
int dato;
struct Nodo_Pila *anterior;
}Nodo_Pila;

typedef struct 
{
Nodo_Pila *tope;	
}Pila;

typedef Pila * PILA;

void manejaError(int);
PILA datosEntrada(PILA);
void mostrarPilas(PILA,PILA);
PILA crearPila();
int es_vaciaPila(PILA);
void apilar(PILA,int);
int desapilar(PILA);
int elemTope(PILA);

#endif