#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

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
};
int Veiculo::contador = 0;

int menu()
{
  int aux;
  do
  {
    cout << "Ola, aqui em baixo esta nosso menu, escolha a opcao" << endl;
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
    cout << "qual e o tipo de veiculo (carro ou moto)" << endl; // tipo
    VetVeiculos[Veiculo::contador].setTipo();
    cout << "tem alguma obs" << endl; // obs
    VetVeiculos[Veiculo::contador].setObs(readString());

    Veiculo::contador++;

    // arrumar a parte de printar no arquivo
    cout << "O carro foi cadastrado!" << endl;
    cout << endl;
  }

  void Excluir(Veiculo excluir) {
    // deletar o carro do arquivo
    if (Veiculo::contador == 0)
    {
     cout << "erro lista vazia" << endl;
     return;
    }

    // buscando a posicao do carro a ser excluido
    bool found = false;
    int i;
    for (i = 0; !found && i < Veiculo::contador; i++)
    {
      if (VetVeiculos[i].getPlaca() == excluir.getPlaca())
      {
        found = true;
        VetVeiculos[i] = VetVeiculos[Veiculo::contador - 1];
      }
    }
    Veiculo::contador--;
  }

  void Listar()
  {
    for (int i = 0; i < Veiculo::contador; i++)
    {
      cout << VetVeiculos[i].getPlaca() << endl;
      cout << VetVeiculos[i].getAno() << endl;
      cout << VetVeiculos[i].getPreco() << endl;
      cout << VetVeiculos[i].getModelo() << endl;
      cout << VetVeiculos[i].getMarca() << endl;
      cout << VetVeiculos[i].getTipo() << endl;
      cout << VetVeiculos[i].getObs() << endl;
    }
  }

  void PrintaNoArquivo(){
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
      fprintf(arquivo, "%s; ", VetVeiculos[i].getObs().c_str());

    }
    
    fclose(arquivo);
  }

  Veiculo Pesquisar(){
    // pesquisa atravez da placa do carro

    cout << "digite sua placa" << endl;

    string placa = readString();

    for (int i = 0; i < Veiculo::contador; i++)
    {
      if (VetVeiculos[i].getPlaca() == placa)
      {
        return VetVeiculos[i];
      }
    }

  throw "carro nao encontrado";
  }
};

int main()
{

  ListaVeiculos lista;

  // switch case com a variavel do menu
  int Menu;
  while ((Menu = menu()) != 0)
  {
    Veiculo veiculo; // pensar mais sobre dps
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
      }
      catch (exception erro)
      {
        cout << erro.what() << endl;
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
      lista.Excluir(veiculo);
      break;
    default:
      break;
    }
  }

  lista.PrintaNoArquivo();

  return 0;
}

/*
1) os carros do arquivo ficaram estatcos pos a mudanca?
ou vao sofrer alterao dentro do arquivo?

2) o programa vai comecar, o vetor vazio, ai o vetor vai ser prenchido atravez do arquivo,
linha por linha e vai salvando cada info de forma diferente? (int, float, char...ler o arquivo
de texto e preencher os atributos da class)

3)pode usar em json? tipo, salvar em um json e dps colocar para o structure

*/
