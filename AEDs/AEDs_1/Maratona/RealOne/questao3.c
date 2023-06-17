#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char letra;
  char texto[1001];
  int cont = 0;
  float porcentagem = 0;

  scanf(" %c", &letra);

  scanf(" %[^\n]", texto);

  for (int i = 0; i < strlen(texto); i++) {
    if (texto[i] == letra) {
      cont++;
    }
  }
  if (strlen(texto) > 0) {
    porcentagem = (cont * 100.0) / strlen(texto);
  }

  printf("%.2f%%", porcentagem);

  return 0;
}