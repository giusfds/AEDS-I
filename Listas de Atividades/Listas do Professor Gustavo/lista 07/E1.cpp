#include <iostream>

using namespace std;

class Data
{
protected:
    int dia;
    int mes;
    int ano;

public:
    // 1
    Data();

    // 2
    Data(int, int, int);
    bool isValid(int, int, int);

    // 3
    int getDia();
    int getMes();
    int getAno();

    // 4
    void addDays(int);
    int qualMes();
    void normalizar();
    bool isValidDay(int);

    // 5
    Data operator+(int);

    // 6
    friend ostream &operator<<(ostream &, const Data &);

    // 7
    int diferencaDeDias(Data);

    // 8
    int operator-(Data);
};

// 1
Data ::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

// 2
bool Data::isValid(int dia, int mes, int ano)
{
    if (ano > 0 && mes >= 1 && mes <= 12)
    {
        if (mes == 2)
        {
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
            {
                if (dia >= 1 && dia <= 29)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (dia >= 1 && dia <= 28)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30))
        {
            return true;
        }
        else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
Data::Data(int dia, int mes, int ano)
{
    // validar
    if (!isValid(dia, mes, ano))
    {
        throw "o dia e invalido";
    }

    // atribuir
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

// 3
int Data::getDia() { return this->dia; }
int Data::getMes() { return this->mes; }
int Data::getAno() { return this->ano; }

// 4
int Data::qualMes()
{
    // verificando ano bisexto
    if (this->mes == 2)
    {
        return ((this->ano % 4 == 0 && this->ano % 100 != 0) || (this->ano % 400 == 0)) ? 29 : 28;
    }
    // verificando se o mes tem 30 ou 31 dias
    else if (this->mes == 4 || this->mes == 6 || this->mes == 9 || this->mes == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

void Data::normalizar()
{
    // dia p mes
    mes += dia / qualMes();
    dia = dia % qualMes();

    // mes p ano
    ano += mes / 12;
    mes = mes % 12;

    // se for negativo

    if (this->dia < 0)
    {
        this->mes--;
        this->dia += qualMes();
    }

    if (this->mes < 0)
    {
        this->ano--;
        this->mes += qualMes();
    }
}

bool Data::isValidDay(int newDays)
{
}

void Data::addDays(int newDias)
{
    // verificar
    if (!isValidDay(newDias))
        throw "essa data nao e valida";
    // somar
    this->dia += newDias;
    // normalizar
    normalizar();
}

// 5
Data Data::operator+(int newDias)
{
    Data adiciona = *this;

    adiciona.dia = this->dia + newDias;
    adiciona.normalizar();
    return adiciona;
}

// 6
ostream &operator<<(ostream &output, const Data &temp)
{
    output << temp.dia << "/" << temp.mes << "/" << temp.ano << endl;
    return output;
}

// 7
int Data::diferencaDeDias(Data temp)
{
    int quntdias = 0;
    while (this->dia != temp.dia || this->mes != temp.mes || this->ano != temp.ano)
    {
        temp.addDays(1);
        quntdias++;
    }
    return quntdias;
}

// 8
int Data::operator-(Data temp)
{
    int total = 0;
    total = diferencaDeDias(*this, temp);
    return total;
}
