public class Construter {
    public static void main(String[] args) {
        vaibhav_m v = new vaibhav_m();
        vaibhav_m v2 = new vaibhav_m(5);
          v2.a();
    }
    
}
class vaibhav_m
{
    int a = 50;
    int b = 100;
    int a_global;
    int c=a+b;
    vaibhav_m()
    {
        System.out.println("C= "+c);
    }
    vaibhav_m(int a)
    {
        a_global = a;
    }

     void a()
     {
         System.out.println(a_global);
     }
}
