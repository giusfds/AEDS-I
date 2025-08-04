#include <stdio.h>
#include "5a8.h"


int main()
{

    Horario horario = {2, 30, 45};
    // 2:30:45

    int totalSegundos = calcularSegundos(horario);

    printf("Total de segundos: %d\n", totalSegundos);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
