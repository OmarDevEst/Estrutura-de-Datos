#include <stdio.h>
#include<stdlib.h>

int main()
{
 int x,*px,**ppx,***pppx,****ppppx;
x=2;
px=&x;
ppx=&px;
pppx=&ppx;
ppppx=&pppx;
printf("Con *:%d y sin*:%d\n",0,x);
printf("Combinaciones de px\n");
printf("Con *:%d y sin:%d\n",*px,px);
printf("Combinaciones de ppx\n");
printf("Con *:%d y sin:%d\n",*ppx,ppx);
printf("Con **:%d y sin**:%d\n",**ppx,ppx);

(***pppx)++;

printf("El nuevo valor de x es %d",x);

return 0;
}