
import java.io.*;
class CH13_P03_rethrow_exception  {
	public static void main(String[] args) throws Exception,Throwable {
			
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

			System.out.print("ENter your number 1 : ");
			int a = Integer.parseInt(br.readLine());
	
			System.out.print("ENter your number 2 : ");
			int b = Integer.parseInt(br.readLine());
			
			Task t = new Task(a,b);

			try
			{

						t.sum();
			}
			catch (Exception e) {
					
					System.out.println("Hello Error,,, "+e);
			}
	}
}
class Task{

	int a,b;

	public Task()
	{
		a = 10;
		b = 20;
	}

	public Task(int a,int b)
	{
		this.a = a;
		this.b = b;
	}

	public void sum()  throws Throwable
	{	
		try{

			if(a+b<0)
			{
				throw new Exception("Invalid number..");
			}
			System.out.println(a+" + "+b+" = "+(a+b));
		}
		catch (Exception e) {
			
			throw e;
		}
	}
}