#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void vetor_aleatorio(int tamanho, int vet[]){
  for(int i=0; i<tamanho; i++){
   vet[i] = rand()%1000;
  }
} 

int main(void) {
  srand(time(0));
  int n=0;
  printf("digite o valor de n ai");
  scanf("%d", &n);
  int vet[n];
  vetor_aleatorio(n, vet);
  for (int i=1; i<n; i+=2){
    printf("%d \n", vet[i]);
  }
}