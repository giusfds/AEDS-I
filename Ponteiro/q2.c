#include <stdio.h>
int main()
{
 int x, *p, **q;
 p = &x;
 q = &p;
 x = 10;
 printf("\n%d\n", **q);
 return(0);
}
/* 
qnd o & aponta para a memoria
qnd tem o * aponta para o numero
qnd tem ** o ponteiro apota para outro ponteiro
*/