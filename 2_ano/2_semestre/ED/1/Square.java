public class Square {

  static void line(char a, char b, int n) {
    System.out.print(a);
    for(int i = 1; i <= n-2; i++)
      System.out.print(b);
    System.out.println(a);

  }

  static void square(int n) {
    line('+', '-', n);
    for(int i = 0; i < n-2; i++)
      line('|', '.', n);
    line('+', '-', n);
  }

  public static void main(String[] args) {

    int n = 6;
    square(n);
  }

}
