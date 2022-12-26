
import java.util.*;
class ifElseUserData{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a number : ");
		int num = sc.nextInt();

		if(num>=10)
		{
			System.out.println("Welcome "+num);
			// true
		}
		else
		{
			System.out.println("bye "+num);
			// false
		}
	}
}