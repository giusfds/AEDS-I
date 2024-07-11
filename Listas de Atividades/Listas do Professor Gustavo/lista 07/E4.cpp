#include <iostream>
using namespace std;

// CONTA
class Conta
{
    int numero;
    float saldo;

public:
    string pix;

    Conta(int numero);
    float saldo();
    void sacar(float valor);
    void depositar(float valor);
    int getConta();
};

// CORRENTE
class Corrente : public Conta
{
    // ...
};
// POUPANCA
class Poupanca : public Conta
{
    int *aniversario;
    float *valor;

public:
    int getAniversario();
    int aplicaJuros();
};

// ESPECIAL
class Especial : public Conta
{
public:
    float limite;
    Especial(float limite);
};

//  PESSOA
class Pessoa
{
private:
    string nome;

public:
    Conta *conta;

    Pessoa(string nome, string CPF);
    string getNome();
};

// FISICA
class Fisica : public Pessoa
{
    string CPF;

public:
    Fisica(string CPF);
    string getCPF();
};

// JURIDICA

class Juridica : public Pessoa
{
    string CNPJ;

public:
    Juridica(string CPF);
};

// HISTORICO
class Historico
{
    int *numero_conta;
    int *operacao;
    float *valor;

public:
    void operar(Conta, int operacao, float valor);
};
