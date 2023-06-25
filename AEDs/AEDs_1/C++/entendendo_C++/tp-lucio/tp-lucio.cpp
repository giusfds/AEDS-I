#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

using namespace std;

class Data{
private:
  int dia;
  int mes;
  int ano;

public:
  static int contador;
  Data() {
    contador++;
    this->dia = 0;
    this->mes = 0;
    this->ano = 0;
  }
  int getDia() { return this->dia; }
  int getMes() { return this->mes; }
  int getAno() { return this->ano; }

  bool leiaData() {
    bool sucesso = true;
    fflush(stdin);
    int dia, mes, ano;
    printf("Data[dd/mm/aaaa]:");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if(dataValida(dia, mes, ano)){
        setData(dia, mes, ano);
    }
    else{
        printf("DATA INVALIDA!\n");
        contador--;
        sucesso = false;
    }
    return sucesso;
  }
  void escrevaData() {
       printf("%02d/%02d/%04d", getDia(), getMes(), getAno());
  }

  bool dataValida(int dia, int mes, int ano)
  {
           if(dia>=1 && dia<=31)
           {
               if(mes>=1 && mes<=12)
               {
                   if(ano<=2024)
                   {
                       return true;
                   }
               }
           }
           return false;
  }

  void setData(int dia, int mes, int ano) {

    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
  }
};

int Data::contador = 0;

class Aluno{
private:
    string nome;
    Data* nascimento;
public:
    static int contador;
    Aluno()
    {
        this-> nome = "";
        this-> nascimento = new Data();
        contador++;
    }
    void setNome(string nome)
    {
        this-> nome=nome;
    }
    void setNascimento(Data *nascimento)
    {
        this-> nascimento=nascimento;
    }
    string getNome()
    {
        return this-> nome;
    }
    Data* getNascimento()
    {
        return this-> nascimento;
    }
    void setAluno(string nome, Data *nascimento)
    {
        this-> setNome(nome);
        this-> setNascimento(nascimento);
    }
    void leiaAluno()
    {
        string novonome;
        printf("\nNome: ");
        fflush(stdin);
        getline(cin, novonome);
        Data* novonascimento = new Data;
        printf("\nData de nascimento[dd/mm/aaaa]: ");
        fflush(stdin);
        if(novonascimento->leiaData())
        {
            setAluno(novonome, novonascimento);
        }
        else{
            printf("\nERRO NO CADASTRO");
            contador--;
        }
    }
    void escrevaAluno()
    {
        cout<<nome;
        printf("\n");
        nascimento->escrevaData();
    }
};
int Aluno::contador=0;

const int TAM = 100;

int menu()
{
    int opcao;
    do{
        puts("\nMENU DE OPCOES\n\n");
        puts("0 - SAIR");
        puts("1 - CADASTRAR ALUNO");
        puts("2 - LISTAR ALUNOS");

        printf("\nSua opcao: ");
        fflush(stdin);
        cin>>opcao;
    }while(opcao < 0 || opcao > 2);
    return opcao;
}

void listaAlunos(Aluno* aluno[])
{
    for(int i = 1; i <= Aluno::contador; i++)
    {
        aluno[i]->escrevaAluno();
        printf("\n\n");
    }
}

void novoAluno(Aluno* aluno[])
{
    aluno[Aluno::contador] = new Aluno();
    aluno[Aluno::contador]-> leiaAluno();
}

int main()
{
    Aluno* aluno[TAM];
    int op;
    do{
        op = menu();
        switch(op)
        {
        case 0:
            puts("OBRIGADO POR USAR O PROGRAMA!");
            break;
        case 1:
            novoAluno(aluno);
            break;
        case 2:
            listaAlunos(aluno);
            break;
        }
    }while(op!=0);

    return 0;
}