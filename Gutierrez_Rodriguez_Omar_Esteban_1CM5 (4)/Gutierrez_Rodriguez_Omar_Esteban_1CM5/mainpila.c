#include<stdio.h> 
#include<stdlib.h>
#include"pila.h"


PILA leerdatos(PILA P1){
    int w=1,z=1;
    char y;
    while(z==1)	
    {
	printf("Para ingresar dato oprima 1 en caso contrario oprima cualquier otra tecla \n"); 
	scanf("%d",&w);
	if(w==1)
		{
		printf("Ingrese su letra ah apilar:");
        getchar();
        scanf("%c",&y);
        apilar(P1,y);
		}
	else break;
	}
    return P1;
}


void QuitarRepetidos(PILA P1,PILA P2,PILA AUX)
{

char aux;
int a=0,A=0,b=0,B=0,c=0,C=0,d=0,D=0,e=0,E=0,f=0,F=0,g=0,G=0,h=0,H=0,i=0,I=0,j=0,J=0,k=0,K=0,l=0,L=0,m=0,M=0,n=0,N=0,o=0,O=0,p=0,P=0,q=0,Q=0,r=0,R=0,s=0,S=0,t=0,T=0,u=0,U=0,v=0,V=0,w=0,W=0,x=0,X=0,y=0,Y=0,z=0,Z=0;
	while(x==0)
	{	
		if(es_vaciaPila(P1)==TRUE)break;
		aux=desapilar(P1);
		apilar(AUX,aux);
         
       	if(aux=='a')
			{ 
				a=a+1;
				if (a==2)apilar(P2,aux);
			}

		if (aux=='b')
			{
			 b=b+1;
			 if (b==2)apilar(P2,aux); 
			}
		
		if(aux=='c')
			{
			 c=c+1;
			 if (c==2)apilar(P2,aux);
			}

       	if(aux=='d')
			{ 
				d=d+1;
				if (d==2)apilar(P2,aux);

			}

		if (aux=='e')
			{
			 e=e+1;
			 if (e==2)apilar(P2,aux); 
			}
		
		if(aux=='f')
			{
			 f=f+1;
			 if (f==2)apilar(P2,aux);
			}


       	if(aux=='g')
			{ 
				g=g+1;
				if (g==2)apilar(P2,aux);
			}

		if (aux=='h')
			{
			 h=h+1;
			 if (h==2)apilar(P2,aux); 
			}
		
		if(aux=='i')
			{
			 i=i+1;
			 if (i==2)apilar(P2,aux);
			}

       	if(aux=='j')
			{ 
				j=j+1;
				if (j==2)apilar(P2,aux);
			}

		if (aux=='k')
			{
			 k=k+1;
			 if (k==2)apilar(P2,aux); 
			}
		
		if(aux=='l')
			{
			 l=l+1;
			 if (l==2)apilar(P2,aux);
			}

       	if(aux=='m')
			{ 
				m=m+1;
				if (m==2)apilar(P2,aux);

			}

		if (aux=='n')
			{
			 n=n+1;
			 if (n==2)apilar(P2,aux); 
			}
		
		if(aux=='o')
			{
			 o=o+1;
			 if (o==2)apilar(P2,aux);
			}


       	if(aux=='p')
			{ 
				p=p+1;
				if (p==2)apilar(P2,aux);
			}

		if (aux=='q')
			{
			 q=q+1;
			 if (q==2)apilar(P2,aux); 
			}
		
		if(aux=='r')
			{
			 r=r+1;
			 if (r==2)apilar(P2,aux);
			}

       	if(aux=='s')
			{ 
				s=s+1;
				if (s==2)apilar(P2,aux);
			}

		if (aux=='t')
			{
			 t=t+1;
			 if (t==2)apilar(P2,aux); 
			}
		
		if(aux=='u')
			{
			 u=u+1;
			 if (u==2)apilar(P2,aux);
			}

       	if(aux=='v')
			{ 
				v=v+1;
				if (v==2)apilar(P2,aux);
			}

		if (aux=='w')
			{
			 w=w+1;
			 if (w==2)apilar(P2,aux); 
			}
		
		if(aux=='x')
			{
			 x=x+1;
			 if (x==2)apilar(P2,aux);
			}

       	if(aux=='y')
			{ 
				y=y+1;
				if (y==2)apilar(P2,aux);

			}

		if (aux=='z')
			{
			 z=z+1;
			 if (z==2)apilar(P2,aux); 
			}

		       	if(aux=='A')
			{ 
				A=A+1;
				if (A==2)apilar(P2,aux);
			}

		if (aux=='B')
			{
			 B=B+1;
			 if (B==2)apilar(P2,aux); 
			}
		
		if(aux=='C')
			{
			 C=C+1;
			 if (C==2)apilar(P2,aux);
			}

       	if(aux=='D')
			{ 
				D=D+1;
				if (D==2)apilar(P2,aux);

			}

		if (aux=='E')
			{
			 E=E+1;
			 if (E==2)apilar(P2,aux); 
			}
		
		if(aux=='F')
			{
			 F=F+1;
			 if (F==2)apilar(P2,aux);
			}


       	if(aux=='G')
			{ 
				G=G+1;
				if (G==2)apilar(P2,aux);
			}

		if (aux=='H')
			{
			 H=H+1;
			 if (H==2)apilar(P2,aux); 
			}
		
		if(aux=='I')
			{
			 I=I+1;
			 if (I==2)apilar(P2,aux);
			}

       	if(aux=='J')
			{ 
				J=J+1;
				if (J==2)apilar(P2,aux);
			}

		if (aux=='K')
			{
			 K=K+1;
			 if (K==2)apilar(P2,aux); 
			}
		
		if(aux=='L')
			{
			 L=L+1;
			 if (L==2)apilar(P2,aux);
			}

       	if(aux=='M')
			{ 
				M=M+1;
				if (M==2)apilar(P2,aux);

			}

		if (aux=='N')
			{
			 N=N+1;
			 if (N==2)apilar(P2,aux); 
			}
		
		if(aux=='O')
			{
			 O=O+1;
			 if (O==2)apilar(P2,aux);
			}


       	if(aux=='P')
			{ 
				P=P+1;
				if (P==2)apilar(P2,aux);
			}

		if (aux=='Q')
			{
			 Q=Q+1;
			 if (Q==2)apilar(P2,aux); 
			}
		
		if(aux=='R')
			{
			 R=R+1;
			 if (R==2)apilar(P2,aux);
			}

       	if(aux=='S')
			{ 
				S=S+1;
				if (S==2)apilar(P2,aux);
			}

		if (aux=='T')
			{
			 T=T+1;
			 if (T==2)apilar(P2,aux); 
			}
		
		if(aux=='U')
			{
			 U=U+1;
			 if (U==2)apilar(P2,aux);
			}

       	if(aux=='V')
			{ 
				V=V+1;
				if (V==2)apilar(P2,aux);
			}

		if (aux=='W')
			{
			 W=W+1;
			 if (w==2)apilar(P2,aux); 
			}
		
		if(aux=='X')
			{
			 X=X+1;
			 if (X==2)apilar(P2,aux);
			}

       	if(aux=='Y')
			{ 
				Y=Y+1;
				if (Y==2)apilar(P2,aux);

			}

		if (aux=='Z')
			{
			 Z=Z+1;
			 if (Z==2)apilar(P2,aux); 
			}
		

	}
}

