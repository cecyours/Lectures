import 
class student09{
   public static void main(String[] args) {
   	
   	  student s = new student();
   	  s.name = "prince";
   	  s.studying();
   	}	

}

class student{
    String name;
    String height;


    void studying()
    {
    	System.out.println(name + "  is studying.....");
    }

}

