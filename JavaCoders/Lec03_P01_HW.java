// printing number from n to 0
import java.util.*;
class Lec03_P01_HW {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a Number : ");
		int x = sc.nextInt();


		for(int i=x;i>0;i--){
			System.out.println("value : "+i);
		}

	}
}