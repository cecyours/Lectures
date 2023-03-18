public class return_in_java {
    public static void main(String[] args) {
        return_func ret = new return_func();
        int result=ret.aditya(5, 10);
        System.out.println(result);
    }
    
}
class return_func
{
    public int aditya(int num1 , int num2)
    {
        int b =  num1 + num2;
        return b;
    }
}
