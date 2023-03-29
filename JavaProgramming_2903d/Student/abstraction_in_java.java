public class abstraction_in_java {
    public static void main(String[] args) {
        tesla t = new tesla();
        t.drive();
        t.engine();

    }
    
}
abstract class car
{
    public abstract void drive();
    public void engine()
    {
        System.out.println("V8");
    }
}
class tesla extends car
{
    public void drive()
    {
        System.out.println("Self Driving Car");
    }
}