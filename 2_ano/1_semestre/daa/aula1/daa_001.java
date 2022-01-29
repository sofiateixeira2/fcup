import java.util.Scanner;

public class daa_001 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int n = stdin.nextInt();
    int v = 42;
    int count = 0;

    for(int i = 0; i < n; i++) {
      int a = stdin.nextInt();
      if(a == v) count++;
    }

    System.out.println(count);

  }
}
