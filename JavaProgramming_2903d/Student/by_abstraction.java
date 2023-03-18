public class by_abstraction {
    public static void main(String[] args)
    {
        scotty s = new scotty();
        s.bike();
        s.engine();
    }
}
abstract class motor
{
    public abstract void bike();
    public void engine()
    {
        System.out.println("v2");
    }
}
class scotty extends motor
{
    public void bike()
    {
        System.out.println("special");
    }
}
