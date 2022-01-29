public class ED196 {

  public static void process(MyQueue<String> q, MyQueue<String> a, MyQueue<String> b) {

    String names, letter;

    while(!q.isEmpty()) {
      names = q.dequeue();
      letter = q.dequeue();

      if(letter.compareTo("A") == 0)
        a.enqueue(names);
      if(letter.compareTo("B") == 0)
        b.enqueue(names);
      if(letter.compareTo("X") == 0) {
        if(a.size() > b.size()) {
          b.enqueue(names);
        } else if(b.size() > a.size()) {
          a.enqueue(names);
        }
      }

    }

  }
}
