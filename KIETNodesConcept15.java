import java.util.*;

public class KIETNodesConcept15 {
public static int calcNodes(int N, int I)
{
    int result = 0;
 
    result = I * (N - 1) + 1;
 
    return result;
}
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
   Scanner sc= new Scanner(System.in);
        int N = sc.nextInt();
        int I = sc.nextInt();
        System.out.println(calcNodes(N, I));
    }
}