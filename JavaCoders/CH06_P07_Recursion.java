

import java.io.*;
class CH06_P07_Recursion  {
	public static void main(String[] args) throws Exception {
				
				BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

				Task t = new Task();
				t.display(1000);
	}
}

class Task{

	void display(int n)
	{
		if(n==0)
			return;
		System.out.print("\tnumber likh "+n);
		display(n-1);
	}
}
