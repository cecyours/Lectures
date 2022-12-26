import java.util.*;
class CalenderDemo  {
	public static void main(String[] args) {
		
		Calendar cal = Calendar.getInstance();

		System.out.println("day : "+cal.get(Calendar.DATE)); 
		System.out.println("Month : "+(cal.get(Calendar.MONTH)+1)); 
	}
}