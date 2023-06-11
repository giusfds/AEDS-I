#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetor_aleatorio(int tamanho, int vet[]){
  for(int i=0; i<tamanho; i++){
   vet[i] = rand();
  }
} 

int main(void) {
   srand(time(0));
  int vet [100];
  vetor_aleatorio(100, vet);
  for (int i=0; i<100; i++){
    if(vet[i]>0){
     printf("%d \n", vet[i]);
    }
  }
  
}