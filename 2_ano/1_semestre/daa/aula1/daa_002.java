import java.util.Scanner;

public class daa_002 {

  public static int soma(long n) {

    int sum = 0;

    while(n != 0) {
      sum += n%10;
      n/=10;
    }

    return sum;
  }

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int t = stdin.nextInt();
    stdin.nextLine();
    int sum = 0;

    for(int i = 0; i<t; i++) {
      String line = stdin.nextLine();
      String[] line_split = new String[1000];
      line_split = line.split(" ");
      long n = Long.parseLong(line_split[0]);
      long k = Long.parseLong(line_split[1]);
      long j;

      for(j = n+1;;j++) {
        sum = soma(j);
        if(sum == k) break;
      }

      System.out.println(j);

    }

  }
}
