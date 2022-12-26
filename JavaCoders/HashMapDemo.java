
import java.util.*;
import java.io.*;
class HashMapDemo  {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		HashMap<String,Double> list = new HashMap();

		list.put("Mazz",19.34);
		list.put("Vaibhav",84.34);
		list.put("Suraj",34.34);
		list.put("Jiga",96.34);
		list.put("Sumit",39.34);

		
		for(Map.Entry node : list.entrySet())
		{

			System.out.println(node.getKey() +" -> "+node.getValue() );
		}

		System.out.print("Enter your student name : ");
		String name = br.readLine();

		System.out.print("your marks is : "+list.get(name));

	}
}