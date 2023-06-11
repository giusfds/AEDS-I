#include <stdio.h>


int nagib (){
  int filhos, adultos, totalp;
  float captal, tot;
  printf("qual a contidade de captal gerada?\n");
  scanf("%f", &captal);
  printf("quantos adultos tem na familia\n");
  scanf("%d", &adultos);
  printf("qual e a quantidade de filhos\n");
  scanf("%d", &filhos);
  totalp=adultos+filhos;
  tot = captal/totalp;
  return tot;
}

int main(void) {
  int flag, b;
  do{
    b=nagib();
    printf("A media percapta da familia e igual a %d\n",b);
    printf("quer fazer dnv \n[1 = sim 0 = nao]");
    scanf("%d", &flag);
  }while (flag);
  return 0;
}