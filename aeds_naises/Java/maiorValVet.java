public class maiorValVet {
    public static int interativo(int[] vet, int tamanho) {
        int maiorNum = 0;
        for (int i = 0; i < tamanho; i++) {
            if (vet[i] > maiorNum) {
                maiorNum = vet[i];
            }
        }
        return maiorNum;
    }

    public static int rec(int[] vet, int ultimo, int maior) {
        if (ultimo > 0) {
            if (vet[ultimo] > maior) {
                maior = vet[ultimo];
            }

            return rec(vet, ultimo - 1, maior);
        }

        return maior;
    }

    public static void main(String[] args) {
        int[] vet = {0, 1, 20, 3, 4, 10, 6, 7, 8, 9};
        int n1 = 0;

        n1 = interativo(vet, 10);
        System.out.println("\n\ninterativo   ||  " + n1);

        System.out.println("\n\n--------------------\n");

        n1 = rec(vet, 9, -2000); // Note que o último índice é 9, não 10
        System.out.println("recusividade ||  " + n1);
    }
}
