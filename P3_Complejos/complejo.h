#ifndef _complejo_
#define _complejo_


typedef struct 
{
float real;
float imagi;	
}Complejo;

typedef Complejo * COMPLEJO;

COMPLEJO crearComplejo();
COMPLEJO asignaReal(COMPLEJO, float r);
COMPLEJO asignaImagi(COMPLEJO, float i);
float obtenReal(COMPLEJO);
float obtenImagi(COMPLEJO);
COMPLEJO SUMA(COMPLEJO,COMPLEJO);
COMPLEJO resta(COMPLEJO,COMPLEJO);
float modulo(COMPLEJO,COMPLEJO);
COMPLEJO multi(COMPLEJO,COMPLEJO);
COMPLEJO divi(COMPLEJO,COMPLEJO);

 #endif