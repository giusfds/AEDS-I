#include <stdio.h>

//cod interativo e recursivo = fazer um vet e imprimir o maio numero do vet

int interativo(int vet[], int tamanho){
  int MaiorNum=0;
  for(int i=0; i<tamanho; i++){
    if(vet[i]>MaiorNum){
      MaiorNum = vet[i];
    }
  }
  return MaiorNum;
}

int rec(int vet[], int ultimo, int maior){
  
  if (ultimo>0){

    if(vet[ultimo]>maior){
      maior= vet[ultimo];
    }

    return rec(vet, ultimo -1, maior);
    
  }
  
  return maior;
}

int main(void) {
  int vet[]={0,1,20,3,4,10,6,7,8,9}, n1=0;
  n1 = interativo(vet, 10);
  printf("\n\ninterativo   ||  %d", n1);

  printf("\n\n--------------------\n\n");
  
  n1 = rec(vet, 10, -2000);
  printf("recusividade ||  %d", n1);
  return 0;
}