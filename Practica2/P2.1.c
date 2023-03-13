#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char titulo[30];
	char autor[30];
	int year;
}LB;
int scanear_v(int);
void comp(int opcion);
LB manera_dinamica();


int main()
{
	
	int opcion=4,*ap;
	while (opcion==1||opcion==2||opcion==4)
	{
		opcion =scanear_v(opcion);
		if (opcion==3)exit(0);
		comp(opcion);

	}
	
	
	return 0;
}	


//scan
int scanear_v(int opcion)
{
	printf("\nComo desea que su programa sea");
	printf("\nOprime 1 para que sea Estatico");
	printf("\nOprime 2 para que sea Dinamico");
	printf("\nOprime 3 para Salir\n");
	scanf("%d",&opcion);
	getchar();
	return(opcion);
	
}



//comparar
void comp(int opcion)
{

	if(opcion==1)
	{
		printf("Entraste a struct estatica\n");
		LB lb1;
		printf("titulo: ");
		scanf("%[^\n]",lb1.titulo);
		getchar();
		printf("Autor: ");
		scanf("%[^\n]",lb1.autor);
		getchar();
		printf("Year: ");
		scanf("%d",&lb1.year);
		
		printf("titulo:%s\n",lb1.titulo);
		printf("autor:%s\n",lb1.autor);
		printf("year:%d\n",lb1.year);

	}
	if(opcion==2)
	{
		printf("Entraste a struct dinamica\n");
		LB *lb2;
		lb2=(LB*)malloc(sizeof(LB));
		printf("titulo: ");
		scanf("%[^\n]",lb2->titulo);
		getchar();
		printf("Autor: ");
		scanf("%[^\n]",lb2->autor);
		getchar();
		printf("Year: ");
		scanf("%d",&lb2->year);
		getchar();

		printf("titulo:%s\n",lb2->titulo);
		printf("autor:%s\n",lb2->autor);
		printf("year:%d\n",lb2->year);
	}
	if(opcion==3)
	{
		exit(0);
	}
		
}

