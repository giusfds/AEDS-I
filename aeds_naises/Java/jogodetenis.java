import java.util.Scanner;

public class jogodetenis {
    public static void main(String[] args) {
        int contador = 0;
        char resultado;

        Scanner scanner = new Scanner(System.in);
        
        for (int i = 0; i < 6; i++) {
            resultado = scanner.next().charAt(0);

            if (resultado == 'V') {
                contador++;
            } else if (resultado == 'P') {
                // nada
            }
        }

        if (contador == 1 || contador == 2) {
            System.out.println("3");
        } else if (contador == 3 || contador == 4) {
            System.out.println("2");
        } else if (contador == 5 || contador == 6) {
            System.out.println("1");
        } else {
            System.out.println("-1");
        }
        
        scanner.close();
    }
}
