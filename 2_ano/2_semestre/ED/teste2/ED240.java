import java.util.*;

public class ED240 {

  static String[] s = new String[100];
  static int count = 0;
  static int min = Integer.MAX_VALUE;

  private static void getMin(BTree<Integer> t) {
    getMin(t.getRoot());
  }

  private static void getMin(BTNode<Integer> n) {
    if(n == null) return;
    if(n.getValue() < min) min = n.getValue();
    getMin(n.getLeft());
    getMin(n.getRight());
  }

  public static String[] paths(BTree<Integer> t) {
    getMin(t);
    if(t.getRoot().getValue() == min) s[count++] = "R";
    paths(t.getRoot().getLeft(), "E");
    paths(t.getRoot().getRight(), "D");
    return Arrays.copyOf(s, count);
  }

  private static void paths(BTNode<Integer> n, String tmp) {
    if(n == null) return;
    if(n.getValue() == min) s[count++] = tmp;
    paths(n.getLeft(), tmp + "E");
    paths(n.getRight(), tmp + "D");
  }
  /*
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    BTree<Integer> t = LibBTree.readIntTree(s);
    System.out.println(Arrays.toString(paths(t)));
  }*/
}
