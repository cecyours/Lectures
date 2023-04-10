public class call_global
{
    public static void main(String[] args)
    {
        employee1 poly = new employee1();
        employee1 poly2 = new employee1();
        poly.getdata(1, "Aditya");
        poly.m();
    }
}
class employee1
{
    int num ;
    String name;
    void getdata(int num1 , String name1)
    {
        num = num1;
        name = name1;
    }
    void m ()
    {
        System.out.print(num);
        System.out.println(name);
    }

}