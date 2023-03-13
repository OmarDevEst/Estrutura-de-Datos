#ifndef  _cola_
#define _cola_
#define TAMCOLA 100
#define TRUE 1
#define FALSE 0

typedef struct 
{
char cola[TAMCOLA];
int primero,ultimo;
int tam;	
}Cola;

typedef Cola * COLA;

COLA crearCola();
void encolar(COLA,char);
int es_vaciaCola(COLA);
char desencolar(COLA);
char primero(COLA);
void manejaError(int);

#endif
