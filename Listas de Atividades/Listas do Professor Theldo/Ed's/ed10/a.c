#include <stdio.h>
#include <string.h>
#include <ctype.h>

int parola( char * text){
    int result =1;
    int x = strlen(text)/2, y=0;
    if(text[x]== '-') x=x-1;
    while (y<x && text[y]== text[x+y+2]){y=y+1;}
    return (y-x);
}

int main() {

    int a = parola("teco-teco");
    
    printf("%d\n", a);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}