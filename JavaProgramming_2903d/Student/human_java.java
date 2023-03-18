import java.io.*;
public class human_java 
{
  public static void main(String [] args ) throws Exception
  {
    BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
    System.out.print("gender=");
    String a = user.readLine();
    gender g = new gender();
    g.person(a);
  }  
}
class gender
{
  public  void person(String a)
  {
    if (a.equals("Male"))
    {
      System.out.println("shirt");
    }
      if (a.equals("male"))
      {
        System.out.println("Pants");
      }
        if (a.equals("M"))
        {
          System.out.println("watch");
      }
     if (a.equals("m"))
     {
      System.out.println("pocket");
     }

     else if (a.equals("Female"))
     {
       System.out.println("suit");
      }
     if  (a.equals("female"))
     {
       System.out.println("ring");
      }
      if (a.equals("f"))
      {
        System.out.println("bangal");
     }
     if (a.equals("F"))
     {
      System.out.println("Sandal");
     } 
}
}
