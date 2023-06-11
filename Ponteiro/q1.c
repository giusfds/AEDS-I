#include <stdio.h>

int main(void) {
  int a, b, *ptra, *ptrb;
  ptra = &a;
  ptrb = &b;
  a=6;
  b=7;
  printf("o valor de a = %p\n", ptra);
  printf("o vaor da memoria de a= %p \n", &a);
  printf("o valor de ptra = %p\n", &ptra);
  
  if (ptra>ptrb){
    printf("a");
  }
  else{
    printf("b");
  }
}