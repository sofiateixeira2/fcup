public class ED194 {

  public static void reverse(MyStack<Integer> s, int n) {

    int[] temp = new int[n];

    for(int i = 0; i < n; i++)
      temp[i] = s.pop();

    for(int i = 0; i < n; i++)
      s.push(temp[i]);

  }
}
