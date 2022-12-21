import java.util.*;
import java.text.*;

class DateDemo {
	public static void main(String[] args) {
		
		Date d = new Date();


		DateFormat frm = DateFormat.getDateTimeInstance(DateFormat.SHORT,DateFormat.SHORT,Locale.UK);

		String date = frm.format(d);

		System.out.print("Hello World : "+date);
	}
}