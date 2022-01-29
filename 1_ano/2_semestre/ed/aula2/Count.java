import java.util.Scanner;

public class Count {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int counter = 0;

    while (stdin.hasNextLine()) {
      counter++;
      String s = stdin.nextLine();
      System.out.println(counter + ": " + s);
    }
  }
}
