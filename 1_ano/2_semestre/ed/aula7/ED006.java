import java.util.*;
import java.lang.*;

public class ED006 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    String text, names;
    int k, size = 0;

    int n = stdin.nextInt();
    stdin.nextLine();

    for(int i = 0; i < n; i++) {
      int count = 0;
      boolean flag = false;

      text = stdin.nextLine();
      k = stdin.nextInt();
      names = stdin.nextLine();

      System.out.println(text);
      System.out.println(names);

      String[] text_split = text.split(" ");
      size = text_split.length;

      String[] names_split = names.split(" ");

      System.out.println(Arrays.toString(text_split));
        System.out.println(Arrays.toString(names_split));

      CircularLinkedList<String> game = new CircularLinkedList<String>();
      for(int j = 1; j <= k; j++) {
        game.addLast(names_split[j]);
      }

      for(int p = k; p > 1; p--) {
        for(int l = 1; l < size; l++) {
          game.rotate();

        }
        if(game.getFirst().equals("Carlos")) flag = true;
        game.removeFirst();
      }

      if(flag) {
        System.out.println("O Carlos livrou-se (coitado do " + game.getFirst() + "!)");
      } else {
        System.out.println("O Carlos nao se livrou");
      }

    }

  }
}
