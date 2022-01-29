import java.util.*;

public class daa013 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int m = stdin.nextInt();
    int n = stdin.nextInt();

    int v[][] = new int[n][2];

    for(int i = 0; i < n; i++)
      for(int j = 0; j < 2; j++)
        v[i][j] = stdin.nextInt();

    for(int i = 0; i < n; i++)
      Arrays.sort(v, Comparator.comparingInt(o -> o[0]));

    int end = 0, count = 0, ind = 0;

    while(end < m) {
      int max = 0;

      for(int i = ind; i < n; i++)
        if(v[i][0] <= end && v[i][1] > max) {
          max = v[i][1];
          ind = i;
        }
      end = max;
      count++;
    }
    System.out.println(count);

  }
}
