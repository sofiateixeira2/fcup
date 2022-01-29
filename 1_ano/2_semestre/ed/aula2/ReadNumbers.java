import java.util.Scanner;

public class ReadNumbers {

  static void amplitude(int v[]) {

    int max = v[0];
    int min = v[0];

    for(int i = 0; i < v.length; i++) {
      if(v[i] >= max) {
        max = v[i];
      }
    }

    for(int j = 0; j < v.length; j++) {
      if(v[j] <= min) {
        min = v[j];
      }
    }

    System.out.println(max-min);
  }

  static void writeArray(int v[]) {

    for(int i = 0; i < v.length; i++)
      System.out.println("v[" + i + "] = " + v[i]);
  }

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int v[] = new int[10];
    int n = stdin.nextInt();

    for (int i = 0; i < n; i++)
      v[i] = stdin.nextInt();

    writeArray(v);

    amplitude(v);
  }
}
