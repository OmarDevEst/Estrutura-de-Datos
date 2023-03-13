#ifndef _ecuacion_
#define _ecuacion_

typedef struct 
{
float cua;
float lin;
float com;	
}Ecua;

typedef Ecua * ECUA;

 ECUA crearEcuac();
 ECUA PONA(ECUA,float);
 ECUA PONB(ECUA,float);
 ECUA PONC(ECUA,float);
 float OBTENA(ECUA);
 float OBTENB(ECUA);
 float OBTENC(ECUA);
 void FREE(ECUA);