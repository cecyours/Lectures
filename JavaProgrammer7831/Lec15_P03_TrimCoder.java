

import java.io.*;
import auto.*;
class Lec15_P03_TrimCoder  {
	public static void main(String[] args) throws Exception {
		
		Tool.print("Enter the String : ");
		String data = Tool.br.readLine(); 

		Tool.println("before trim : "+data.length()+"\t"+data);
		String newData = data.trim();
		Tool.println(" after trim : "+newData.length()+"\t"+newData);

}
}