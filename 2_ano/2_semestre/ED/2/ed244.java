import java.util.*;

public class ed244 {

  static void sieve(int n, boolean[] primes) {

    for(int i=0; i<=n; i++)
    primes[i] = true;

    for(int i=2; i*i<=n; i++)
      if(primes[i])
        for(int j=i*2; j<=n; j+=i)
          primes[j] = false;

  }

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int a = stdin.nextInt();
    int b = stdin.nextInt();

    boolean primes[] = new boolean[b+1];

    sieve(b, primes);

    int count = 0;
    for(int i = a; i <= b; i++)
      if(primes[i]) count++;
    System.out.println(count);

  }
}
