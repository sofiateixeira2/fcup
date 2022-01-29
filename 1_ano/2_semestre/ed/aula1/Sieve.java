public class Sieve {

  public static void sieve(int n, boolean prime[]) {

    for (int i=0; i<n; i++) {
      prime[i]=true;
    }

    for (int p=2; p*p<=n; p++) {
      if (prime[p]==true) {
        for (int i=p*2; i<=n; i+=p)
          prime[i]=false;
      }
    }
  }

  public static void main(String[] args) {

    int n=1000;

    boolean[] prime = new boolean[n+1];

    sieve(n, prime);

    for (int i=2; i<=n; i++)
      if(prime[i])
        System.out.println(i);
  }
}
