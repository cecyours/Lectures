
import java.util.*;
class CH07_P08_turnary  {
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);		

		System.out.print("Enter number : ");
		int a = sc.nextInt();

		System.out.print("Enter number : ");
		int b = sc.nextInt();

		int me = (a>b)?a:b;
		System.out.println("value : "+me);
	}
}