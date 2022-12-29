import java.io.*;
import java.util.*;

class CH15_P04_linkedList{

	public static void main(String[] args) throws Exception{

		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));


			int choice;

			String bookName;
			Task t = new Task();
			do{



			}while(true);

		
	}
}

class Task{

	LinkedList<String> myList;

	public Task()
	{
		myList = new LinkedList<String>();
	}

	void display()
	{

		ListIterator li = myList.listIterator();

		int i = 1;
		while(li.hasNext())
		{
			System.out.print(li.next()+" -> ");
		}
		System.out.println("");
	}
	




 }
