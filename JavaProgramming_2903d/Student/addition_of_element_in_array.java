public class addition_of_element_in_array {

    public static void main(String[] args)throws Exception {
        int a[] = {1,2,3,4},sum=0,i;
        for(i=0; i<=a.length; i++)
        { 
            sum += a[i];
            System.out.println(sum);
        }
    }    
}
