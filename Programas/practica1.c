#include <stdio.h>
#include <stdlib.h>

/* Prototipos de las funciones */
void dimension_matriz(int*);
int **crear_conjunto(int n);
void leo_cordenadas(int **mtz,int fil,int col);
int calculaArea(int**mtz,int fil);
void impArea(int Area);
void liberar_matriz(int **mtz,int fil,int col);

int main()
{
    int w=0,fil,col=2,**mtz,Area;
    dimension_matriz(&fil);
    mtz = crear_conjunto(fil);
    leo_cordenadas(mtz,fil,col);
    Area=calculaArea(mtz,fil);
    impArea(Area);
    liberar_matriz(mtz,fil,col);
}

//SOLICITA EL TAMAÑO DE LA MATRIZ
void dimension_matriz(int *fil)
{
   for (int i = 0; i <30 ; --i)
    {
    printf("\nIndique el numero de datos N>2 y N<10:\n");
    scanf("%d",fil);
    if (*fil>2 && *fil<10)break;
	}
}
//CREAR UN ARRGELO BIDIMENSIONAL

int** crear_conjunto(int fil)
{
    int i;
    int col=2;
    int **mtz = (int**)malloc(sizeof(int*)*fil);

    for (int i = 0; i < fil; i++)
    {
     mtz[i]=(int*)malloc(sizeof(int)*col);
    }
    return mtz;
}

//SOLICITA LOS DATOS DE LA MATRIZ AL USUARIO 
void leo_cordenadas(int**mtz,int fil,int col)
{
    int i,j;
    printf(" \n Introduzca los datos de la matriz \n");
    for (int i = 0; i < fil; ++i)
    {
            printf("\nCordenada X[%d]\n",1+i);
            scanf("%d",&mtz[0][i]);
            printf("\nCordenada y[%d]\n",1+i);
            scanf("%d",&mtz[1][i]);
            

    }
    
} 
//MANIPULACION
int calculaArea(int**mtz,int fil)
{
    int X,Y,Z,Area;
    Z=0;
    for (int i = 0; i < fil-1; ++i)
    {
        X=(mtz[1][i]+mtz[1][i+1]);
        Y=(mtz[0][i]+mtz[0][i+1]);
        Z=(X*Y)+Z;
    	
    }
    Z=Z/2;
    return Z;
}


//MUESTRA LOS ELEMENTOS DE LA MATRIZ
void impArea(int Area)
{
printf("\nLa Area es=%d\n",Area);
}
//Liberar la matriz de la memoria
void liberar_matriz(int**mtz,int fil,int col)
{
    int i;
    for (int i = 0; i < fil; ++i)
    {
        free(mtz[i]);
    }
    free(mtz);
}
