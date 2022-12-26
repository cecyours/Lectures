
import java.util.*;
class CH01_P04_UserNamePassword {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		//default : id - pass
		String myUserName = "sumit";
		String myPassword = "231";

		// get crediential from user
		System.out.print("Enter the UserName : ");
		String userName = sc.nextLine();

		System.out.print("Enter the password : ");
		String userPass = sc.nextLine();

		if(myUserName.equals(userName))
		{
			if(myPassword.equals(userPass))
			{
				System.out.println("Welcome ♥");
			}
			else{
				System.out.print("Wrong ");
			}
		}
		else{
			System.out.print("user not valid...");
		}
	}
}