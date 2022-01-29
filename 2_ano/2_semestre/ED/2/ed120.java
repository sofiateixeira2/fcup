import java.util.*;

public class ed120 {

  public static void main(String[] args) {

    int n;
    Scanner stdin = new Scanner(System.in);
    n = stdin.nextInt();

    //top part
    int fill = 1;
    int point = (n-1)/2;

    while(point > 0) {
      for(int i = 0; i < point; i++)
        System.out.print(".");
      for(int i = 0; i < fill; i++)
        System.out.print("#");
      for(int i = 0; i < point; i++)
        System.out.print(".");
      System.out.println();

      point--; fill += 2;
    }

    //middle and bottom par
    fill = n;
    point = 0;

    while(fill > 0) {
      for(int i = 0; i < point; i++)
        System.out.print(".");
      for(int i = fill; i >= 1; i--)
        System.out.print("#");
      for(int i = 0; i < point; i++)
        System.out.print(".");
      System.out.println();

      point++; fill -= 2;
    }

  }

}
