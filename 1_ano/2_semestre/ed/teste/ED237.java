import java.util.*;
import java.lang.*;

public class ED237 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    CircularLinkedList<String> names = new CircularLinkedList<>();
    CircularLinkedList<Integer> times = new CircularLinkedList<>();
    int t = stdin.nextInt();
    int n = stdin.nextInt();
    stdin.nextLine();
    int time_a = 0;
    int time_b = 0;

    for(int i = 0; i < n; i++) {
      String process = stdin.nextLine();
      String[] process_split = process.split(" ");
      String name = process_split[0];
      int time_process = Integer.parseInt(process_split[1]);

      names.addLast(name);
      times.addLast(time_process);
    }

    while(!names.isEmpty() && !times.isEmpty()) {
      if(times.getFirst() - t <= 0) {
        time_b += times.getFirst() - t;
        System.out.println(names.getFirst() + " " + time_a + " " + time_b);
        names.removeFirst();
        times.removeFirst();
      } else {
        int x = times.getFirst() - t;
        names.rotate();
        times.removeFirst();
        times.addFirst(x);
        times.rotate();
        time_b += t;
      }


    }

    System.out.println(names);
    System.out.println(times);

  }
}
