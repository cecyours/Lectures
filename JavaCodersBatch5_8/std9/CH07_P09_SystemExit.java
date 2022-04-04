
import java.util.*;
class CH07_P09_SystemExit{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int a;

		System.out.print("Enter a number : ");
		a = sc.nextInt();

		// code 
		if(a<0)
		{
			System.out.println("exit.....");
			System.exit(10);  
		}
		System.out.println("Hell of Code... "+a);

	}
}