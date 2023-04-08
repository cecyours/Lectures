import java.util.Scanner;
class MyData{
    public static void main(String d[])
    {
            Scanner sc = new Scanner(System.in);


            System.out.print("Enter a rollNo : ");
            int rollNo = sc.nextInt();

 
            System.out.print("Enter a name : ");
            String name = sc.nextLine();

            System.out.println("value : "+rollNo+"  : "+name+" hii");

    }
}