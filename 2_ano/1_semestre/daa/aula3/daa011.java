import java.util.*;

public class daa011 {

  public static boolean partition(int pos, int[] v, int p, int size) {
    int cur_sum = 0, count_p = 1;
    for(int i = 0; i < v.length; i++) {
      cur_sum += v[i];
      if(cur_sum > pos) {
        count_p++;
        cur_sum = 0;
        i--;
      }
    }
    if(count_p <= p) return true;
    return false;
  }

  public static int bsearch(int left, int right, int p, int[] v, int n) {
    while(left < right) {
      int middle = left + (right - left) / 2;
      boolean part = partition(middle, v, p, n);
      if(part) right = middle;
      else left = middle + 1;
    }
    return left;
  }

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int n = stdin.nextInt();

    int sum = 0, max = Integer.MIN_VALUE;
    int[] v = new int[n];
    for(int i = 0; i < n; i++) {
      v[i] = stdin.nextInt();
      if(v[i] > max) max = v[i];
      sum += v[i];
    }

    int p = stdin.nextInt();

    for(int i = 0; i < p; i++) {
      int k = stdin.nextInt();
      int left = max, right = sum;
      System.out.println(bsearch(left, right, k, v, n));
    }

  }
}
