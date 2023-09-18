#include <stdio.h>
//fazer um programa que escreva de 1 a 5 e dps de 5 a 1
//1234554321

int rec(int x, int vet[]){
  int soma=0;
  for(int  i=0; i<5;i++){
    soma+= vet[i];
  }
  return soma;
}

int main(void) {
  int somafinal;
  int vet[5]={1,2,3,4,5}, resultado;
  somafinal=rec(5, vet);
  printf("soma e %d", somafinal);
  
  return 0;
}