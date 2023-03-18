import java.io.*;
public class two_matrix_by_user {
    public static void main(String[] args) throws Exception{
        BufferedReader user =new BufferedReader(new InputStreamReader(System.in));
        int r,c,i,j;
        System.out.print("enter the number of rows=");
        r = Integer.parseInt(user.readLine());
        System.out.print("enter the number of columns=");
        c = Integer.parseInt(user.readLine());
        int d[][] = new int[r][c];
        System.out.println("enter the 1st marix value=");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                d[i][j] = Integer.parseInt(user.readLine()); 
            }
        }
        int e[][] = new int[r][c];
        System.out.println("enter the 2nd marix value=");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                e[i][j] = Integer.parseInt(user.readLine()); 
            }
        }
        int f[][] = new int[r][c];
     System.out.println(" sum of 2 matrix=");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                 f[i][j] = d[i][j]+e[i][j];
                System.out.print("  "+f[i][j]);
            }
            System.out.println("");
        }
    }
}
