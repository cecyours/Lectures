
import java.util.*;
class elseIfladder{
	public static void main(String[] args) {
		
		Scanner sc  =new Scanner(System.in);

		System.out.print("Enter a number : ");
		int x = sc.nextInt();

		if(x<0)
		{
			System.out.println("-ve "+x);
		}
		else if(x==0)
		{
			System.out.println("zero ");
		}
		else
		{
			System.out.println("+ve "+x);
		}
	}
}