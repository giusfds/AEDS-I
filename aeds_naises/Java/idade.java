import java.util.Scanner;

public class idade {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int monica = scanner.nextInt();
        int f1 = scanner.nextInt();
        int f2 = scanner.nextInt();

        int f3 = monica - (f1 + f2);
        int maisVelho = 0;

        if (f1 > f2) {
            if (f1 > f3) {
                maisVelho = f1;
            } else {
                maisVelho = f3;
            }
        } else {
            if (f2 > f3) {
                maisVelho = f2;
            } else {
                maisVelho = f3;
            }
        }

        System.out.println(maisVelho);

        System.out.println("\n--------- | FIM DO PROGRAMA | ---------\n");

        scanner.close();
    }
}
