#include <stdio.h>
typedef struct 
{
    int dia;
    int mes;
    int ano;
} Data;

Data verificacao(int dia, int mes, int ano)
{
    Data data;

    if (ano >= 0 && mes >= 1 && mes <= 12)
    {
        switch (mes)
        {
        case 1:

            break;
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
            {
                if (dia >= 1 && dia <= 29)
                {
                    data.ano = ano;
                    data.mes = mes;
                    data.dia = dia;
                }
                else
                {
                    data.ano = 0;
                    data.mes = 0;
                    data.dia = 0;
                }
            }
            else
            {
                if (dia >= 1 && dia <= 28)
                {
                    data.ano = ano;
                    data.mes = mes;
                    data.dia = dia;
                }
                else
                {
                    data.ano = 0;
                    data.mes = 0;
                    data.dia = 0;
                }
            }

            break;
        case 4: // 30 dias

            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        case 6: // 30 dias

            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        case 9: // 30 dias

            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        case 11: // 30 dias

            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        default:
            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }
        }
    }
    else
    {
        data.ano = 0;
        data.mes = 0;
        data.dia = 0;
    }

    return data;
}

Data MaisDias(Data data, int dia){
    Data data2;
    data2.ano = data.ano;
    data2.mes = data.mes;
    data2.dia = data.dia;

    if (dia >= 0){
        data2.dia += dia;
        if (data2.dia > 31){
            data2.dia -= 31;
            data2.mes++;
            if (data2.mes > 12){
                data2.mes -= 12;
                data2.ano++;
            }
        }
    } else {
        data2.dia += dia;
        if (data2.dia < 1){
            data2.dia += 31;
            data2.mes--;
            if (data2.mes < 1){
                data2.mes += 12;
                data2.ano--;
            }
        }
    }

    return data2;
}

// estou com erro nessa funcao, e nao sei qual e o erro dela.
// nao consigo compilar e fica dando esse erro aqui
// https://prnt.sc/M5LAWZVLBZyQ
// porem acho que a logica esta certa

int comparacao(int *dia, int *mes, int *ano){
    int dias = *dia;
    int meses = *mes;
    int anos = *ano;

    dias += anos * 365;
    dias += meses * 30;

    return dias;
}

int diferenca(Data data1, Data data2)
{
    int diaf;
    int mesf;
    int anof;

    if (data1.ano != data2.ano)
    {
        if (data1.mes != data2.mes)
        {
            if (data1.dia != data2.dia)
            {
                diaf = data1.ano - data2.ano;
                if (diaf < 0)
                {
                    diaf *= -1;
                }
                printf("A diferenca entre as datas e de %d dias\n", diaf);
            }
            else
            {
                mesf = data1.mes - data2.mes;
                if (mesf < 0)
                {
                    mesf *= -1;
                }
                printf("A diferenca entre as datas e de %d meses\n", mesf);
            }
        }
        else
        {
            anof = data1.ano - data2.ano;
            if (anof < 0)
            {
                anof *= -1;
            }
            printf("A diferenca entre as datas e de %d anos\n", anof);
        }
    }
    else
    {
        printf("As datas sao iguais\n");
    }

    int a = comparacao(&diaf, &mesf, &anof);

    return a;
}

