
import java.util.Scanner;
class CH01_P03_getInputByUser{
	public static void main(String[] args) {
		
		Scanner sc  = new Scanner(System.in);

		System.out.println("Enter your name : ");
		String user = sc.nextLine();

		System.out.println("welcome "+user);
	}
}