// SI = PRN/100
/**
 * System.out => display(monitor)
 *  System.in => keyboard  
 * 
 * */
import java.util.*;
class CH01_P02_SimpleInterest{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		float SI;
		float R = 10.35f; // f represent float, bcz decimals are double by - default.
		float P,N;

		System.out.print("Enter amount : ");
		P = sc.nextFloat();

		System.out.print("Enter duration : ");
		N = sc.nextFloat();

		SI = P*R*N/100;


		System.out.printf("SI : %f\n",SI);

		System.out.printf("SI : %.3f\n",SI);

		System.out.println("SI : "+SI);
			
	}
}