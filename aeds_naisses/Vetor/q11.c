#include <stdio.h>

int main(void) {
  float vet1[5] = {10, 27, 3, -4, -6};
  float vet2[5] = {0, -7, 6, 4, -5};
  float vet3[5];
  for (int i=0; i<5;i++){
    vet3[i] = vet1[i] + vet2[i];
  }
  for (int i=0; i<5; i++){
    printf("%g \t", vet3[i]);
  }
  
  
}