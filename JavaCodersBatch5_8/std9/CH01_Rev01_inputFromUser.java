
// user input
// numberic, non-numberical
import java.util.*; // Scanner
class CH01_Rev01_inputFromUser{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		// userName,userNumber
		String name;
		double number;

		System.out.print("enter name : ");
		name = sc.nextLine(); // string input

		System.out.print("Enter number : ");
		number = sc.nextDouble();

		System.out.println("welcome "+name+" number : "+number);

	}
}
// jobtitle, salary