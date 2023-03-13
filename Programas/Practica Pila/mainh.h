#ifndef _pila_
#define _pila_
#define TAM 100
#define TRUE 1
#define FALSE 0

typedef struct 
{
int pila [TAM];
int tope;	
}Pila;

typedef Pila * PILA;
PILA crearPila();
int es_vaciaPila(PILA);
void apilar(PILA,int);
int desapilar (PILA);
int elemtTope(PILA);

//funciones Pila
typedef struct 
{
int cola[TAM];
int primero,ultimo;
int tam;	
}Cola;

typedef Cola * COLA;

COLA crearCola();
void encolar(COLA,char);
int es_vaciaCola(COLA);
int desencolar(COLA);
int primero(COLA);
void manejaError(int);


#endif