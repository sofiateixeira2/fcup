import java.util.*;
import java.lang.*;

public class ED237 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int t = stdin.nextInt();
    int n = stdin.nextInt();
    int inter = 0;
    int tempt = 0;
    int seg = 0;

    stdin.nextLine();

    CircularLinkedList<String> names = new CircularLinkedList<>();
    CircularLinkedList<Integer> times = new CircularLinkedList<>();

    for(int i = 0; i < n; i++) {
      String process = stdin.nextLine();
      String[] process2 = process.split(" ");

      String name = process2[0];
      int time = Integer.parseInt(process2[1]);

      names.addLast(name);
      times.addLast(time);

    }

    while(!names.isEmpty() && !times.isEmpty()) {
      inter++;
      if(times.getFirst() < t)
        seg += times.getFirst();
      else
        seg += t;
      if(times.getFirst() - t <= 0) {
        tempt += times.getFirst() - t;
        System.out.println(names.getFirst() + " " + seg + " " + inter);
        names.removeFirst();
        times.removeFirst();
      } else {
        int x = times.getFirst() - t;
        times.removeFirst();
        times.addFirst(x);
        times.rotate();
        names.rotate();
        tempt += t;
      }
    }

  }
}
