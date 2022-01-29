import java.util.*;
import java.lang.*;

public class ED241 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int flag = stdin.nextInt();
    int n = stdin.nextInt();

    stdin.nextLine();

    BSTree<String> t = new BSTree<String>();
    BSTMap<String,Integer> t1 = new BSTMap<>();
    BSTMap<String,Integer> t2 = new BSTMap<>();

    String[] line2 = new String[n];

    for(int i = 0; i < n; i++) {
      String line = stdin.nextLine();
      line2 = line.split(" ");
      t.insert(line2[0]);
      if(t1.get(line2[1]) != null) t1.put(line2[1], t1.get(line2[1]) + 1);
      else if(t1.get(line2[1]) == null) t1.put(line2[1], 1);
      if(line2[2].equals("Accepted"))
        if(t2.get(line2[1]) != null) t2.put(line2[1], t2.get(line2[1]) + 1);
        else if(t2.get(line2[1]) == null) t2.put(line2[1], 1);
    }

    if(flag == 1) System.out.println(t.numberNodes());
    if(flag == 2) {
      int max = 1;
      String sub = line2[1];
      for(String k : t1.keys())
        if(max < t1.get(k)) {
          max = t1.get(k);
          sub = k;
        }
      System.out.println(sub + " " + max);
    }
    if(flag == 3) {
      for(String k : t2.keys()) {
        float a = t2.get(k);
        float b = t1.get(k);
        if(a / b >= 0.5) System.out.println(k);
      }
    }

  }
}
