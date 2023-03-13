#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define TAM 100


void leeExpresion(char * cadena)
{
int pos =0;
printf("\nIntroduzca la expresion en Postfija\n");
scanf("%[^\n]",cadena);
}	

//Evaula la expresion

float evalua(char* cadena,PILA S)
{
float a,b,c;
int pos=0;
char op[1];
double conv;
while(cadena[pos]!=00)
	{
	*op = cadena[pos++];
	switch(*op)
		{
		case '+':b=desapilar(S);
				 a=desapilar(S);
				 apilar(S,a+b);
				 break;
		case'-':b=desapilar(S);
				a=desapilar(S);
				apilar(S,a-b);
				break;
		case '*':b=desapilar(S);
				 a=desapilar(S);
				 apilar(S,a*b);
				 break;
		case '/':b=desapilar(S);
				 a=desapilar(S);
				 if(b==0)
				 	{
				 	manejaError(3);
				 	return 0;
				 	break;	
				 	}
				 apilar(S,a/b);
				 break;


		default:conv=atof(op);
				apilar(S,conv);

		}	
	}
return(desapilar(S));			
}

void main()
{
char cadena[TAM];
PILA S;
S=crearPila();
printf("\nEvaluacion de expresiones Postfijas\n");
printf("Operaciones Basicas:Suma,Resta,Producto y Divison\n");
leeExpresion(cadena);
printf("\n\n%s=%.2f\n\n",cadena,evalua(cadena,S));	
}