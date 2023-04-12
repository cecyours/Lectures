import java.io.*;
public class by_user {
    public static void main(String[] args)throws Exception
    {
       BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
       System.out.print("a=");
       String a = user.readLine();
       System.out.println("Length is =" +a.length());
       System.out.print("b=");
       String b = user.readLine();
       System.out.println("Insmall=" +b.toLowerCase());
       System.out.print("c=");
       String c = user.readLine();
       System.out.println("Incapital=" +c.toUpperCase());
       System.out.print("d=");
       String d = user.readLine();
       System.out.println("cancel spaces after or before=" +d.trim());
       System.out.print("e=");
       String e = user.readLine();
       System.out.println("substring=" +e.substring(4));
       System.out.print("f=");
       String f = user.readLine();
       System.out.println("substring=" +f.substring(5,8));
       System.out.print("g=");
       String g = user.readLine();
       System.out.println("replace=" +g.replace('h','n'));
       System.out.print("h=");
       String h = user.readLine();
       System.out.println("starts=" +h.startsWith("was"));
       System.out.print("i=");
       String i = user.readLine();
       System.out.println("ends=" +i.endsWith("china"));
       System.out.print("j=");
       String j = user.readLine();
       System.out.println("char=" +j.charAt(4));
       System.out.print("k=");
       String k = user.readLine();
       System.out.println("index=" +k.indexOf("is"));
       System.out.print("l=");
       String l = user.readLine();
       System.out.println("index of=" +l.indexOf("this",8));
       System.out.print("m=");
       String m = user.readLine();
       System.out.println("last=" +m.lastIndexOf("is"));
    }   
}
