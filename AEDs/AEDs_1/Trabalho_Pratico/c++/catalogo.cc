#include <fstream>
#include <iostream>

using namespace std;

class veiculo {
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
  void setTipo(string novoTipo) { tipo = novoTipo; } 
  void setObs(string novaObs) { obs = novaObs; }
  void setPlaca(string placa) { this->placa = placa; }
  void setPreco(string preco) {
    this->ano = stof(preco); // trocando de string para float
  }
  void setAno(string ano) {
    this->ano = stoi(ano); // trocando de string para int
  }

  // aqui estao as variaveis, onde vao pegas as infos do carro
};

int menu() {
  int aux;
  do {
    cout << "Ola, aqui em baixo esta nosso menu, escolha a opcao" << endl;
    cout << "[1] - para listar todos os veiculos" << endl;
    cout << "[2] - para pesquisar os veiculos" << endl;
    cout << "[3] - para cadastrar um novo veiculo" << endl;
    cout << "[4] - para editar o cadastro do veiculo" << endl;
    cout << "[5] - excluir um carro ja existente" << endl;
    cout << "[0] - sair do programa" << endl;

    scanf("%d%*c", &aux);
  } while (aux > 5 || aux < 0);
  return aux;
}

string readString() {
  // ler ate o fim da string, contando os espacos
  string str;
  getline(cin, str);
  return str;
}

void cadastro(veiculo VetVeiculos[]) {

  fstream arquivo("veiculos.txt");

  cout << "qual e a placa do veiculo" << endl; // com a placa na classe provada
  VetVeiculos[0 /*a definir*/].setPlaca(readString());
  cout << "qual e o ano do veiculo" << endl; // ano
  VetVeiculos[0 /*a definir*/].setAno(readString());
  cout << "qual e o preco do veiculo" << endl; // preco
  VetVeiculos[0 /*a definir*/].setPreco(readString());
  cout << "qual e o modelo do veiculo" << endl; // modelo
  VetVeiculos[0 /*a definir*/].setModelo(readString());
  cout << "qual e a marca do veiculo" << endl; // marca
  VetVeiculos[0 /*a definir*/].setMarca(readString());
  cout << "qual e o tipo de veiculo (carro ou moto)" << endl; // tipo
  VetVeiculos[0 /*a definir*/].setTipo(readString());
  cout << "tem alguma obs" << endl; // obs
  VetVeiculos[0 /*a definir*/].setObs(readString());
  
    
  //printar no aquivo

  arquivo << VetVeiculos[0 /*a definir*/].getPlaca();
  arquivo << VetVeiculos[0 /*a definir*/].getAno();
  arquivo << VetVeiculos[0 /*a definir*/].getPreco();
  arquivo << VetVeiculos[0 /*a definir*/].getModelo();
  arquivo << VetVeiculos[0 /*a definir*/].getMarca();
  arquivo << VetVeiculos[0 /*a definir*/].getTipo();
  arquivo << VetVeiculos[0 /*a definir*/].getObs();
  
  
}

int main() {
  int Menu;
  veiculo VetVeiculos[5];
  // switch case com a variavel do menu
  while ((Menu = menu()) != 0) {
    switch (Menu) {
    case 1:
      /* parte para listar todos os veiculos */
      
      break;
    case 2:
      /* pesquisar todos os veiculos */

      break;
    case 3:
      /* cadastro de um novo veiculo */
      cadastro(VetVeiculos);
      break;
    case 4:
      /* para ediatr o cadastro dos veiculos */

      break;
    case 5:
      /* excluir um carro ja existente */

      break;
    default:
      break;
    }
  }

  return 0;
}