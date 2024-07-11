#include <stdio.h>

int main(void) {
  int contador = 0;
  char resultado;

  
  for(int i=0;i<6;i++){
    scanf(" %c", &resultado);

    
    if(resultado == 'V'){
      contador++;
    }else if(resultado == 'P'){
      
    }
  }

  
  if(contador == 1 || contador == 2){
    printf("3");
  }else if(contador == 3 || contador == 4){
    printf("2");
  }else if(contador == 5 || contador == 6){
    printf("1");
  }else{
    printf("-1");
  }
  return 0;
}