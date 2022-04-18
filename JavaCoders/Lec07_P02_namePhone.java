
import java.util.*;
class Lec07_P02_namePhone {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int n = 5;
		String names[] = {"rio","pokemon","Ben10","Bheem","Sam"};
		long phone[] = {1923457872L,2853797722L,3853797722L,4853797722L,5853797722L};

		System.out.print("Enter name to search : ");
		String data = sc.nextLine();

		boolean f = false;
		int index=0;
		int i;
		for(i=0;i<n;i++)
		{
			if(names[i].equalsIgnoreCase(data))
			{
				f = true;
				index = i;
				break;
			}
		}
	
		if(f)
		{
			System.out.println("search successfull");
			System.out.println("name : "+names[index]+"\t phone : "+phone[index]);
		}
		else 
		{
			System.out.println("search unsuccessfull");

		}
	}
}