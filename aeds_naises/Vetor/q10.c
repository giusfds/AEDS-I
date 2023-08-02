#include <stdio.h>

int main(void) {
  int n;
  printf("qual e o valor da sequencia que vc quer");
  scanf("%d", &n);
  int vet[n];
  vet[0]=1;
  vet[1]=1;
  for (int i=2; i<n; i++){
    vet[i] = vet[i-2] + vet[i-1];
  }
  for (int i=0; i<n; i++){
    printf("%d \t", vet[i]);  
  }
    
}