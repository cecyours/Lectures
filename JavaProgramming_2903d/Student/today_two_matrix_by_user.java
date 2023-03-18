import java.io.*;

public class today_two_matrix_by_user {
public static void main(String[] args)throws Exception
{
    BufferedReader today = new BufferedReader(new InputStreamReader(System.in));
    int r,c,i,j;
    System.out.print("enter the numbers of rows=");
    r = Integer.parseInt(today.readLine());
    System.out.print("enter the numbers of column=");
    c = Integer.parseInt(today.readLine());
    int x[][] = new int[r][c];
    System.out.println("enter the value of 1st matrix=");
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                x[i][j] = Integer.parseInt(today.readLine());
            }
        }
    }
    int y[][]  = new int[r][c];
    System.out.println("enter the value of 2nd matrix=");
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                y[i][j] = Integer.parseInt(today.readLine());
            }
        }
    }
    int z[][] = new int[r][c];
    System.out.println("sum of matrix=");
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                z[i][j] = x[i][j]+y[i][j];
                System.out.print("  "+z[i][j]);
            }
            System.out.println("");
        }
    }


}   
}
