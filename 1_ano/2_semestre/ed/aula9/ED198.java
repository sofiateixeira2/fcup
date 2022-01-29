import java.util.*;
import java.lang.*;

public class ED198 {

  public static void main(String[] args) {

    Scanner s = new Scanner(System.in);

    int n = s.nextInt();
    int[] v = new int[n];
    for(int x = 0; x < n; x++) {
      v[x] = s.nextInt();
    }

    int best = v[0];

    for (int i=0; i<n; i++) {
      System.out.println(v[i]);
      if(best < 0){
        best = v[i];
        continue;
      }
      if(best >= 0){
        best += v[i];
        System.out.println("best = " + best);
      }


    }
    System.out.println(best);

  }
}
