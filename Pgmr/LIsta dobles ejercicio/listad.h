#ifndef _listaDoble_
#define _listaDoble_

#define TRUE 1
#define FALSE 0

typedef struct Nodo_ListaD
{
	int dato;
	struct Nodo_ListaD *sig;
	struct Nodo_ListaD *ant;
}Nodo_ListaD;

typedef Nodo_ListaD * LISTA_D;

LISTA_D crearListaD();
int es_vaciaListaD(LISTA_D L);
Nodo_ListaD * crearNodoListaD();
LISTA_D insertarD(LISTA_D L,int e);
void mostrarListaD(LISTA_D L);
void buscarElemD(LISTA_D L,int elem);
LISTA_D borrarD(LISTA_D L,int elem);
LISTA_D principio(LISTA_D L,int e);

#endif