import java.util.*;

public class daa_005 {

  static final int l = 10000000;
  static int[] e = new int[l];
  static int[] ac = new int[l];

  public static void main(String[] args) {

    FastScanner stdin = new FastScanner(System.in);

    int n = stdin.nextInt();
    ac[0] = 0;

    for(int i = 0; i < n; i++) {
      e[i] = stdin.nextInt();
      ac[i+1] = ac[i] + e[i];
    }

    int f = stdin.nextInt();

    for(int j = 0; j < f; j++) {
      int a = stdin.nextInt();
      int b = stdin.nextInt();
      FastPrint.out.println(ac[b] - ac[a-1]);
    }
    FastPrint.out.close();

  }
}
