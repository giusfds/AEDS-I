#include "Giuseppe.h"

double calcPorcentage(double salario, double porcentagem){
    double x=0.0;

    x = (salario * (porcentagem/100));

    return x;
}

double calcINSS(){
    double x=0.0;

    x = (7507.49 * 14)/100;

    return x;
}

int main() {

    clear();
    id("exercicio 8");

    double salario=0.0, inss=0.0, irpf=0.0;
    salario = readdouble("qual e o seu salario: ");

    //calculo de IRPF 
    if (salario <= 2112.00)
    {
        irpf = calcPorcentage(salario, 0);
    } else if((salario >= 2112.01) OR (salario <= 2826.65))
    {
        irpf = calcPorcentage(salario, 7.5);
    } else if((salario >= 2826.66) OR (salario <= 3751.05))
    {
        irpf = calcPorcentage(salario, 15);
    } else if((salario >= 3751.06) OR (salario <= 4664.68))
    {
        irpf = calcPorcentage(salario, 22.5);
    } else if (salario >= 4664.68)
    {
        irpf = calcPorcentage(salario, 27.5);
    }

    // calculo de INSS
    if (salario <= 1320.00)
    {
        inss = calcPorcentage(salario, 7.5);
    }else if ((salario >= 1320.01 ) OR (salario <= 2571.29))
    {
        inss = calcPorcentage(salario, 9);
    }else if ((salario >= 2571.30 ) OR (salario <= 3856.94))
    {
        inss = calcPorcentage(salario, 12);
    }else if ((salario >= 3856.95 ) OR (salario <= 7507.49))
    {
        inss = calcPorcentage(salario, 14);
    }else if (salario >= 7507.49)
    {
        inss = calcINSS(); //funcao diferente para calcular a % especifica
    }
    
    printf("IRPF: %.2lf\n", irpf);
    printf("INSS: %.2lf\n", inss);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}