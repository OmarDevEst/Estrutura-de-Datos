
//Definiciones del TAD
#ifndef _pilaDina_
#define _pilaDina_

#define TRUE 1
#define FALSE 0
#define TAM 100



typedef struct practica
{
	char nombre[TAM];
 	char materia[TAM];
 	char tema[TAM];
 	int	hojas;	
}PRAC;

typedef struct Nodo_Pila
{
PRAC *dato;
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
void apilar(PILA,PRAC*);
PRAC * desapilar(PILA);
PRAC *elemTope(PILA);

#endif