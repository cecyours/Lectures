
import java.io.*;
class Lec13_P01_IndexOf {
	public static void main(String[] args) throws Exception {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String s = "Hello World";
		int i = s.indexOf("lr");

		System.out.println("indexOf : "+i);

		// user define : 

		System.out.print("Enter the data : ");
		String data = br.readLine();


		System.out.print("Enter substring for Index : ");
		String query = br.readLine();

		i = data.indexOf(query);
		int j = data.lastIndexOf(query);
		if(i!=-1)
		{
			System.out.println("first index of "+query+" is "+i);
			System.out.println("last index of "+query+" is "+j);
		}
		else
		{
			System.out.println("invalid query "+query);
		}
	
	}
}