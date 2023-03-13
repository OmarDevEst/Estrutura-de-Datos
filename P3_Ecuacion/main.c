#include<stdlib.h>
#include<stdio.h>
#include "ecuacion.h"
#include<math.h>


void manejaError(int e)
{
	char* error[]={"Memoria No disponible \n"};
	printf("%s",error[e]);
}


ECUA crearEcuac()
{
	ECUA C;
	C=(ECUA)malloc(sizeof(Ecua));
	if(C==NULL)
		{
		manejaError(0);//Mensaje No hay memoria disponible
		exit(0);	
		}
	return C;
}

ECUA PONA (ECUA C,float a)
{
C->cua=a;
return C;
}

ECUA PONB (ECUA C,float b)
{
C->lin=b;
return C;
}


ECUA PONC (ECUA C,float c)
{
C->com=c;
return C;
}


float OBTENA (ECUA C)
{
return(C->cua);
}


float OBTENB (ECUA C)
{
return(C->lin);
}


float OBTENC (ECUA C)
{
return(C->com);
}


void FREE(ECUA C)
{
free (C);
}