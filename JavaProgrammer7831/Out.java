

package output;
public class Out {
	
	public static void print(String str)
	{
		System.out.print("\u001B[33m"+str+"\u00 1B[0m");
	}
	public static void println(String str)
	{
		System.out.println("\u001B[36m"+str+"\u001B[0m");
	}
}