#include<stdio.h>
#include<string.h>

void inicializa(int *mat) {
  int i;

  for(i=0; i < 100; i++) {
    *mat=0;
    mat++;
  }
}
void preenche(int *mat) {
  int i;

  for(i=0; i < 100; i++) {
    *mat=99 - i;
    mat++;
  }
}
int main() {
  int matriz[10][10];
  int i, j;
  inicializa(matriz);
  preenche(matriz);
  for(i=0; i< 10; i++){
    printf("\n");
    for (j=0; j < 10; j++)
      printf("mat[%d][%d]= %d ", i,j,matriz[i][j]);
  }

}