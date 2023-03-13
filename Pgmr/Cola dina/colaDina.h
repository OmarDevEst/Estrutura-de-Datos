#ifndef _colaDina_
#define _colaDina_

typedef struct Nodo_Cola{
char dato;
struct Nodo_Cola *siguiente;
}Nodo_Cola;

typedef struct{ 
Nodo_Cola * primero;
Nodo_Cola * ultimo;
}Cola;

typedef Cola *COLA;

COLA crearCola();
Nodo_Cola *crearNodoCola();
int es_vaciaCola(COLA C);
char primero(COLA C);
void encolar(COLA C,char e);
char desencolar(COLA C);

#endif