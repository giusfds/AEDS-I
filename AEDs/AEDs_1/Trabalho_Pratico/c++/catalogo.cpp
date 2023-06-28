#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// FRUFRU
// ANCHOR frufru
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

void printColorLn(string color, string msg) {
  cout << color << msg << RESET << endl;
}


string readString()
{
  // ler ate o fim da string, contando os espacos
  string str;
  getline(cin, str);
  return str;
}

class Veiculo
{
private:
  // aqui estao as variaveis, onde vao pegas as infos do carro
  string placa;
  int ano;
  float preco;
  string modelo;
  string marca;
  string tipo;
  string obs;

public:
  static int contador;

  // Métodos get
  string getModelo() { return modelo; }
  string getMarca() { return marca; }
  string getTipo() { return tipo; }
  string getObs() { return obs; }
  float getPreco() { return preco; }
  int getAno() { return ano; }
  string getPlaca() { return placa; }

  // Métodos set

  void setModelo(string novoModelo) { modelo = novoModelo; }
  void setMarca(string novaMarca) { marca = novaMarca; }
  void setTipo()
  {
    do
    {
      cout << "qual e o tipo de veiculo (carro ou moto)" << endl;
      tipo = readString();
    } while (tipo != "carro" && tipo != "Carro" && tipo != "moto" &&
             tipo != "Moto");

    this->tipo = tipo;
  }
  void setObs(string novaObs)
  {
    obs = novaObs;
  }
  void setPlaca(string placa) { this->placa = placa; }
  void setPreco(string preco)
  {
    this->preco = stof(preco); // trocando de string para float
  }
  void setAno()
  {

    while (true)
    {
      try
      {
        this->ano = stoi(readString());
        break;
      }
      catch (...)
      {
      }
    }
  }

  // aqui estao as variaveis, onde vao pegas as infos do carro

  void print(){
    // ANCHOR veiculoprint
      cout << "A placa do veiculo e:"<< getPlaca();
      cout << "O ano do veiculo e:"<< getAno();
      cout << "O preco do veiculo e:" << getPreco();
      cout << "O modelo do veiculo e:" << getModelo();  //arruamr cosmeticamnete
      cout << "A marca do veiculo e:" <<getMarca();
      cout << "O veiculo e um(a):" <<getTipo();
      cout << "A obs do veiculo e:" << getObs() << endl;  
  }
};
int Veiculo::contador = 0;

int menu()
{
  int aux;
  do
  {
    printColorLn (MAGENTA, "Ola, aqui em baixo esta nosso menu, escolha a opcao");
    cout << "[1] - para listar todos os veiculos" << endl;
    cout << "[2] - para pesquisar os veiculos" << endl;     // feito
    cout << "[3] - para cadastrar um novo veiculo" << endl; // feito
    cout << "[4] - para editar o cadastro do veiculo" << endl;
    cout << "[5] - excluir um carro ja existente" << endl;
    cout << "[0] - sair do programa" << endl; // feito

    scanf("%d%*c", &aux);
  } while (aux > 5 && aux < 0);
  return aux;
}

void excluir(Veiculo excluir)
{
  // aqui serve para ezvasair o vetor

  FILE *arquivo = fopen("veiculos.txt", "a");

  if (Veiculo::contador == 0) return;

  for (int i = 0; i < Veiculo::contador; i++) {
    // achar o indice do carro a ser excluido pela placa
  }

  // limpar o vetor
  Veiculo::contador = 0;

  fclose(arquivo);
}

void printarArquivo()
{
 
}

class ListaVeiculos
{
  Veiculo VetVeiculos[500];

public:

// falta o editar e o ler do arquivo e passar para o vetor

