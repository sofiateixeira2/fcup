import java.util.*;

public class ED241 {
  public static void main(String[] args) {

    int flag;
    Scanner stdin = new Scanner(System.in);
    flag = stdin.nextInt();

    BSTMap<String, Integer> map = new BSTMap<String, Integer>();
    BSTMap<String, Integer> map1 = new BSTMap<String, Integer>();

    if(flag == 1) {
      BSTree<String> t = new BSTree<String>();
      int s = stdin.nextInt();
      stdin.nextLine();
      for(int i = 0; i < s; i++) {
        String line = stdin.nextLine();
        String[] line_split = line.split(" ");
        t.insert(line_split[0]);
      }
      System.out.println(t.numberNodes());
    }

    if(flag == 2) {
      int s = stdin.nextInt();
      stdin.nextLine();
      String line;
      String[] line_split;
      for(int i = 0; i < s; i++) {
        line = stdin.nextLine();
        line_split = line.split(" ");
        if(map.get(line_split[1]) == null) map.put(line_split[1], 1);
        else map.put(line_split[1], map.get(line_split[1]) + 1);
      }
      int max = 1;
      String problem = "";
      for(String k : map.keys()) {
        if(max < map.get(k)) {
          max = map.get(k);
          problem = k;
        }
      }
      System.out.println(problem + " " + max);
    }

    if(flag == 3) {
      int s = stdin.nextInt();
      stdin.nextLine();
      String line;
      String[] line_split;
      for(int i = 0; i < s; i++) {
        line = stdin.nextLine();
        line_split = line.split(" ");
        if(map.get(line_split[1]) == null) map.put(line_split[1], 1);
        else map.put(line_split[1], map.get(line_split[1]) + 1);
        if(line_split[2].equals("Accepted")) {
          if(map1.get(line_split[1]) == null) map1.put(line_split[1], 1);
          else map1.put(line_split[1], map1.get(line_split[1]) + 1);
        }
      }
      for(String k : map1.keys()) {
        float r = (float)map1.get(k) / (float)map.get(k);
        if(r >= 0.5) System.out.println(k);
      }
    }
  }
}
