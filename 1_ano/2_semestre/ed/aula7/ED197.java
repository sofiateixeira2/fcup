public class ED197 {

  public static MyQueue<Integer> merge(MyQueue<Integer> a, MyQueue<Integer> b) {

    MyQueue<Integer> ans = new LinkedListQueue<>();

    if(a.isEmpty() && b.isEmpty()) return ans;

    while(!a.isEmpty() && !b.isEmpty()) {
      if(a.first() < b.first()) {
        ans.enqueue(a.dequeue());
      } else if(b.first() <= a.first()) {
        ans.enqueue(b.dequeue());
      }
    }
    if(a.isEmpty() && !b.isEmpty())
      while(!b.isEmpty())
        ans.enqueue(b.dequeue());

    if(!a.isEmpty() && b.isEmpty())
      while(!a.isEmpty())
        ans.enqueue(a.dequeue());

    return ans;
  }
}
