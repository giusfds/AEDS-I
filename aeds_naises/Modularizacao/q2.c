#include <stdio.h>

 double nagib (double salario[], int filhos[], int n){
   double x, soma=0;
   int somaf=0;
   for(int i=0; i<n; i++){
    soma+= salario[i];
   }
   for(int i=0; i<n; i++){
     somaf+= filhos[i];
   }
   somaf+=n;
   
   x = soma/somaf;
   
   return x;
 }
int main(void) {
  int n;
  printf("digite a quantidade de pessoas da sua cidade\t");
  scanf("%d", &n);
  int filhos[n];
  double salario[n], x;
  for(int i=0; i<n; i++){
    printf("qual a contidade de fihos na %d familia\t", i+1);
    scanf("%d", &filhos[i]);
    printf("qual o captal gerado na %d casa\t", i+1);
    scanf("%lf", &salario[i]);
  }
  x=nagib(salario, filhos, n);
  printf("%.2f", x);
  
}