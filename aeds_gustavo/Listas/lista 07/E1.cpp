#include <iostream>

using namespace std;

void clear()
{
    system("cls");
}

class Data
{
protected:
    int dia;
    int mes;
    int ano;

public:
    void saida();

    // 1.
    Data();

    // 2.
    bool valida(int, int, int);
    Data(int, int, int);

    // 3.
    int getAno();
    int getMes();
    int getDia();

    // 4.
    int diasNoMes(int, int);
    void recebe(int);

    // 5.
    Data operator+(int dias)
    {
        Data temp = *this;
        temp.recebe(dias);
        return temp;
    }

    // 6.
    friend ostream &operator<<(ostream &output, const Data &hoje)
    {
        output << hoje.dia << "/" << hoje.mes << "/" << hoje.ano;
        return output;
    }

    // 7.
    int RetornaDiferenca(int, int, int);
    bool operator!=(Data &outraData)
    {
        return (this->dia != outraData.dia || this->mes != outraData.mes || this->ano != outraData.ano);
    }
    Data operator++(int valor)
    {
        *this = *this + 1;
        return *this;
    }
    bool operator<(const Data &outraData) const
    {
        if (ano < outraData.ano)
            return true;
        else if (ano > outraData.ano)
            return false;

        if (mes < outraData.mes)
            return true;
        else if (mes > outraData.mes)
            return false;

        return dia < outraData.dia;
    }
    bool operator==(const Data &outraData) const
    {
        return (dia == outraData.dia) && (mes == outraData.mes) && (ano == outraData.ano);
    }
    bool operator<=(const Data &outraData) const
    {
        return (*this < outraData) || (*this == outraData);
    }

    // 8.
    int diferencaEmDias(int, int, int);
    Data operator-(int dias)
    {
        Data temp = *this;
        temp.diferencaEmDias(this->dia, this->mes, this->ano);
        return temp;
    }
};

void Data::saida()
{

    if (dia < 10)
    {
        cout << "0";
    }
    cout << dia << '/';

    if (mes < 10)
    {
        cout << "0";
    }
    cout << mes << '/';

    if (ano < 10)
    {
        cout << "000";
    }
    else if (ano < 100)
    {
        cout << "00";
    }
    else if (ano < 1000)
    {
        cout << "0";
    }
    cout << ano << endl;
}

// 1.
Data::Data()
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
int Data::diasNoMes(int mes, int ano)
{
    // verificando ano bisexto
    if (mes == 2)
    {
        return ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) ? 29 : 28;
    }
    // verificando se o mes tem 30 ou 31 dias
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

void Data::recebe(int dias)
{
    // adicionar dias a data ja criada
    if (dias > 0)
    {
        for (int i = 0; i < dias; i++)
        {
            if (dia < diasNoMes(mes, ano))
            {
                dia++;
            }
            else
            {
                dia = 1;
                if (mes < 12)
                {
                    mes++;
                }
                else
                {
                    mes = 1;
                    ano++;
                }
            }
        }
    }
    else
    {
        throw "o numero de dias tem que ser maior que 0";
    }
}

// 5/6.
/*
apenas consegui montar ele na class, nao usando scopo
*/

// 7.

int Data::RetornaDiferenca(int dia, int mes, int ano)
{

    int diferenca = 0;

    Data d1 = *this, d2(dia, mes, ano);

    if (d1 < d2)
        while (d1++ <= d2)
            diferenca++;

    else
        while (d2++ <= d1)
            diferenca++;

    return diferenca;
}

// 8.
int Data::diferencaEmDias(int dias, int meses, int anos)
{

    if (dias < 1 || dias > diasNoMes(meses, anos) || meses < 1 ||
        meses > 12 || anos < 1)
    {
        throw "Data inválida.";
    }

    long int diasDataAtual = diasNoMes(this->mes, this->ano);
    long int diasDataParametro = diasNoMes(mes, ano);

    int diferenca = static_cast<int>(diasDataParametro - diasDataAtual);

    return diferenca;
}

int main()
{
    clear();

    // 1.
    // Data hoje;
    // hoje.saida();

    // 2.
    // try
    // {
    //     Data hoje(92, 36, 18364);
    // }
    // catch (char *msg)
    // {
    //     cerr << "erro na aplicacao. mensagem:" << msg << endl;
    // }

    // cout << "o cosigo se encontra nas linhas 155 a 157" << endl;

    // 4.
    // try
    // {

    //     Data hoje(9, 11, 2004);
    //     hoje.saida();
    //     hoje.recebe(10);
    //     hoje.saida();
    // }
    // catch (char *msg)
    // {
    //     cerr << "erro na aplicacao, mensagem:" << msg << endl;
    // }

    // 5.
    // try
    // {
    //     Data hoje(9, 11, 2004);
    //     hoje = hoje + 100;
    //     hoje.saida();
    // }
    // catch (char *msg)
    // {
    //     cerr << "erro na aplicacao, mensagem:" << msg << endl;
    // }

    // 6.
    // Data hoje(9, 11, 2004);
    // cout << hoje << endl;

    // 7.
    // int diferenca;
    // Data hoje(9, 11, 2004);
    // cout << hoje << endl;
    // diferenca = hoje.RetornaDiferenca(8, 11, 2004);
    // cout << hoje << endl;
    // cout << diferenca << endl;

    // 8.
    try
    {
        Data hoje(9, 11, 2004);
        hoje - 8;
        cout << hoje << endl;
    }
    catch (char *msg)
    {
        cerr << "erro na aplicacao, mensagem:" << msg << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}