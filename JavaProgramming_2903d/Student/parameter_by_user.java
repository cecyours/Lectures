public class parameter_by_user {
    public static void main(String[] args)
    {
       ad2 colour = new ad2();
       colour.green(2,6);
    }
}
class ad2
{
    public void green(int num1,int num2)
    {
        int add = num1 + num2;
        System.out.print("sum="+add);
    }
}
