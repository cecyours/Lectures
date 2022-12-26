import java.io.*;
class Gk_Inheritance_multilevel {
	public static void main(String[] args) throws Exception {
		
		C code = new C();
		code.display();
	}
}
class A{
	int a=0;
}
// enter exp : 23+33
class B extends A
{
	float b=0;
}

class C extends B{

	double c;
	boolean f = false;
	BufferedReader br;
	char ch;
	void display() throws Exception
	{
		br = new BufferedReader(new InputStreamReader(System.in));
			
			// System.out.print("Enter a : ");
			// a = Integer.parseInt(br.readLine());

			// System.out.print("Enter b : ");
			// b = Float.parseFloat(br.readLine());

			System.out.print("Enter expression : ");
			String expr = br.readLine();

				// System.out.println("Data  : "+expr);		
	
				String code[] = expr.split(" ");
				// 212+3 : 0_2, 1_+
				try{

					a = Integer.parseInt(code[0]);
				    ch = code[1].charAt(0);

					b = Float.parseFloat(code[2]);
	
				}
				catch (Exception e) {
					System.out.println("Invalid input");

				}
		

				if(ch== '+' || ch=='-')
				{

					if(ch=='+')
					{
						c = a+b;
					}			
					System.out.println(a+" "+ch+" "+b+" = "+c);			
		
				}
				else
				{
					System.out.println("Invalid Operation");
				}
		}
}