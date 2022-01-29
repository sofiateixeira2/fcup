import java.util.*;

public class ed183 {

  public static void main(String[] args) {

    int n, r;

    Scanner stdin = new Scanner(System.in);
    n = stdin.nextInt();

    int max = Integer.MIN_VALUE;
    int min = Integer.MAX_VALUE;
    float sum = 0;

    for(int i = 0; i < n; i++) {
      r = stdin.nextInt();
      sum += r;
      if(r > max) max = r;
      if(r < min) min = r;
    }

    float m = sum/n;

    System.out.printf("%.2f\n", m);
    System.out.println(max-min);
  }

}
