import java.util.*;

public class SetOfConsecutive1’s {

  public static void main(String[] args) {

    Scanner mad = new Scanner(System.in);
    int n = mad.nextInt();
    int count = 0;
    int a[] = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = mad.nextInt();

    }
    for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
        count = 0;
      } else if (a[i] == 1) {
        count++;
      }

    }
    System.out.print(count);
  }
}