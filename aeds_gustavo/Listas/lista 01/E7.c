#include "Giuseppe.h"

typedef struct {
    double x;
    double y;
} Vetor;

double calcularProdutoEscalar(Vetor vetor1, Vetor vetor2) {
    return vetor1.x * vetor2.x + vetor1.y * vetor2.y;
}

double calcularMagnitude(Vetor vetor) {
    return sqrt(vetor.x * vetor.x + vetor.y * vetor.y);
}

double calcularAngulo(Vetor vetor1, Vetor vetor2) {
    double produtoEscalar = calcularProdutoEscalar(vetor1, vetor2);
    double magnitude1 = calcularMagnitude(vetor1);
    double magnitude2 = calcularMagnitude(vetor2);

    return acos(produtoEscalar / (magnitude1 * magnitude2)) * (180.0 / PI);
}

Vetor calcularProdutoVetorial(Vetor vetor1, Vetor vetor2) {
    Vetor produtoVetorial;
    produtoVetorial.x = vetor1.x * vetor2.y - vetor1.y * vetor2.x;
    produtoVetorial.y = vetor1.y * vetor2.x - vetor1.x * vetor2.y;
    return produtoVetorial;
}

int main() {

    clear();
    id("exercicio 7");

    Vetor vetor1, vetor2;

    printf("Digite as coordenadas do primeiro vetor (x y): ");
    scanf("%lf %lf", &vetor1.x, &vetor1.y);

    printf("Digite as coordenadas do segundo vetor (x y): ");
    scanf("%lf %lf", &vetor2.x, &vetor2.y);

    double produtoEscalar = calcularProdutoEscalar(vetor1, vetor2);
    double angulo = calcularAngulo(vetor1, vetor2);
    Vetor produtoVetorial = calcularProdutoVetorial(vetor1, vetor2);

    printf("\nProduto Escalar: %.2lf\n", produtoEscalar);
    printf("Ângulo em graus: %.2lf\n", angulo);
    printf("Produto Vetorial: (%.2lf, %.2lf)\n", produtoVetorial.x, produtoVetorial.y);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}