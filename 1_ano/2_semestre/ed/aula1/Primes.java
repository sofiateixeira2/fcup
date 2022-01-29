public class Primes {

  static boolean isPrime(int n) {
    int flag=1;

    for (int i=2; i*i<=n; i++) {
      if(n%i==0) {
        flag=0;
      }
      if(flag==0) {
        return false;
      }
    }

    return true;
  }

  public static void main(String[] args) {

    int n=1000;

    for (int i=2; i<=n; i++)
      if (isPrime(i))
        System.out.println(i);
  }
}
