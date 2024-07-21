#include <stdio.h>

int main(void) {
  
  //declaracoes de vetores
  int vet1[5] = {3,5,4,2,2};
  int vet2[5] = {7,15,20,0,18};
  int vet3[10];
  
  for (int i=0; i<5; i++){
    vet3[i]= vet1[i];
    printf("%d \t", vet3[i]);
    vet3[i]=vet2[i];
    printf("%d \t", vet3[i]);
  }
}