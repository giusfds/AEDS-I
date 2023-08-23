import java.util.Scanner;

public class Ed0115 {
    public static void main(String[] args) {
        double lado, altura, lado5, altura5, area, perimetro;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Fale o número correspondente ao lado:");
        lado = scanner.nextDouble();

        if (lado > 0) {
            System.out.println("Fale o número correspondente à altura:");
            altura = scanner.nextDouble();

            if (altura > 0) {
                lado5 = lado / 5;
                altura5 = altura / 5;

                area = altura5 * lado5;
                perimetro = (altura5 * 2) + (lado5 * 2);

                System.out.printf("A área do retângulo 1/5 maior é %.2f%n", area);
                System.out.printf("O perímetro do retângulo 1/5 menor é %.2f%n", perimetro);
            } else {
                System.out.println("O valor é negativo ou igual a 0");
            }
        } else {
            System.out.println("O valor é negativo ou igual a 0");
        }

        System.out.println("\n\n--------- | FIM DO PROGRAMA | ---------\n");

        scanner.close();
    }
}
