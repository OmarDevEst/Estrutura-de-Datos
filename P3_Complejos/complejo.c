#include<stdlib.h>
#include<stdio.h>
#include "complejo.h"
#include<math.h>

void manejaError(int);

COMPLEJO crearComplejo()
{
	COMPLEJO C;
	C=(COMPLEJO)malloc(sizeof(Complejo));
	if(C==NULL)
		{
		manejaError(0);//Mensaje No hay memoria disponible
		exit(0);	
		}
	return C;
}

COMPLEJO asignaImagi (COMPLEJO C,float i)
{
	C->imagi=i;
	return C;
}


COMPLEJO asignaReal (COMPLEJO C,float i)
{
	C->real=i;
	return C;
}


float obtenReal(COMPLEJO C)
{
 	return(C->real);
}

float obtenImagi(COMPLEJO C)
{
 	return(C->imagi);
}




 COMPLEJO SUMA(COMPLEJO C1,COMPLEJO C2)
 {
 	COMPLEJO C3;

 	C3=crearComplejo();

 	C3=asignaReal(C3,obtenReal(C1)+obtenReal(C2));
 	
 	C3=asignaImagi(C3,obtenImagi(C1)+obtenImagi(C2));
 	return C3;
 }

 float modulo(COMPLEJO C1 ,COMPLEJO C2)
 {
 	COMPLEJO C4;

 	C4=crearComplejo();

 	C4=asignaReal(C4,obtenReal(C1)+obtenReal(C2));
 	
 	C4=asignaImagi(C4,obtenImagi(C1)+obtenImagi(C2));

 	float y,x,z;

 	x=pow(obtenReal(C4),2);
 	y=pow(obtenReal(C4),2);
 	z=x+y
 	z=pow(z,1/2);
	
	free(C4);
 	return z;
 }

 COMPLEJO resta(COMPLEJO C1 ,COMPLEJO C2)
 {
 	COMPLEJO C5;
 	C5=crearComplejo();
 	C5=asignaReal(C5,obtenReal(C1)-obtenReal(C2));
 	C5=asignaImagi(C5,obtenImagi(C1)-obtenImagi(C2));
 	return C5;
 }

 COMPLEJO multi(COMPLEJO C1 ,COMPLEJO C2)
 {
 	COMPLEJO C6;
 	C6=crearComplejo();
 	C6=asignaReal(C6,obtenReal(C1)*obtenReal(C2));
 	C6=asignaImagi(C6,obtenImagi(C1)*obtenImagi(C2));
 	return C6;
 }

  COMPLEJO divi(COMPLEJO C1 ,COMPLEJO C2)
 {
 	COMPLEJO C7;
 	C7=crearComplejo();
 	C7=asignaReal(C7,obtenReal(C1)/obtenReal(C2));
 	C7=asignaImagi(C7,obtenImagi(C1)/obtenImagi(C2));
 	return C7;
 }




