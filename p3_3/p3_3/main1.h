#ifndef _TAD_
#define _TAD_

typedef struct 
{
	int nat1;
}op;

typedef op * NAT;
NAT crearNatural( int );
int esCero(NAT);
int sucesor(NAT); 
int esMenor(NAT x, NAT y);
int esMenorIgual(NAT x,NAT y);
int esMAyor(NAT x,NAT y);
int esMAyorigual(NAT x,NAT y);
int predecesor(NAT x);
void FREE (NAT);

#endif