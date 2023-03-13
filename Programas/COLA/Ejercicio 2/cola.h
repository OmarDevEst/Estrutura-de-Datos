#ifndef  _cola_
#define _cola_
#define TAMCOLA 100
#define TRUE 1
#define FALSE 0

typedef struct 
{
int cola[TAMCOLA];
int primero,ultimo;
int tam;	
}Cola;

typedef Cola * COLA;

COLA crearCola();
void encolar(COLA,int);
int es_vaciaCola(COLA);
int desencolar(COLA);
int primero(COLA);
void manejaError(int);

#endif
