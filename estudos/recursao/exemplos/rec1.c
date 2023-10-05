#include <stdio.h>

int soma_rec(int arr[], int n, int i){
  int soma=0;
  if (i<n)
  {
    soma+=arr[i];
    soma+=soma_rec(arr, n, ++i);
  }
  return soma;
}

int somar(int arr[], int n){
  int i=0;
  return soma_rec(arr, n, i);
}

int main() {

  int n=5;
  int array[] = {5, 8, 9, 12, 8};
  // 42
  int soma = somar(array, n);

  // for (int i = 0; i < n; i++)
    
  printf("%d\n", soma);
    

  printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
  return 0;
}
