#include <stdio.h>
#include <string.h>

int main(void) {
  char vet[100], b[0];
  int c=0;

  printf("escreva uma frase\n");
  fgets(vet, 100, stdin);

  printf("qual a vogal que vc quer identificar");
  fgets(b, 0, stdin);
  
  for(int i=0; i<strlen(vet); i++){

    if(b[0] == 'a' || b[0] == 'e' || b[0] =='i' || b[0] == 'o' || b[0] == 'u')
    {
      c++;
    }
    else if( b[0] == 'A' || b[0] == 'E' || b[0] =='I' || b[0] == 'O' || b[0] == 'U')
    {
    c++;  
  }else
      printf("%c", vet[i]);
  }
  printf("%d",c);
  return 0;
}