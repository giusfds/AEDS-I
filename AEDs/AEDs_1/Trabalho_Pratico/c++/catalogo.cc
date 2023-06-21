#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string readString() {
  // ler ate o fim da string, contando os espacos
  string str;
  getline(cin, str);
  return str;
}

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
  static int contador;

  veiculo() {
    // tem q colocar para printar no final do arquivo, apra adicionar ao arquivo
    contador++;
  }

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
  void setTipo() {
    string tipo;
    do {
      tipo = readString();
    } while (tipo != "carro" || tipo != "Carro" || tipo != "moto" ||
             tipo != "Moto");

    this->tipo = tipo;
  }
  void setObs(string novaObs) { obs = novaObs; }
  void setPlaca(string placa) { this->placa = placa; }
  void setPreco(string preco) {
    this->preco = stof(preco); // trocando de string para float
  }
  void setAno() {

    while (true) {
      try {
        this->ano = stoi(readString());
        break;
      } catch (...) {
      }
    }
  }

  // aqui estao as variaveis, onde vao pegas as infos do carro
};
int veiculo::contador = 0;

int menu() {
  int aux;
  do {
    cout << "Ola, aqui em baixo esta nosso menu, escolha a opcao" << endl;
    cout << "[1] - para listar todos os veiculos" << endl;
    cout << "[2] - para pesquisar os veiculos" << endl; // feito
    cout << "[3] - para cadastrar um novo veiculo" << endl; // feito
    cout << "[4] - para editar o cadastro do veiculo" << endl;
    cout << "[5] - excluir um carro ja existente" << endl;
    cout << "[0] - sair do programa" << endl; // feito

    scanf("%d%*c", &aux);
  } while (aux > 5 || aux < 0);
  return aux;
}

void cadastro(veiculo VetVeiculos[]) {

  fstream arquivo("veiculos.txt", ios::app);

  cout << "qual e a placa do veiculo" << endl; // com a placa na classe provada
  VetVeiculos[veiculo::contador].setPlaca(readString());
  cout << "qual e o ano do veiculo" << endl; // ano
  VetVeiculos[veiculo::contador].setAno();
  cout << "qual e o preco do veiculo" << endl; // preco
  VetVeiculos[veiculo::contador].setPreco(readString());
  cout << "qual e o modelo do veiculo" << endl; // modelo
  VetVeiculos[veiculo::contador].setModelo(readString());
  cout << "qual e a marca do veiculo" << endl; // marca
  VetVeiculos[veiculo::contador].setMarca(readString());
  cout << "qual e o tipo de veiculo (carro ou moto)" << endl; // tipo
  VetVeiculos[veiculo::contador].setTipo();
  cout << "tem alguma obs" << endl; // obs
  VetVeiculos[veiculo::contador].setObs(readString());

  // printar no aquivo

  arquivo << VetVeiculos[veiculo::contador].getPlaca();
  arquivo << VetVeiculos[veiculo::contador].getAno();
  arquivo << VetVeiculos[veiculo::contador].getPreco();
  arquivo << VetVeiculos[veiculo::contador].getModelo();
  arquivo << VetVeiculos[veiculo::contador].getMarca();
  arquivo << VetVeiculos[veiculo::contador].getTipo();
  arquivo << VetVeiculos[veiculo::contador].getObs();

  // arrumar a parte de printar no arquivo

  cout << "O carro foi cadastrado!" << endl;
}

veiculo pesquisa(veiculo VetVeiculos[], string placa) {

  for (int i = 0; i < 5; i++) {
    if (VetVeiculos[i].getPlaca() == placa) {
      return VetVeiculos[i];
    }
  }

  throw "ksljfkljsdlfjs";

  // return VetVeiculos[0];
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
      try {
        pesquisa(VetVeiculos, readString());
      } catch (exception erro) {
        cout << erro.what() << endl;
      }
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
/*
1) como faz o ngs de edicao e e deletar
2) qnd deleta, por estar colocando em um verto, posso deixar um "buraco" no
vetor, ou eu tenho que lidar com o suposto "buraco" 
3) sujestao de como primtar
as linhas do arquivode forma mais facil 
(sem se usando while(file.eof()) {file>> print})
4) esta dando seguimental falt no arquivo

Respostas:
1)o que ta no vetor ser printado no arquivo dps, colocar no arquivo, de forma que o arquivo seja so para salvar
(ter um metodo de sincronizar o vetor com o arquivo)
2) com o buraco, vc tem que pegar o carro do final e colocar no "buraco"
3) manipular o vetor, o aquivo ta la so para salvar os dados, para printar, e so percorrer o veiculo
de forma a printar tudo o que vc quiser que deve esta presente no vetor
4) usar a biblioteca file com ponteiro

*/


/*
ARRUMAR O SEGUIMENTAL FUALT DO CADASTRO NA MAIN
*/