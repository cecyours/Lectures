
import java.io.*;
class CH13_P02_userDefinedException {
	public static void main(String[] args) throws  Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		double totalBalance = 1500.36;
		System.out.print("Enter amount withdraw : ");
		double demand = Double.parseDouble(br.readLine());


		try
		{
				if(totalBalance-demand<0)
				{
					throw new Exception("Please, aukat ke bahar mt ja");
				}
				totalBalance = totalBalance - demand;
				System.out.println("Available balance : $"+totalBalance); 		
		}
		catch (Exception e) {
			
			System.out.println("your error : "+e);
		}

	}
}

