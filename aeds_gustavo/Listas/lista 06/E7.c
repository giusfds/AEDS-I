#include <stdio.h>
#include "5a8.h"

int main()
{

    Horario horario1 = {10, 45, 30};
    Horario horario2 = {5, 20, 15};

    Horario resultado = somarHorarios(horario1, horario2);

    printf("Soma dos horários: %d:%d:%d\n", resultado.hora, resultado.minuto, resultado.segundo);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
