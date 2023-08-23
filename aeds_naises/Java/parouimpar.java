import java.util.Scanner;

public class parouimpar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("entre com um numero: ");
        int number = scanner.nextInt();

        if (isEven(number)) {
            System.out.println(number + " e par");
        } else {
            System.out.println(number + " e impar");
        }

        scanner.close();
    }

    public static boolean isEven(int number) {
        return number % 2 == 0;
    }
}
