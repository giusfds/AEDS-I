#include <stdio.h>
#include <string.h>


const char* palindromo( char* palindromo){ 
    for(int i=0, j=strlen(palindromo)-1; i<=j; i++, j--){
        if(palindromo[i]!=palindromo[j]){
            return "nao e palindromo";
        }
    }
    return "e um palindromo";
}

int main() {

    char str[100];
    printf("qual e a string que vcquer ler\n");
    scanf("%s", str);
    printf("%s\n",palindromo(str));



    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;

    }