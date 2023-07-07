#include <stdio.h>

int main() {
    int n;
    double soma = 0.0;
    double soma_pesos = 0.0;
    
    printf("Digite o número de elementos: ");
    scanf("%d", &n);
    
    double valores[n];
    double pesos[n];
    
    printf("Digite os valores e os pesos:\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
        
        printf("Peso %d: ", i + 1);
        scanf("%lf", &pesos[i]);
        
        soma += valores[i] * pesos[i];
        soma_pesos += pesos[i];
    }
    
    double media_ponderada = soma / soma_pesos;
    
    printf("A média ponderada é: %.2lf\n", media_ponderada);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}
