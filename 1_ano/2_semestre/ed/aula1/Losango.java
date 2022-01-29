import java.util.Scanner;

public class Losango {

  public static void losango(int n) {

    int space = (n-1)/2;
    int star = 1;

    //parte de cima

    while (space > 0) {
      for (int i = 1; i <= space; i++) {
        System.out.print(".");
      }
      for (int i = 1; i <= star; i++) {
        System.out.print("#");
      }
      for (int i = 1; i <= space; i++) {
        System.out.print(".");
      }
      space--;
      star+=2;

      System.out.println();
    }

    //centro e baixo

    while (star > 0) {
      for (int i = 1; i <= space; i++) {
        System.out.print(".");
      }
      for (int i = 1; i <= star; i++) {
        System.out.print("#");
      }
      for (int i = 1; i <= space; i++) {
        System.out.print(".");
      }
      star-=2;
      space++;

      System.out.println();
    }
  }

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int n = stdin.nextInt();

    losango(n);
  }
}
