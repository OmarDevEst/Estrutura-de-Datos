#ifndef _listaSimple_
#define _listaSimple_

#define TRUE 1
#define FALSE 0

typedef struct Nodo_Lista
{
int dato;
struct Nodo_Lista * siguiente;
}Nodo_Lista;

typedef Nodo_Lista * LISTA;

LISTA crearLista();
Nodo_Lista * crearNodoLista();
int es_vaciaLista(LISTA L);
LISTA insertar(LISTA L,int e);
LISTA principio(LISTA,int e);
void buscarElem(LISTA L,int e);
LISTA elimina(LISTA L,int e);
void mostrarLista(LISTA L);

#endif