import java.io.*;
class Lec08_P02_Polymorphism  {
	public static void main(String[] args) throws Exception {
	
		int a,b,c,ans;
		String name;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter a  : ");
		a = Integer.parseInt(br.readLine());

		System.out.print("Enter b  : ");
		b = Integer.parseInt(br.readLine());
		
		System.out.print("Enter c  : ");
		c = Integer.parseInt(br.readLine());
		
		System.out.print("Enter your name  : ");
		name = br.readLine();

		ans  =Operations.sum(); // s? 0

		System.out.println("default : "+ans);


		ans = Operations.sum(b,b);
		System.out.println("2 Operations : "+ans);

		ans = Operations.sum(c,a,b,name);
		System.out.println("4 Operations : "+ans);

	}
}

class Operations{

	static int sum()
	{
		return 0;
	}

	static int sum(int a,int b)
	{
		return a+b;
	}

	static int sum(int a,int b,int c,String coder)
	{
			System.out.println("welcome "+coder);
		return a+b+c;
	}
}