  void Cadastrar()
  {
    // ANCHOR cadastro
    cout << "qual e a placa do veiculo" << endl; // com a placa na classe provada
    VetVeiculos[Veiculo::contador].setPlaca(readString());
    cout << "qual e o ano do veiculo" << endl; // ano
    VetVeiculos[Veiculo::contador].setAno();
    cout << "qual e o preco do veiculo" << endl; // preco
    VetVeiculos[Veiculo::contador].setPreco(readString());
    cout << "qual e o modelo do veiculo" << endl; // modelo
    VetVeiculos[Veiculo::contador].setModelo(readString());
    cout << "qual e a marca do veiculo" << endl; // marca
    VetVeiculos[Veiculo::contador].setMarca(readString());
    // cout << "qual e o tipo de veiculo (carro ou moto)" << endl; // tipo
    VetVeiculos[Veiculo::contador].setTipo();
    cout << "tem alguma obs" << endl; // obs
    VetVeiculos[Veiculo::contador].setObs(readString());

    Veiculo::contador++;

    printColorLn(GREEN, "O carro foi cadastrado!");
    cout << endl;
  }

  void Excluir(Veiculo excluir) {

    // ANCHOR excluir

    // deletar o carro do arquivo
    if (Veiculo::contador == 0)
    {
      printColorLn(RED, "erro lista vazia");
     return;
    }

    // buscando a posicao do carro a ser excluido
    bool found = false;
    int i;
    cout << Veiculo::contador << endl;
    cout << VetVeiculos[0].getPlaca() << endl;
    for (i = 0; !found && i < Veiculo::contador-1; i++)
    {
      cout << "A" << endl;
      if (VetVeiculos[i].getPlaca() == excluir.getPlaca())
      {
        found = true;
        VetVeiculos[i] = VetVeiculos[Veiculo::contador - 1];
      }
    }
    Veiculo::contador--;

    printColorLn(GREEN, "carro excluido com sucesso!");
  }

  void Listar()
  {

  //ANCHOR listar 
    printColorLn(YELLOW, "aqui estao todos os carros cadastrados");

    // fazer um if para lista vazia
    if (Veiculo::contador == 0)
    {
      cout << "A lista esta vazia" << endl;
    }
    
    for (int i = 0; i < Veiculo::contador; i++)
    {
      VetVeiculos[i].print();
    }
  }

  void PrintaNoArquivo(){
    // ANCHOR printnoarquivo
    // para printar no arquivo
    FILE *arquivo = fopen("veiculos.txt", "w");
    for (int i = 0; i < Veiculo::contador; i++)
    {
      fprintf(arquivo, "%s; ", VetVeiculos[i].getPlaca().c_str());
      fprintf(arquivo, "%d; ", VetVeiculos[i].getAno());
      fprintf(arquivo, "%.2f; ", VetVeiculos[i].getPreco());
      fprintf(arquivo, "%s; ", VetVeiculos[i].getModelo().c_str());
      fprintf(arquivo, "%s; ", VetVeiculos[i].getMarca().c_str());
      fprintf(arquivo, "%s; ", VetVeiculos[i].getTipo().c_str());
      fprintf(arquivo, "%s;\n", VetVeiculos[i].getObs().c_str());

    }
    
    fclose(arquivo);
  }

  Veiculo Pesquisar(){
    // ANCHOR pesquisar
    // pesquisa atravez da placa do carro

    printColorLn(YELLOW, "digite sua placa");

    string placa = readString();

    for (int i = 0; i < Veiculo::contador; i++)
    {
      if (VetVeiculos[i].getPlaca() == placa)
      {
        return VetVeiculos[i];
      }
    }

  throw string("carro nao encontrado");
  }
};

int main()
{
  // ANCHOR main
  ListaVeiculos lista;

  // switch case com a variavel do menu
  int Menu;
  Veiculo veiculo; // pensar mais sobre dps
  while ((Menu = menu()) != 0)
  {
    switch (Menu)
    {
    case 1:
      /* parte para listar todos os veiculos */
      lista.Listar();
      break;
    case 2:
      /* pesquisar todos os veiculos */
      try
      {
        veiculo = lista.Pesquisar();
        veiculo.print();
      }
      catch (string erro)
      {
        printColorLn(RED, "erro, carro nao encontrado");
      }
      break;
    case 3:
      /* cadastro de um novo veiculo */
      lista.Cadastrar();
      break;
    case 4:
      /* para ediatr o cadastro dos veiculos */

      break;
    case 5:
      /* excluir um carro ja existente */
      veiculo = lista.Pesquisar();
      veiculo.print();
      lista.Excluir(veiculo);
      break;
    default:
      break;
    }
  }

  lista.PrintaNoArquivo();

  return 0;
}
