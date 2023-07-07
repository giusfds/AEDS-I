#include <iostream>
#include <stdbool.h>
using namespace std;

class Data
{
private:
 int dia;
 int mes;
 int ano;
public:
static int c;
Data()                   
    {
        this-> dia=0;
        this-> mes=0;
        this-> ano=0;
        c++;
    }
 void setDia(int dia)
 {
  this->dia=dia; 
 }
 void setMes(int mes)
 {
  this->mes=mes; 
 }
 void setAno(int ano)
 {
  this->ano=ano; 
 }
 void setData(int d,int m,int a)
 {
  setDia(d);
  setMes(m);
  setAno(a);
 }
 int getDia()
 {
  return this->dia;
 }
int getMes()
 {
  return this->mes;
 }
int getAno()
 {
  return this->ano;
 }

bool testeData(int dia,int mes,int ano)
    {
      bool teste = true;
    if (ano < 0)
    {
        teste = false;
    }
    if (mes < 1 || mes > 12)
    {
        teste = false;
    }

    int numDias = 31;

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        numDias = 30;
    }
    else if(mes == 2) numDias = 28;

    if (dia < 1 || dia > numDias) {
        teste = false;
    }

    return teste;
    }

bool leiaData()
    {
        bool sucesso=true;
        int dia, mes, ano;
        scanf("%i/%i/%i",&dia,&mes,&ano);
            if(testeData(dia,mes,ano))
            {
                setData(dia,mes,ano);
            }
            else
            {
                printf("\nDATA INVALIDA!");
                c--;
                sucesso = false;
            }
    }
 void escrevaData()
 {
  printf("\n%i/%i/%i",getDia(),getMes(),getAno());
 }
};
int Data::c=0;

class Pessoa{
private:
    string nome;
    Data* nascimento;
public:
    static int c;
    Pessoa()                             //olhar!
    {
        this->nome="";
        this->nascimento= new Data();
        c++;
    }
    void setNome(string nome)
    {
        this->nome=nome;
    }
    void setNascimento(Data* nascimento)
    {
        this->nascimento=nascimento;
    }
    string getNome()
    {
        return this->nome;
    }
    Data* getNascimento()
    {
        return this->nascimento;
    }

    void setPessoa(string nome, Data* nascimento) //olhar!
    {
        this->nome=nome;
        this->nascimento=nascimento;
    }
    virtual void leiaPessoa(){}
    virtual void escrevaPessoa(){}
bool aniversario(int mes)
    {
      bool teste = false;
      if(nascimento->getMes()== mes) teste = true;
      return teste;
    }
};
int Pessoa::c=0;

class Aluno:public Pessoa{
private:
    int matricula;
public:
    static int c;
    Aluno()
    {
        this->matricula = 0;
        c++;
    }
    void setMatricula(int matricula)
    {
        this->matricula=matricula;
    }
    int getMatricula()
    {
        return this->matricula;
    }
    void leiaMatricula()
    {
        printf("\nMatricula: ");
        fflush(stdin);
        scanf("%d",&matricula);
    }
    void escreveMatricula()
    {
        printf("%d",getMatricula());
    }
    void leiaPessoa()
    {
        string nome;
        Data* nascimento = new Data();
        printf("\nNome: ");
        cin>>nome;
        leiaMatricula();
        printf("\nData de nascimento: ");
        if(nascimento->leiaData())    setPessoa(nome, nascimento);
        else
        {
            printf("ERRO! PROBLEMA NO CADASTRO");
            c--;
        }
    }
    void escrevaPessoa()
    {
        cout<<getNome()<<endl;
        getNascimento()->escrevaData();
        printf("\n");
        escreveMatricula();
    }
};
int Aluno::c = 0;


class Professor:public Pessoa{
private:
    string titulacao;
public:
    static int c;
    Professor()
    {
        this->titulacao="";
        c++;
    }
    void setTitulacao()
    {
        this->titulacao=titulacao;
    }
    string getTitulacao()
    {
        return this->titulacao;
    }
    void leiaTitulacao()
    {
        printf("\nTitulacao: ");
        cin>>titulacao;
    }
    void escreveTitulacao()
    {
        cout<<titulacao;
    }
    void leiaPessoa()
    {
        string nome;
        Data* nascimento = new Data();
        printf("\nNome: ");
        cin>>nome;
        leiaTitulacao();
        printf("\nData de nascimento: ");
        if(nascimento->leiaData())  setPessoa(nome, nascimento);
        else
        {
            printf("ERRO! PROBLEMA NO CADASTRO");
            c--;
        }
    }
    void escrevaPessoa()
    {
        cout<<getNome()<<endl;
        getNascimento()->escrevaData();
        printf("\n");
        escreveTitulacao();
    }
};
int Professor::c = 0;

const int MAX = 100;
      int N = 0;

void novaData(Data* data[])
 {
   if(N<MAX)
   {
    data[N]=new Data();
    data[N]->leiaData();
    N++;
   }
   else
   {
    puts("\n\aLimite atingido");  
   }
 }

void novoAluno(Aluno* aluno[])
{
    int index = Aluno::c;
    aluno[index] = new Aluno();
    aluno[index]->leiaPessoa();
}
void novoProfessor(Professor* professor[])
{
    int index = Professor::c;
    professor[index] = new Professor();
    professor[index]->leiaPessoa();
}

void listaDatas(Data* data[])
{
  for(int i = 0;i<N;i++)
    {
      data[i]->escrevaData();
      printf("\n");
    }
  
}
void listaAlunos(Aluno* aluno[])
{
    for(int i = 0; i<Aluno::c; i++)
    {
        aluno[i]->escrevaPessoa();
        printf("\n");
    }
}
void listaProfessor(Professor* professor[])
{
    for(int i = 0;i<Professor::c;i++)
    {
        professor[i]->escrevaPessoa();
        printf("\n");
    }
}


int Menu()
{
    int op;
    do
    {
        puts("=MENU DE OPCOES=");
        puts("0 - SAIR");
        puts("1 - CADASTRAR ALUNO");
        puts("2 - CADASTRAR PROFESSOR");
        puts("3 - LISTAR ALUNOS");
        puts("4 - LISTAR PROFESSORES");
        puts("5 - LISTAR ANIVERSARIANTES");
        printf("\nSua opcao: ");
        fflush(stdin);
        cin>>op;
    }while(op<0 || op>5);
    return op;
}
int main()
{
    Aluno* aluno[MAX];
    Professor* professor[MAX];
    int op;
    do{
        op = Menu();
        switch(op)
        {
        case 0:
            puts("OBRIGADO POR USAR O PROGRAMA!");
            break;
        case 1:
            novoAluno(aluno);
            break;
        case 2:
            novoProfessor(professor);
            break;
        case 3:
            listaAlunos(aluno);
            break;
        case 4:
            listaProfessor(professor);
            break;
        case 5:
            
        }
    }while(op!=0);

    return 0;
}