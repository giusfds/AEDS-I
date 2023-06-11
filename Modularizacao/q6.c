#include <stdio.h>


//questao 6/14 em fatorial, e dps passar para recursivo

int nagib(int x){
  int produto=1;
  for(int i=1; i<=x; i++){
    produto*=i;
  }
  return produto;
}

int main(void) {
  int a=0, b=0;
  printf("qual o valor do fatorial a ser calculado\n");
  scanf("%d", &a);
  b=nagib(a);
  printf("%d", b);
  return 0;
}