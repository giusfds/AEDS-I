#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpper(char* string) {
	for (int i = 0; i < strlen(string); i++) {
		if (string[i] >= 'a' && string[i] <= 'z') {
			string[i] -= 32;
		}
	}
}

int main()
{

    char frase[80];

    printf("digite a frase\n");
    fgets(frase, sizeof(frase), stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    toUpper(frase);

    int tamanho = strlen(frase);

    for (int i = 0, j = tamanho-1; i < tamanho / 2; i++, j--)
    {
        if (frase[i] != frase[j])
        {
            printf("nao e palindromo\n");
            return 0;
        }
    }
    printf("e um palindromo\n");
    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}