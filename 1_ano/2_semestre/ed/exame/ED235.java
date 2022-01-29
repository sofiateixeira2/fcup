import java.util.*;

public class ED235 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int n = stdin.nextInt();

    for(int i = 0; i < n; i++) {
      int size = stdin.nextInt();
      int after = 1;
      for(int j = size; j > 0; j--) {
        for(int k = j; k > 0; k--) {
          System.out.print("#");
        }
        for(int l = 0; l <= after - 2; l++) {
          if(j == size) continue;
          System.out.print(".");
        }
        after++;
        System.out.println();
        if(after >= size) continue;
      }
    }

  }
}
