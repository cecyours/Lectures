import java.io.*;
import java.util.*;

class CH15_P02_HashSet {
	public static void main(String[] args) throws Exception{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


		System.out.print("Enter the list no : ");
		int n = Integer.parseInt(br.readLine());

		Task t = new Task();

		t.init(n);
		t.display();
		/*display list*/

		System.out.print("Enter obj to remove : ");
		String request = br.readLine();

		t.search(request);

		if(t.remove(request))
		{
			System.out.println(request+" is removed..");
		}
		else
		{
			System.out.println(request+" is not available..");
		}
			t.display();	

			t.clear();
			
			t.display();

	}
}

class Task{
		int i;
		HashSet<String> hashList = new HashSet<String>();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


		public void init(int n) throws Exception
		{
			for(i=0;i<n;i++)
			{
				System.out.print("Enter the name : ");
				String name = br.readLine();

				hashList.add(name);
			}

		}

		public void display()
		{
			Iterator it = hashList.iterator();

			System.out.println("=====================");
			while(it.hasNext())
			{
				String s = (String)it.next();
				System.out.println("welcome : "+s);
			}
		}

		public boolean remove(String obj)
		{	

			return hashList.remove(obj);
		}

		public  void clear()
		{
			/*delete the list*/
			hashList.clear();
		}

		public void search(String obj)
		{
			if(hashList.contains(obj))
			{
				System.out.println(obj+" is available..");
			}
			else
			{
				System.out.println(obj+" is not available.");
			}
		}

}