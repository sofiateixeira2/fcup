public class Square {

  static void line(char a, char b, int n) {
    System.out.print(a);
    for(int i=1; i<=n-2; i++) {
      System.out.print(b);
    }
    System.out.println(a);
  }

  static void square(int n) {
    line('+', '-',6);
    for(int i=1; i<=n-2; i++) {
      line('|','.',6);
    }
    line('+', '-', 6);
  }

  public static void main(String[] args) {
    square(6);
  }
}
