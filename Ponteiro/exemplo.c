#include <stdio.h>

void multiplicar2 (int *ptr){
  printf("valor de x= %d\n", *ptr);
  (*ptr)*=2;
  printf("o valor de x= %d\n",*ptr);
}



int main(void) {
  int x=10;
  int *ptr;
  ptr = &x;
  printf("o valor de x= %d\n", x);
  multiplicar2(&x);
  printf("o valor de x= %d", x);
}