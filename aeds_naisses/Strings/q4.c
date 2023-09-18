#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main(void) {
  int c=0;
  char str[50], buffer[80], letra;
  printf("qual e a frase\n");
  fgets(str, 50, stdin); 
  do{
    printf("digite um caractere do alfabeto\n");
    scanf("  %s", buffer);
  }
  while(isalpha(buffer[0])==0);
  letra=buffer[0];
  for(int i=0;i<strlen(str);i++){
    if(letra==str[i]){
      printf("\n\na letra apareceu na posicao [%d]\n\n", i);
      c++;
    }
  }
  printf("\t%d",c);
  
  return 0;
  
}