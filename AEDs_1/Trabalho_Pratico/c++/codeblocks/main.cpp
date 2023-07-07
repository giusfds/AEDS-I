#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// FRUFRU
// ANCHOR frufru
#define RED (string) "\x1b[31m"
#define GREEN (string) "\x1b[32m"
#define YELLOW (string) "\x1b[33m"
#define BLUE (string) "\x1b[34m"
#define MAGENTA (string) "\x1b[35m"
#define CYAN (string) "\x1b[36m"
#define RESET (string) "\x1b[0m"

void printColorLn(string color, string msg)
{
  cout << color << msg << RESET << endl;
}

void clear()
{
  system("cls");
}

string readString()
{
  // ANCHOR readstring
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
  void setPlaca()
  {
    string placa;
    bool invalid = false;

    string errorMsg = RED + "Placa inválida, " + RESET + "tente novamente: ";

    do
    {
      if (invalid)
        cout << errorMsg;
      placa = readString();
    } while ((invalid = placa.length() != 7));

    this->placa = placa;
  }
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
  // polimorfismo

  void setPlaca(string placa)
  {
    this->placa = placa;
  }
  void setAno(int ano)
  {
    this->ano = ano;
  }
  void setPreco(float preco)
  {
    this->preco = preco;
  }
  void setTipo(string tipo)
  {
    this->tipo = tipo;
  }

  // aqui estao as variaveis, onde vao pegas as infos do carro

  void print()
  {
    // ANCHOR veiculoprint
    printf("%10s %10d %10.2f %10s %10s %10s %10s\n", getPlaca().c_str(), getAno(), getPreco(), getModelo().c_str(), getMarca().c_str(), getTipo().c_str(), getObs().c_str());
  }
};
int Veiculo::contador = 0;

