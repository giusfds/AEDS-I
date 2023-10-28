#include <stdio.h>
#include "5a8.h"

int main() {
    int hora, minuto, segundo;

    printf("digite a hora, minuto e segundo: ");
    scanf("%d %d %d", &hora, &minuto, &segundo);

    Horario horarioValidado = validarHorario(hora, minuto, segundo);

    if (horarioValidado.hora == 0 && horarioValidado.minuto == 0 && horarioValidado.segundo == 0) {
        printf("Horario invalido!\n");
    } else {
        printf("Horario valido: %d:%d:%d\n", horarioValidado.hora, horarioValidado.minuto, horarioValidado.segundo);
    }

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
