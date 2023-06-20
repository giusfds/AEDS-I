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
  void setTipo(){
    string tipo;
    do {
      tipo = readString();
    } while (tipo != "carro" || tipo != "Carro" || 
             tipo != "moto"  || tipo != "Moto"
    );
    
    this->tipo = tipo;} 
  void setObs(string novaObs) { obs = novaObs; }
  void setPlaca(string placa) { this->placa = placa; }
  void setPreco(string preco) {
    this->preco = stof(preco); // trocando de string para float
  }
  void setAno() {

    while(true){
     try
     {
      this->ano = stoi(readString());
      break;
     }
     catch(...) { }
     
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
    cout << "[2] - para pesquisar os veiculos" << endl;
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
  VetVeiculos[0 /*a definir*/].setPlaca(readString());
  cout << "qual e o ano do veiculo" << endl; // ano
  VetVeiculos[0 /*a definir*/].setAno();
  cout << "qual e o preco do veiculo" << endl; // preco
  VetVeiculos[0 /*a definir*/].setPreco(readString());
  cout << "qual e o modelo do veiculo" << endl; // modelo
  VetVeiculos[0 /*a definir*/].setModelo(readString());
  cout << "qual e a marca do veiculo" << endl; // marca
  VetVeiculos[0 /*a definir*/].setMarca(readString());
  cout << "qual e o tipo de veiculo (carro ou moto)" << endl; // tipo
  VetVeiculos[0 /*a definir*/].setTipo();
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
  
  //arrumar a parte de printar no arquivo 

  cout << "O carro foi cadastrado!" << endl;
}

veiculo pesquisa(veiculo VetVeiculos[], string placa){
  
  for (int i = 0; i < 5; i++)
  {
    if (VetVeiculos[i].getPlaca() == placa)
    {
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
      } catch(exception erro) {
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
2) qnd deleta, por estar colocando em um verto, posso deixar um "buraco" no vetor,
ou eu tenho que lidar com o suposto "buraco"
3) sujestao de como primtar as linhas do arquivode forma mais facil (sem se usando while(file.eof())
{file >> print})

Respostas:
1)
2)

*/
