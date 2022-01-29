import java.util.*;

public class daa_007 {

  public static int max(int a, int b) {
    if(a>b) return a;
    return b;
  }

  public static int max(int a, int b, int c) {
    return max(max(a,b), c);
  }

  public static int smsc(int v[], int a, int m, int b) {
    int sum = 0;
    int asum = Integer.MIN_VALUE;

    for(int i = m; i >= a; i--) {
      sum += v[i];
      if(sum > asum) asum = sum;
    }

    sum = 0;
    int bsum = Integer.MIN_VALUE;
    for(int i = m+1; i <= b; i++) {
      sum += v[i];
      if(sum > bsum) bsum = sum;
    }

    return max(asum + bsum, asum, bsum);
  }

  public static int sms(int v[], int a, int b) {

    if(a==b) return v[a];
    int m = (a+b)/2;
    return max(sms(v, a, m), sms(v, m+1, b), smsc(v, a, m, b));

  }

  public static void main(String[] args) {

    FastScanner stdin = new FastScanner(System.in);

    int n = stdin.nextInt();
    int[] v = new int[n];

    for(int i=0; i<n; i++)
      v[i] = stdin.nextInt();

    FastPrint.out.println(sms(v, 0, n-1));
    FastPrint.out.close();
  }
}
