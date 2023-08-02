#include <stdio.h>

int main(void) {
  int vet1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, vet2[10];
  for (int i=0; i<10; i++){
    vet2[i]= vet1[9-i];
  }
  for(int i=0; i<10; i++){
  printf("%d\t", vet2[i]);
  }
}