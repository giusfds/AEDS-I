#include <stdio.h>
#include <string.h>

int main(void) {
  char palavra[50] = {"alexAndrea"};
  for( int i=0; i<50; i++){
   if(palavra[i] == 'a' || palavra[i] == 'A'){
     printf("na posicao %d tem um 'a'\n", i);
   }
  }
  return 0;
}