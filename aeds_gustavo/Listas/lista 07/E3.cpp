#include <iostream>
#include "E1.cpp"
#include "E2.cpp"
using namespace std;

class HoraData : public Horario, public Data
{

public:
    // 1
    HoraData();

    // 2
    HoraData(Data, Horario);

    // 3
    HoraData diferencaDataHora(HoraData);

    // 4
    HoraData operator-(HoraData);

    // 5
    friend ostream &operator<<(ostream &output, const HoraData &temp)
    {
        output << temp.dia <<"/"<< temp.mes <<"/"<< temp.ano <<" - "<< temp.hora <<":"<< temp.minuto <<":"<< temp.segundo << endl;
        return output;
    }
};

// 1
HoraData ::HoraData()
{
    this->ano = 1;
    this->mes = 1;
    this->dia = 1;
    this->hora = 1;
    this->segundo = 1;
    this->minuto = 1;
}

// 2
HoraData ::HoraData(Data data, Horario horario)
{
    this->ano = data.getAno();
    this->mes = data.getMes();
    this->dia = data.getDia();

    this->hora = horario.getHora();
    this->minuto = horario.getMinuto();
    this->segundo = horario.getSegundo();
}

// 3
HoraData HoraData::diferencaDataHora(HoraData y)
{
    // funcao que subitrai a quantidade de dias de duas classes e retorna uma outra classe
    int dias = 0;
    Horario tempHora;
    HoraData total;

    // calculando a quantidade de dais
    dias = this->diferencaDeDias(y);
    tempHora = this->diferenca(y);

    // atribuindo nos novos valores
    total.minuto = tempHora.getMinuto();
    total.segundo = tempHora.getSegundo();
    total.hora = tempHora.getHora() + dias * 24;

    return total;
}

// 4
HoraData HoraData::operator-(HoraData temp)
{
    HoraData total = this->diferencaDataHora(temp);
    return total;
}

// 5
// presente na class

int main()
{

    return 0;
}