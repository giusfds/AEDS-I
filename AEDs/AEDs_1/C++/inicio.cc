#include <iostream>
#include <string>

using namespace std;

class Pessoa {
	int idade;

public:
	Pessoa() {
		cout << "Pessoa sendo criada" << endl;
	}

	void setIdade(int idade) {
		if (idade < 0 || idade > 150) {
			cout << "Idade inválida!";
			return;
		}
		// (*this).idade = idade;
		this->idade = idade;
	}

	int getIdade() {
		return idade;
	}
};

int main() {

	Pessoa gius, Lucas;

	gius.setIdade(18);
	cout << gius.getIdade() << endl;

	// Proteted
	// Polimorfismo
	// Destrutores

	cout << "\n---------- | FIM DO PROGRAMA | ----------\n\n";
	return 0;
}