#include <stdio.h>

int nagib(char A, int x, int y, int z){
  float med;
  if(A=='a'){
   med=(x+y+z)/3;
  }
  else{
    med=((x*5)+(y*3)+(z*2))/(5+3+2);
  }
  return med;
}

int main(void) {
 int x, y, z;
  float p;
  char operacao;
  x= 5;
  y= 5;
  z= 5;
  operacao= 'a';
  p=nagib( operacao, x, y, z);
  printf("o valor final e %.2lf", p);
}