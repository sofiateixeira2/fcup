public class Fatores {

  public static void main(String[] args) {

    int n = 20;

    System.out.print(n + " =");
    for(int i = 2; n != 1; i++) {
      if (n % i == 0) {
        while(n % i == 0) {
          System.out.print(" " + i);
          n = n/i;
        }
      }
    }

    System.out.println();
    }
}
