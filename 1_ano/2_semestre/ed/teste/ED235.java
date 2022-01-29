import java.util.*;

public class ED235 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int n = stdin.nextInt();

    for(int i = 0; i < n; i++) {
      int size = stdin.nextInt();
      int after = size;
      for(int j = 0; j < size; j++) {
        for(int k = 0; k <= j; k++) {
          System.out.print("#");
        }
        for(int l = after - 2; l >= 0; l--) {
          System.out.print(".");
        }
        after--;
        System.out.println();
      }

    }

  }
}
