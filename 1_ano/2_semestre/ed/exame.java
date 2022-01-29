import java.lang.*;
import java.util.*;

public class exame {
  public static void main(String[] args) {

    int[][] m = new int[3][2];
    int[][] t = new int[m[0].length][m.length];
    int k = 1;

    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 2; j++) {
        m[i][j] = k;
        k++;
        System.out.print(m[i][j] + " ");
      }
      System.out.println();
    }

    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 3; j++) {
        t[i][j] = m[j][i];
        System.out.print(t[i][j] + " ");
      }
      System.out.println();
    }

  }
}
