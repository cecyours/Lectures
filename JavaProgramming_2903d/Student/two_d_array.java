public class two_d_array
{
    public static void main(String[] args) {
                    //  0 1 2
        int arr[][] = {{1,2,3},  // 0
                       {4,5,6}}; // 1
        // System.out.println(arr[0][1]);
        for(int i = 0; i < 2 ; i++ )
        {
            for(int j = 0; j < 3 ; j++)
            {
                System.out.println("  "+arr[i][j]);
            }
            System.out.println("\n");
        }

    }
}