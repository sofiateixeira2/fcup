import java.util.*;

public class ed243 {

  static boolean compare(int[] a, int[] b) {

    for(int i = 0; i < a.length; i++)
      for(int j = 0; j < b.length; j++)
        if(a[i] == b[j]) return false;

    return true;
  }

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int n = stdin.nextInt();

    int a[] = new int[n];

    for(int i = 0; i < n; i++)
      a[i] = stdin.nextInt();


    int p = stdin.nextInt();
    int count = 0;

    for(int i = 0; i < p; i++) {
      int k = stdin.nextInt();
      int b[] = new int[k];
      for(int j = 0; j < k; j++)
        b[j] = stdin.nextInt();
      if(compare(a, b)) count++;
    }
    System.out.println(count);

  }
}
