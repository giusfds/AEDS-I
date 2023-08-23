import java.util.Scanner;

public class Telefone {
    public static char telefone(char c) {
        if (c == '-') {
            return '-';
        }

        if (c >= '0' && c <= '9') {
            return c;
        }

        if ("AaBbCc".contains(String.valueOf(c))) {
            return '2';
        }

        if ("DdEeFf".contains(String.valueOf(c))) {
            return '3';
        }

        if ("GgHhIi".contains(String.valueOf(c))) {
            return '4';
        }

        if ("JjKkLl".contains(String.valueOf(c))) {
            return '5';
        }

        if ("MmNnOo".contains(String.valueOf(c))) {
            return '6';
        }

        if ("PpQqRrSs".contains(String.valueOf(c))) {
            return '7';
        }

        if ("TtUuVv".contains(String.valueOf(c))) {
            return '8';
        }

        if ("WwXxYyZz".contains(String.valueOf(c))) {
            return '9';
        }

        return c;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String str = scanner.next();

        for (int i = 0; i < str.length(); i++) {
            System.out.print(telefone(str.charAt(i)));
        }

        
        scanner.close();
    }
}
