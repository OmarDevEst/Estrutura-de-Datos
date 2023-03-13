#ifndef _listaSimple_
#define _listaSimple_

#define TRUE 1
#define FALSE 0

typedef struct Nodo_Lista
{
int cof;
int exp;
struct Nodo_Lista * siguiente;
}Nodo_Lista;

typedef Nodo_Lista * LISTA;

LISTA crearLista();
Nodo_Lista * crearNodoLista();
int es_vaciaLista(LISTA L);
LISTA insertar(LISTA L,int e,int e1);
void mostrarLista(LISTA L);
LISTA derivadafun(LISTA L);
void suma(LISTA L1,LISTA L2);
void producto(LISTA L1,LISTA L2);
#endif