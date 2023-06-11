#include <stdio.h>

// Faça um programa para inserir N letras informadas pelo usuário em um arquivo
// texto. Onde N é uma quantidade de letras definida pelo usuário. Depois de
// inseridas as N letras, o programa deverá ler todas as N letras do arquivo,
// calcular e mostrar a quantidade de vogais, ou seja, quantas letras a, e, i,
// o, u.

int vogal(char c) {

  if (c == 'a' || c == 'A') {
    return 1;
  } else if (c == 'e' || c == 'E') {
    return 1;
  } else if (c == 'i' || c == 'I') {
    return 1;
  } else if (c == 'o' || c == 'O') {
    return 1;
  } else if (c == 'u' || c == 'U') {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int contVog=0, tamanho_da_string;
  char caractere;
  FILE *arquivo = fopen("a.txt", "w");
  printf("tamanho da string\n");
  scanf("%d%*c", &tamanho_da_string);
  printf("%d = tamanho da string\n\n",tamanho_da_string);
  char str[tamanho_da_string];
  printf("qual e a frase que vc quer digitar\n");
  fgets(str, tamanho_da_string+1, stdin);
  fprintf(arquivo, "%s", str);
  fclose(arquivo);
  arquivo = fopen("a.txt", "r");
  while ((caractere = fgetc(arquivo)) != EOF) {

    if (vogal(caractere))
      contVog++;
  }
  printf("%d", contVog);
  return 0;
}