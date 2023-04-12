import java.io.*;
public class addition_of_two_matrix {
    public static void main(String[] args)throws Exception {
        BufferedReader mattrix = new BufferedReader(new InputStreamReader(System.in));
        int r,c,i,j;
       // int a[][],b[][],sum[][];

        System.out.println("Enetr the number of rows= ");
        r = Integer.parseInt(mattrix.readLine());

        System.out.println("Enter the number of columns= ");
        c = Integer.parseInt(mattrix.readLine());

        int a[][] = new int[r][c];
        System.out.println("Enter the value of 1st matrix= ");

        for(i=0 ; i < r; i++)
        {
            for(j=0;j<c;j++)
            {
                a[i][j] = Integer.parseInt(mattrix.readLine());
            }
        }

        int b[][] = new int[r][c];
        System.out.println("Enter the value of 2nd mattrix= ");

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                b[i][j] = Integer.parseInt(mattrix.readLine());
            }
        }

        int sum[][] = new int[r][c];
        System.out.println("++++++ Sum Of Mattrix +++++++++");

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum[i][j] = a[i][j]+b[i][j];
                System.out.println("    "+sum[i][j]); 
            }
            System.out.println("");
        }
    }
}
