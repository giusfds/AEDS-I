#include "Giuseppe.h"

int ehPalindromo(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        if (tolower(str[i]) != tolower(str[len-i-1])) {
            return 0;
        }
    }
    return 1;
}

int main() {

    clear();
    id("exercicio 6");

    char frase[1000];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int len = strlen(frase);
    if (frase[len-1] == '\n') {
        frase[len-1] = '\0';
    }

    char *token = strtok(frase, " ");

    while (token != NULL) {
        if (strlen(token) > 3 && ehPalindromo(token)) {
            printf("Palíndromo: %s\n", token);
        }
        token = strtok(NULL, " ");
    }

    getchar();
    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}