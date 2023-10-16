#include<stdio.h>

void trocar(int* a, int* c){
  int tmp = *a;
  *a = *c;
  *c = tmp;

}

int main(void) {
  int a = 1;
  int c = 2;
  
  trocar(&a,&c);
  
  printf("a = %d, c = %d\n", a,c);
  return 0;
}