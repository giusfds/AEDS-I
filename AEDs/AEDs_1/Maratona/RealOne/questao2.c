#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, D, A;
    scanf("%d", &N); // ler o número de posições
    scanf("%d", &D); // ler a posição do disco voador
    scanf("%d", &A); // ler a posição do avião

    int button_presses = 0; // contador de vezes que o botão é pressionado

    // Calcular o número mínimo de vezes que o botão é pressionado
    while (A != D) {
        A = (A % N) + 1; // mover o avião para a próxima posição
        button_presses++;
    }

    printf("%d\n", button_presses);

    return 0;
}
