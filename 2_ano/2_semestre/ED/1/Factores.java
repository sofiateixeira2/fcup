public class Factores {

  static boolean isPrime(int n) {

    for(int i = 2; i < n; i++)
      if(n%i == 0 || i*i == n) return false;

    return true;
  }

  static void fact(int n) {

    for(int i = 2; i <= n; i++) {
      if(n%i == 0 && isPrime(i)) {
        System.out.print(" " + i);
        n = n/i;
        i = 1;
      }
    }
    System.out.println();

  }

  public static void main(String[] args) {

    int n = 30;

    System.out.print(n + " =");
    fact(n);

  }

}
