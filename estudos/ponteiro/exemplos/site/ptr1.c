#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void procedimento(char *palavra){
    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] == 'a')
        {
            palavra[i] = 'u';
        }else if ((palavra[i] == 'e') || (palavra[i] == 'E'))
        {
            palavra[i] = 'o';
        }else if ((palavra[i] == 'i') || (palavra[i] == 'I'))
        {
            palavra[i] = 'u';
        }else if ((palavra[i] == 'o') || (palavra[i] == 'O'))
        {
            palavra[i] = 'a';
        }else if ((palavra[i] == 'u') || (palavra[i] == 'U'))
        {
            palavra[i] = 'e';
        }

    }
    
}

void print(char *palavra) {
    char *ptr=palavra;
    for (int i = 0; i < strlen(palavra); i++)
    {
        printf("%c", *ptr);
        ptr++;
    }
}

int main() {

    char palavra[100];
    fgets(palavra, sizeof(palavra), stdin);
    procedimento(palavra);
    print(palavra);

    return 0;
}