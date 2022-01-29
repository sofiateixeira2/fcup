import java.util.*;

public class ed006 {
    public static void main(String args[]) {

      int n, k;
      Scanner stdin = new Scanner(System.in);
      n = stdin.nextInt();
      stdin.nextLine();

      for(int i = 0; i < n; i++) {
        boolean flag = false;
        String s_tmp = stdin.nextLine();
        k = stdin.nextInt();
        String names_tmp = stdin.nextLine();

        String[] s = s_tmp.split(" ");
        String[] names = names_tmp.split(" ");

        int s_size = s.length;

        CircularLinkedList<String> list = new CircularLinkedList<String>();
        for(int j = 1; j <= k; j++) list.addLast(names[j]);

        for(int p = k; p > 1; p--) {
          for(int sz = 0; sz < s_size; sz++)
            list.rotate();
          //if(list.getFirst().equals("Carlos")) flag = true;
          list.removeFirst();
        }

        if(list.getFirst().equals("Carlos")) System.out.println("O Carlos nao se livrou");
        else System.out.println("O Carlos livrou-se (coitado do " + list.getFirst() + "!)");

      }
    }
}
