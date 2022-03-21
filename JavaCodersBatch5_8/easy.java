class easy{

public static void main(String[] args) {
	proff.setData("gk",100000);
	proff.getData();
   }
}

class proff{
    static String name;
    static double salary;
  static void setData(String name,double salary)
    {
    	 proff.name = name;
    	 proff.salary = salary;
       }
       static void getData(){
        System.out.println("Name : "+name+"\t"+salary);

       } 

  }

    