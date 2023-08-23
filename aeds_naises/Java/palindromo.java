import java.util.*;

class palindromojava {

	public static boolean isPalin(String input) {
		StringBuilder reversed = new StringBuilder(input);
		return input.equals(reversed.reverse().toString());
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		String input;

		while (!(input = scanner.nextLine()).equals("final")) {
			System.out.println(isPalin(input) ? "Y" : "N");
		}

		scanner.close();
	}
}