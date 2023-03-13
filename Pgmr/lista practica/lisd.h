#ifndef _listaDoble_
#define _listaDoble_

#define TRUE 1
#define FALSE 0

typedef struct Nodo_ListaD
{
	int mat;
	char nom[100];
	int cal;
	struct Nodo_ListaD *sig;
	struct Nodo_ListaD *ant;
}Nodo_ListaD;

typedef Nodo_ListaD * LISTA_D;

LISTA_D crearListaD();
int es_vaciaListaD(LISTA_D L);
Nodo_ListaD * crearNodoListaD();
void mostrarListaD(LISTA_D L);
LISTA_D borrarD(LISTA_D L,int elem);
LISTA_D principio(LISTA_D L,int mat,char *nom,int cal);
void promedio(LISTA_D L);
void ImostrarListaD(LISTA_D L);

#endif