import java.util.Arrays;
import java.util.Scanner;

public class FirstProgram {

    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        int n=s.nextInt();
        long[] arr = new long[n];
        for (int i = 0; i < n; i++) 
           arr[i]=s.nextLong();
        Arrays.sort(arr);
        System.out.println((arr[n-1]*arr[n-2]));
    }
}
