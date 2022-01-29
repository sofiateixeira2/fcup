import java.util.*;
import java.lang.*;

public class ED241 {

  public static void main(String[] args) {

    BSTree<String> t = new BSTree<String>();
    BSTMap<String,Integer> t1 = new BSTMap<>();
    BSTMap<String,Integer> t2 = new BSTMap<>();
    String line;

    Scanner stdin = new Scanner(System.in);
    int flag = stdin.nextInt();
    int n = stdin.nextInt();
    String[] line_split = new String[n];
    stdin.nextLine();

    for(int i = 0; i < n; i++) {
      line = stdin.nextLine();
      line_split = line.split(" ");
      t.insert(line_split[0]);
      if(t1.get(line_split[1]) != null) {
        t1.put(line_split[1], t1.get(line_split[1]) + 1);
      } else if(t1.get(line_split[1]) == null) {
        t1.put(line_split[1], 1);
      }
      if(t2.get(line_split[1]) == null) {
        if(line_split[2].equals("Accepted"))
          t2.put(line_split[1], 1);
      } else if(t2.get(line_split[1]) != null) {
        if(line_split[2].equals("Accepted"))
          t2.put(line_split[1], t2.get(line_split[1]) + 1);
      }
    }

    if(flag == 1) System.out.println(t.numberNodes());

    if(flag == 2) {
      int max = 1;
      String problem = line_split[1];
      for(String k : t1.keys()) {
        if(max < t1.get(k)) {
          max = t1.get(k);
          problem = k;
        }
      }
      System.out.println(problem + " " + max);
    }

    if(flag == 3) {
      for(String k : t2.keys()) {
        if(t1.get(k) / t2.get(k) >= 0.5) System.out.println(k);
      }
    }

  }
}
