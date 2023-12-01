#include <iostream>

using namespace std;

class Data
{
    int dia;
    int mes;
    int ano;

public:
    // 1.
    Data();

    // 2.
    bool valida(int, int, int);
    Data(int, int, int);

    // 3.
    int getAno();
    int getMes();
    int getDia();
};

// 1.
Data ::Data()
{

    this->dia = 01;
    this->mes = 01;
    this->ano = 0001;
}

// 2.
bool Data::valida(int dia, int mes, int ano)
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
    if (!valida(dia, mes, ano))
    {
        throw "data invalida";
    }

    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

// 3.
int Data::getAno() { return ano; }
int Data::getMes() { return mes; }
int Data::getDia() { return dia; }

// 4.

int main()
{
    // 1.
    //  Data hoje();

    // 2.
    // try
    // {
    //     Data hoje(92,36,18364);
    // }
    // catch(char * msg)
    // {
    //     cerr << "erro na aplicacao. mensagem:" << msg << endl;
    // }

    return 0;
}