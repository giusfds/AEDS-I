#include <stdio.h>

int main(void) {
  double vet[10] = {10, -20, 30, 40, -50, 60.55, 70.65988, 80, 90, 1.655};
  double soma=0;
  int quantidade=0;
  for(int i=0; i<10; i++){
    if (vet[i]<0){
      quantidade++;
    }
    else{
      soma+= vet[i];
    }
  }
}