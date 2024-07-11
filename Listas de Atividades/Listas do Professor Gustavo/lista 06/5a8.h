typedef struct
{
    int segundo;
    int minuto;
    int hora;
} Horario;

Horario validarHorario(int hora, int minuto, int segundo) {
    Horario horario;

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59) {
        horario.hora = hora;
        horario.minuto = minuto;
        horario.segundo = segundo;
    } else {
        horario.hora = 0;
        horario.minuto = 0;
        horario.segundo = 0;
    }

    return horario;
}

Horario somarHorarios(Horario horario1, Horario horario2)
{
    Horario resultado;

    resultado.segundo = (horario1.segundo + horario2.segundo) % 60;
    int a_segundo = (horario1.segundo + horario2.segundo) / 60;

    resultado.minuto = (horario1.minuto + horario2.minuto + a_segundo) % 60;
    int a_minuto = (horario1.minuto + horario2.minuto + a_segundo) / 60;

    resultado.hora = (horario1.hora + horario2.hora + a_minuto) % 24;

    return resultado;
}

int calcularSegundos(Horario horario) {
    int totalSegundos = 0;
    totalSegundos = (horario.hora * 3600) + (horario.minuto * 60) + horario.segundo;
    return totalSegundos;
}
