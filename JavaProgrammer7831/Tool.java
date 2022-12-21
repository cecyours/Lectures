
package auto;
import java.io.*;
public class Tool {
		
	public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void println(String str){

		System.out.println("\u001B[33m"+str+" \u001B[0m");
	}	
	public static void print(String str){
		System.out.print(str);
	}
}