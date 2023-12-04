#include <iostream>

using namespace std;

class Horario
{
protected:
    int segundo;
    int minuto;
    int hora;

public:
    // 1
    Horario();

    // 2
    Horario(int, int, int);
    bool isValid(int, int, int);

    // 3
    int getSegundo();
    int getMinuto();
    int getHora();

    // 4
    void acrescentar(Horario);
    void normalizar();

    // 5
    Horario operator+(Horario);

    // 6
    Horario diferenca(Horario);

    // 7
    Horario operator-(Horario);

    // 8
     friend ostream& operator<<(ostream& output, const Horario& temp);
};

// 1
Horario::Horario()
{
    this->segundo = 0;
    this->minuto = 0;
    this->hora = 0;
}

// 2
bool Horario::isValid(int s, int m, int h)
{
    if (s < 0 || m < 0 || h < 0)
    {
        return false;
    }
    return true;
}

Horario::Horario(int s, int m, int h)
{
    // validar
    if (!isValid(s, m, h))
    {
        throw "horario nao valido";
    }

    // normalizar
    // transformar de segundo para minuto quando passa de 60
    segundo = s % 60;
    minuto = s / 60;

    // transformar de minuto para hora quando passa de 60
    minuto = minuto + (m % 60);
    // calculo hora
    hora = (minuto / 60) + h;
}

// 3
int Horario::getSegundo() { return this->segundo; }
int Horario::getMinuto() { return this->minuto; }
int Horario::getHora() { return this->hora; }

// 4
void Horario::normalizar()
{
    // converter horario
    // segundo p minuto
    minuto += segundo / 60;
    segundo = segundo % 60;

    // minuto p hora
    hora += minuto / 60;
    minuto = minuto % 60;
}

void Horario::acrescentar(Horario temp)
{
    // um horario e somar em outro horario
    // validar
    if (!isValid(temp.segundo, temp.minuto, temp.hora))
    {
        throw "o horario e invalido";
    }

    // somar
    segundo += temp.segundo;
    minuto += temp.minuto;
    hora += temp.hora;

    // normalizar
    normalizar();
}

// 5
Horario Horario::operator+(Horario temp)
{
    Horario soma;

    soma.segundo = this->segundo + temp.segundo;
    soma.minuto = this->minuto + temp.minuto;
    soma.hora = this->hora + temp.hora;

    soma.normalizar();

    return soma;
}

// 6
Horario Horario::diferenca(Horario temp)
{
    // um horario que mostra a diferenca entre ambos
    // validar
    if (!isValid(temp.segundo, temp.minuto, temp.hora))
    {
        throw "o horario e invalido";
    }

    // subtrair
    Horario subtrair;

    subtrair.segundo = this->segundo - temp.segundo;
    subtrair.minuto = this->minuto - temp.minuto;
    subtrair.hora = this->hora - temp.hora;

    // normalizar
    subtrair.normalizar();

    // retornar
    return subtrair;
}

// 7
Horario Horario::operator-(Horario temp)
{
    // 11:30:30 - 01:20:20 = objeto
    Horario subtracao;

    subtracao.segundo = this->segundo - temp.segundo;
    subtracao.minuto = this->minuto - temp.minuto;
    subtracao.hora = this->hora - temp.hora;

    subtracao.normalizar();

    return subtracao;
}

// 8
ostream& operator<<(ostream& output, const Horario& temp) {
    output << temp.hora << ":" << temp.minuto << ":" << temp.segundo;
    return output;
}

main()
{

    return 0;
}