#include <stdio.h>

int main(void) {
  char palavra[50];
  char buffer[80], letra;
  int contador=0;
  printf("qual a frase que vc quer guardar\n\n");
  fgets(palavra, 50, stdin);
  printf("qual a letra que vc quer indentificar\n\n");
  scanf("%s", buffer);
  letra= buffer[0];
  for(int i=0; i<50; i++){
    if(palavra[i] == letra){
      printf("o caracter pedido se encontra na posicao [%d]\n\n",i);
      contador++;
    }
  }
  printf("\n\na letra apareceu %d vezes", contador);
  return 0;
}