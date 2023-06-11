#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

void vetor_aleatorio(int tamanho, float vet[]){
  for(int i=0; i<tamanho; i++){
   vet[i] = rand()%5;
  }
} 


int main(void) {
  srand(time(0));
  float vet[20];
  vetor_aleatorio(20, vet);
  int i=0, j= 19;
  float resultado=0;
  for(i = 0; i<20/2; i++){
    resultado = resultado + pow(vet[i] - vet[j],2);
    j--;
    printf("%g \t", resultado);
  }
}