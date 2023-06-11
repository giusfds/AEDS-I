#include <stdio.h>

int main() {

  FILE *arquivo = fopen("algumacois.txt", "w");
  for (int i = 0; i < 10; i++) {
    fprintf(arquivo, "%d\n", i + 1);
  }
  return 0;
}