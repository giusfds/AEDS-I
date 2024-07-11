#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int contador=0;
  char palavra[50];
  printf("qual a frase que vc vai usar \n");
  fgets(palavra, 50, stdin);
  for(int i=0; i<strlen(palavra); i++){
    if(palavra[i] == 'a' || palavra[i] == 'A'){
      contador++;
    }
  }
  printf("%d", contador);
  return 0;
}