int menu()
{
  // ANCHOR menu
  int aux;
  do
  {
    // printColorLn(MAGENTA, "Ola, aqui em baixo esta nosso menu, escolha a opcao");  opcao com frufru (nn roda no CB)
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
  // ANCHOR excluir

  FILE *arquivo = fopen("veiculos.txt", "a");

  if (Veiculo::contador == 0)
    return;

  for (int i = 0; i < Veiculo::contador; i++)
  {
    // achar o indice do carro a ser excluido pela placa
  }

  // limpar o vetor
  Veiculo::contador = 0;

  fclose(arquivo);
}

class ListaVeiculos
{
  Veiculo VetVeiculos[500];

public:
  ListaVeiculos()
  {
    getFromFile();
  }

  void Cadastrar()
  {
    // ANCHOR cadastro
    if (Veiculo::contador == 500)
    {
      cout << "atingiu o maximo de veiculos cadastrados" << endl;
      // printColorLn(RED, "atingiu o maximo de veiculos cadastrados"); opcao com frufru (nn roda no CB)
      return;
    }

    clear();

    cout << "qual e a placa do veiculo" << endl; // com a placa na classe provada
    VetVeiculos[Veiculo::contador].setPlaca();
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
    clear();
    cout << "O carro foi cadastrado!" << endl;
    // printColorLn(GREEN, "O carro foi cadastrado!"); //opacao com frufru, nn funciona no CB
    cout << endl;
  }

  // ANCHOR listar
  void Listar()
  {
    clear();
    cout << "aqui estao todos os carros cadastrados" << endl;
    // printColorLn(YELLOW, "aqui estao todos os carros cadastrados"); // opcao com frufru, nao funciona no CB
    // fazer um if para lista vazia
    if (Veiculo::contador == 0)
    {
      cout << "A lista esta vazia" << endl;
      return;
    }
    printf("%d\n", Veiculo::contador);
    printf("%10s %10s %10s %10s %10s %10s %10s \n", "placa", "ano", "preco", "modelo", "marca", "tipo", "obs");

    for (int i = 0; i < Veiculo::contador; i++)
    {
      VetVeiculos[i].print();
    }
  }

  // ANCHOR getFromFile
  void getFromFile()
  {
    FILE *arquivo = fopen("veiculos.txt", "r");


    char placa[10], modelo[50], marca[50], obs[50], tipo[6];
    int ano;
    float preco;

    fgets(modelo, 50, arquivo);

    for (int i = 0; !feof(arquivo); i++)
    {

      fscanf(arquivo, "%[^;]%*c", placa);
      fscanf(arquivo, "%d%*c", &ano);
      fscanf(arquivo, "%f%*c", &preco);
      fscanf(arquivo, "%[^;]%*c", marca);
      fscanf(arquivo, "%[^;]%*c", modelo);
      fscanf(arquivo, "%[^;]%*c", tipo);
      fscanf(arquivo, "%[^;]%*c", obs);

      if (getc(arquivo) == EOF)
      {
        break;
      }
      string objPlaca(placa);
      VetVeiculos[i].setPlaca(objPlaca);

      VetVeiculos[i].setAno(ano);

      VetVeiculos[i].setPreco(preco);

      string objMarca(marca);
      VetVeiculos[i].setMarca(objMarca);

      string objModelo(modelo);
      VetVeiculos[i].setModelo(objModelo);

      VetVeiculos[i].setTipo(tipo);

      string objObs(obs);
      VetVeiculos[i].setObs(objObs);


      Veiculo::contador++;
    }

    fclose(arquivo);
  }

  void PrintaNoArquivo()
  {
    // ANCHOR printnoarquivo
    // para printar no arquivo
    FILE *arquivo = fopen("veiculos.txt", "w");

    fprintf(arquivo, "%d\n", Veiculo::contador);

    for (int i = 0; i < Veiculo::contador; i++)
    {
      fprintf(arquivo, "%s;", VetVeiculos[i].getPlaca().c_str());
      fprintf(arquivo, "%s;", VetVeiculos[i].getMarca().c_str());
      fprintf(arquivo, "%s;", VetVeiculos[i].getModelo().c_str());
      fprintf(arquivo, "%d;", VetVeiculos[i].getAno());
      fprintf(arquivo, "%.2f;", VetVeiculos[i].getPreco());
      fprintf(arquivo, "%s;", VetVeiculos[i].getTipo().c_str());
      fprintf(arquivo, "%s;\n", VetVeiculos[i].getObs().c_str());
    }

    fclose(arquivo);
  }

  // ANCHOR pesquisar
  Veiculo &Pesquisar()
  {
    // pesquisa atravez da placa do carro

    cout << "digite sua placa" << endl;
    // printColorLn(YELLOW, "digite sua placa"); //nao funciona no CB FRUFRU

    string placa = readString();

    for (int i = 0; i < Veiculo::contador; i++)
    {
      if (VetVeiculos[i].getPlaca() == placa)
      {
        return VetVeiculos[i];
      }
    }

    throw string(RED + "carro nao encontrado" + RESET);
  }

  // ANCHOR excluir
  void Excluir(Veiculo excluir)
  {

    // deletar o carro do arquivo
    if (Veiculo::contador == 0)
    {
      cout << "erro lista vazia" << endl;
      // printColorLn(RED, "erro lista vazia");
      return;
    }

    // buscando a posicao do carro a ser excluido
    bool found = false;
    int i;
    cout << Veiculo::contador << endl;
    cout << VetVeiculos[0].getPlaca() << endl;
    for (i = 0; !found && i < Veiculo::contador - 1; i++)
    {

      if (VetVeiculos[i].getPlaca() == excluir.getPlaca())
      {
        found = true;
        VetVeiculos[i] = VetVeiculos[Veiculo::contador - 1];
      }
    }
    Veiculo::contador--;

    cout << "carro excluido com sucesso!" << endl;
    // printColorLn(GREEN, "carro excluido com sucesso!");
  }

  // ANCHOR editar
  void Editar(Veiculo &veiculo)
  {
    // buscando a posicao do carro a ser editado
    clear();
    cout << "comece a editar o seu veiculo." << endl;
    // printColorLn(YELLOW, "comece a editar o seu veiculo.");
    cout << "qual e o ano do veiculo" << endl; // ano
    veiculo.setAno();
    cout << "qual e o preco do veiculo" << endl; // preco
    veiculo.setPreco(readString());
    cout << "qual e o modelo do veiculo" << endl; // modelo
    veiculo.setModelo(readString());
    cout << "qual e a marca do veiculo" << endl; // marca
    veiculo.setMarca(readString());
    cout << "qual e o tipo de veiculo (carro ou moto)" << endl; // tipo
    veiculo.setTipo();
    cout << "tem alguma obs" << endl; // obs
    veiculo.setObs(readString());
    clear();
    cout << "O carro foi editado" << endl;
    // printColorLn(GREEN, "O carro foi editado");
    cout << endl;
  }
};

// ANCHOR main
int main()
{
  ListaVeiculos lista;

  // switch case com a variavel do menu
  int Menu;
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
          lista.Pesquisar().print();
        }
        catch (string erro)
        {
          cout << erro << endl;
        }
      break;
      case 3:
        /* cadastro de um novo veiculo */
        lista.Cadastrar();
      break;
      case 4:
        /* para ediatr o cadastro dos veiculos */
        try
        {
          lista.Editar(lista.Pesquisar());
        }
        catch (string erro)
        {
          cout << erro << endl;
        }
      break;
      case 5:
        /* excluir um carro ja existente */
        try
        {
          lista.Excluir(lista.Pesquisar());
        }
        catch (string erro)
        {
          cout << erro << endl;
        }
      break;
    }
  }
  lista.PrintaNoArquivo();
  cout << "tachu, ate mais =D" << endl;
  return 0;
}


/*

3) colocar 3 veiculos no arquivo antes de mandar
*/
