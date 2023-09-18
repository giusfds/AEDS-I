#include <stdio.h>

int main(void) {
  int vet[30];
  for (int i=0; i<30 ; i++)
  {
    vet[i]= i*i;
  }
  for (int i=0; i<30; i++)
  {
    printf("o quadrado do vetor e \n", vet[i]);
  }
}