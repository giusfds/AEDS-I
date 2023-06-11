#include <stdio.h>

int main(void) {
  char s[80];
  FILE *arquivo = fopen("a.txt", "w");
  printf("qual e a palavra que vc quer guardar no txt\n");
  fgets(s, 80, stdin);
  
  // scanf("%s", s);
  fprintf(arquivo, "%s", s);

  return 0;
}