void mostrarPilas(PILA P2,PILA AUX,PILA P3)
{
	int w=0,x=0,f=0;
	char y,z;
	
	printf("**************************************************************\n");
	printf("La cola intrudcida es:");
	while(z==0)
	{
	y=desapilar(AUX);
	printf("%c,",y);
	if(es_vaciaPila(AUX)==TRUE)break;	
	}
	printf("\n");



	while(f==0)
	{
	y=desapilar(P2);
	apilar(P3,y);
	if(es_vaciaPila(P2)==TRUE)break;	
	}



	printf("La repetida es:");
	while(f==0)
	{
	y=desapilar(P3);
	printf("%c,",y);
	if(es_vaciaPila(P3)==TRUE)break;	
	}
	printf("\n");
    printf("**************************************************************\n");
}




void FREE(PILA P1,PILA P2,PILA AUX,PILA P3)
{
free (P1);
free (P2);	
free(AUX);
free(P3);
}

void main()
{
	PILA P1,P2,P3,AUX;
	P1=crearPila();
	leerdatos(P1);
    P2=crearPila();
    P3=crearPila();
    AUX=crearPila();
    QuitarRepetidos(P1,P2,AUX);
    mostrarPilas(P2,AUX,P3);
    FREE(P1,P2,AUX,P3);
   

}