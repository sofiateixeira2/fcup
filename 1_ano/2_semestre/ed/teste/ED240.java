import java.util.*;

public class ED240 {

  static String path;


  public static String paths(BTree<Integer> t) {
    int max = 0;
    paths(t.getRoot(), 0, "");
    return "";
  }
  public static void paths(BTNode<Integer> n, int max, String path) {
    if(n == null) return;
    if(max < n.getValue()) max = n.getValue();
    if(n.getLeft() == null && n.getRight() == null) {
      System.out.println(max + " " + path);
    }
    paths(n.getLeft(), max, path + "E");
    paths(n.getRight(), max, path + "D");
  }

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    BTree<Integer> t = LibBTree.readIntTree(s);
    System.out.println(paths(t));
  }
}
