#include <iostream>
#include <string>
#include <math.h>

const int MAX = 10;  // Tamanho máximo do arranjo

class FigGeo {
private:
  int quantidade;
  std::string cor;

public:
  FigGeo() : quantidade(0), cor("") {}
  virtual ~FigGeo() {}

  int getQuantidade() const {
    return quantidade;
  }

  void setCor(const std::string& novaCor) {
    cor = novaCor;
  }

  std::string getCor() const {
    return cor;
  }

  virtual void leia() = 0;
  virtual void escreva() const = 0;
  virtual double perimetro() const = 0;
  virtual double area() const = 0;
};

class Circulo : public FigGeo {
private:
  double raio;

public:
  Circulo() : raio(0.0) {}
  Circulo(double novoRaio) : raio(novoRaio) {}
  Circulo(double novoRaio, const std::string& novaCor) : raio(novoRaio) {
    setCor(novaCor);
  }

  void setRaio(double novoRaio) {
    raio = novoRaio;
  }

  double getRaio() const {
    return raio;
  }

  void leia() override {
    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;
  }

  void escreva() const override {
    std::cout << "Círculo - Raio: " << raio << ", Cor: " << getCor() << std::endl;
  }

  double perimetro() const override {
    return 2 * 3.14 * raio;
  }

  double area() const override {
    return 3.14 * raio * raio;
  }
};

class Quadrado : public FigGeo {
private:
  double lado;

public:
  Quadrado() : lado(0.0) {}
  Quadrado(double novoLado) : lado(novoLado) {}
  Quadrado(double novoLado, const std::string& novaCor) : lado(novoLado) {
    setCor(novaCor);
  }

  void setLado(double novoLado) {
    lado = novoLado;
  }

  double getLado() const {
    return lado;
  }

  void leia() override {
    std::cout << "Digite o lado do quadrado: ";
    std::cin >> lado;
  }

  void escreva() const override {
    std::cout << "Quadrado - Lado: " << lado << ", Cor: " << getCor() << std::endl;
  }

  double perimetro() const override {
    return 4 * lado;
  }

  double area() const override {
    return lado * lado;
  }
};

class Triangulo : public FigGeo {
private:
  double a;
  double b;
  double c;

public:
  Triangulo() : a(0.0), b(0.0), c(0.0) {}
  Triangulo(double novoA, double novoB, double novoC) : a(novoA), b(novoB), c(novoC) {}
  Triangulo(double novoA, double novoB, double novoC, const std::string& novaCor)
      : a(novoA), b(novoB), c(novoC) {
    setCor(novaCor);
  }

  void setTriangulo(double novoA, double novoB, double novoC) {
    a = novoA;
    b = novoB;
    c = novoC;
  }

  double getA() const {
    return a;
  }

  double getB() const {
    return b;
  }

  double getC() const {
    return c;
  }

  void leia() override {
    std::cout << "Digite os lados do triângulo (separados por espaço): ";
    std::cin >> a >> b >> c;
  }

  void escreva() const override {
    std::cout << "Triângulo - Lados: " << a << ", " << b << ", " << c << ", Cor: " << getCor() << std::endl;
  }

  double perimetro() const override {
    return a + b + c;
  }

  double area() const override {
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
  }

  bool valido() const {
    return (a + b > c) && (a + c > b) && (b + c > a);
  }
};

int main() {
  FigGeo* arranjo[MAX];

  int opcao;
  do {
    std::cout << "Menu de opções:" << std::endl;
    std::cout << "0 - Sair do programa" << std::endl;
    std::cout << "1 - Circulos" << std::endl;
    std::cout << "2 - Quadrados" << std::endl;
    std::cout << "3 - Triangulos" << std::endl;
    std::cout << "Escolha uma opcao: ";
    std::cin >> opcao;

    if (opcao >= 1 && opcao <= 3) {
      int indice;
      std::cout << "Digite o índice do elemento (0 a " << MAX - 1 << "): ";
      std::cin >> indice;

      if (indice >= 0 && indice < MAX) {
        if (arranjo[indice] != nullptr) {
          delete arranjo[indice];
        }

        if (opcao == 1) {
          double raio;
          std::cout << "Digite o raio do circulo: ";
          std::cin >> raio;

          arranjo[indice] = new Circulo(raio);
        } else if (opcao == 2) {
          double lado;
          std::cout << "Digite o lado do quadrado: ";
          std::cin >> lado;

          arranjo[indice] = new Quadrado(lado);
        } else if (opcao == 3) {
          double a, b, c;
          std::cout << "Digite os lados do triângulo (separados por espaço): ";
          std::cin >> a >> b >> c;

          if (Triangulo(a, b, c).valido()) {
            arranjo[indice] = new Triangulo(a, b, c);
          } else {
            std::cout << "Triângulo inválido!" << std::endl;
          }
        }
      } else {
        std::cout << "Índice inválido!" << std::endl;
      }
    }
    else if (opcao == 0) {
      break;
    } else {
      std::cout << "Opção inválida!" << std::endl;
    }
  } while (true);

  // Liberar a memória alocada pelos objetos do arranjo
  for (int i = 0; i < MAX; i++) {
    delete arranjo[i];
  }

  return 0;
}
