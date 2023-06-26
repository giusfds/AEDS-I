#include <fstream>
#include <iostream>
#include <string>
#include <limits>
// #include <stdlib.h>


using namespace std;

string readString() {
  // ler ate o fim da string, contando os espacos
  string str;
  cout << "ANTES" << endl;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, str);
  // cin >> str;
  cout << "DEPOIS" << endl;
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
    do {
      cout << "ksdlfjksdlfj" <<endl;
      tipo = readString();
    } while (tipo != "carro" && tipo != "Carro" && tipo != "moto" &&
             tipo != "Moto");

    this->tipo = tipo;
  }
  void setObs(string novaObs) { 
    // cout << "lskdfjlksdjf" << endl;
    obs = novaObs;
  }
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
  } while (aux > 5 && aux < 0);
  return aux;
}

void cadastro(veiculo VetVeiculos[]) {

  fstream arquivo("veiculos.txt", ios::app);

  cout << "qual e a placa do veiculo" << endl; // com a placa na classe provada
  VetVeiculos[veiculo::contador - 1].setPlaca(readString());
  cout << "qual e o ano do veiculo" << endl; // ano
  VetVeiculos[veiculo::contador - 1].setAno();
  cout << "qual e o preco do veiculo" << endl; // preco
  VetVeiculos[veiculo::contador - 1].setPreco(readString());
  cout << "qual e o modelo do veiculo" << endl; // modelo
  VetVeiculos[veiculo::contador - 1].setModelo(readString());
  cout << "qual e a marca do veiculo" << endl; // marca
  VetVeiculos[veiculo::contador - 1].setMarca(readString());
  cout << "qual e o tipo de veiculo (carro ou moto)" << endl; // tipo
  VetVeiculos[veiculo::contador - 1].setTipo();
  cout << "tem alguma obs" << endl; // obs
  VetVeiculos[veiculo::contador - 1].setObs(readString());

  // printar no aquivo
  // arquivo << VetVeiculos[veiculo::contador - 1].getPlaca();
  // arquivo << VetVeiculos[veiculo::contador - 1].getAno();
  // arquivo << VetVeiculos[veiculo::contador - 1].getPreco();
  // arquivo << VetVeiculos[veiculo::contador - 1].getModelo();
  // arquivo << VetVeiculos[veiculo::contador - 1].getMarca();
  // arquivo << VetVeiculos[veiculo::contador - 1].getTipo();
  // arquivo << VetVeiculos[veiculo::contador - 1].getObs();

  // arrumar a parte de printar no arquivo

  cout << "O carro foi cadastrado!" << endl;
}

void esvaziaVet(veiculo VetVeiculos[]){
  // aqui serve para ezvasair o vetor

  FILE* arquivo = fopen ("veiculos.txt", "a");

  if (veiculo::contador == 0 ) return;

  for (int i = 0; i < veiculo::contador; i++)
  {
    fprintf(arquivo, "%s", VetVeiculos[i].getPlaca());
    fprintf(arquivo, "%s", VetVeiculos[i].getAno());
    fprintf(arquivo, "%s", VetVeiculos[i].getPreco());
    fprintf(arquivo, "%s", VetVeiculos[i].getModelo());
    fprintf(arquivo, "%s", VetVeiculos[i].getMarca());
    fprintf(arquivo, "%s", VetVeiculos[i].getTipo());
    fprintf(arquivo, "%s", VetVeiculos[i].getObs());

  }
  

  // limpar o vetor 
  veiculo::contador = 0;

  fclose (arquivo);

}

veiculo pesquisa(veiculo VetVeiculos[], string placa) {

  for (int i = 0; i < 5; i++) {
    if (VetVeiculos[i].getPlaca() == placa) {
      return VetVeiculos[i];
    }
  }

  throw "carro nao encontrado";

  // return VetVeiculos[0];
}

void excluicarro(veiculo VetVeiculos[], veiculo veiculoASerExcluido){
  // deletar o carro do arquivo
  if (veiculo::contador == 0){
    cout << "erro lista vazia" << endl;
    return;
  }

    // buscando a posicao do carro a ser excluido
  bool found = false;
  int i;
  for (i = 0; !found && i < veiculo::contador; i++)
  {
    if (VetVeiculos[i].getPlaca() == veiculoASerExcluido.getPlaca()) {
      found = true;    
      VetVeiculos[i] = VetVeiculos[veiculo::contador-1];
    }
  }


  veiculo::contador--;
}

int main() {

  int Menu;
  veiculo VetVeiculos[5];
  veiculo aux; //pensar mais sobre dps
  // switch case com a variavel do menu
  while ((Menu = menu()) != 0) {
    switch (Menu) {
    case 1:
      /* parte para listar todos os veiculos */

      break;
    case 2:
      /* pesquisar todos os veiculos */
      try {
        aux = pesquisa(VetVeiculos, readString());
      } catch (exception erro) {
        cout << erro.what() << endl;
      }
      break;
    case 3:
      /* cadastro de um novo veiculo */
      cadastro(VetVeiculos);
      if(veiculo::contador == 5 ) esvaziaVet(VetVeiculos);
      break;
    case 4:
      /* para ediatr o cadastro dos veiculos */

      break;
    case 5:
      /* excluir um carro ja existente */
      excluicarro(VetVeiculos, aux);
      break;
    default:
      break;
    }
  }

  esvaziaVet(VetVeiculos);
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
de forma a printar tudo o que vc quiser que deve esta presente no vetor
4) usar a biblioteca file com ponteiro

*/