public class SinglyLinkedList<T> {
  private Node<T> first;
  private int size;

  SinglyLinkedList() {
    first = null;
    size = 0;
  }

  public int size() {
    return size;
  }

  public boolean isEmpty() {
    return (size == 0);
  }

  public void addFirst(T v) {
    Node<T> newNode = new Node<T>(v, first);
    first = newNode;
    size++;
  }

  public void addLast(T v) {
    Node<T> newNode = new Node<T>(v, null);
    if(isEmpty()) {
      first = newNode;
    } else {
      Node<T> cur = first;
      while (cur.getNext() != null)
        cur = cur.getNext();
      cur.setNext(newNode);
    }
    size++;
  }

  public T getFirst() {
    if(isEmpty()) return null;
    return first.getValue();
  }

  public T getLast() {
    if(isEmpty()) return null;
    Node<T> cur = first;
    while(cur.getNext() != null)
      cur = cur.getNext();
    return cur.getValue();
  }

  public void removeFirst() {
    if(isEmpty()) return;
    first = first.getNext();
    size--;
  }

  public void removeLast() {
    if(isEmpty()) return;
    if(size == 1) {
      first = null;
    } else {
      Node<T> cur = first;
      for(int i=0; i<size-2; i++)
        cur = cur.getNext();
      cur.setNext(cur.getNext().getNext());
    }
    size--;
  }

  public String toString() {
    String str = "{";
    Node<T> cur = first;
    while(cur != null) {
      str += cur.getValue();
      cur = cur.getNext();
      if(cur != null) str += ",";
    }
    str += "}";
    return str;
  }

  public T get(int pos) {
    if(pos < 0 || pos >= size) return null;
    Node<T> cur = first;
    for(int i = 0; i < pos; i++)
      cur = cur.getNext();
    return cur.getValue();
  }

  public T remove(int pos) {
    if(pos < 0 || pos >= size) return null;
    T ans;
    if(pos == 0) {
      ans = getFirst();
      removeFirst();
    } else {
      Node<T> cur = first;
      for(int i = 0; i < pos - 1; i++)
        cur = cur.getNext();
      ans = cur.getNext().getValue();
      cur.setNext(cur.getNext().getNext());
      size--;
    }

    return ans;
  }

  public SinglyLinkedList<T> copy() {
    SinglyLinkedList<T> ans = new SinglyLinkedList<>();
    Node<T> cur = first;
    for(int i = 0; i < size; i++) {
      ans.addLast(cur.getValue());
      cur = cur.getNext();
    }
    return ans;
  }

  public void  duplicate() {
    Node<T> cur = first;
    while(cur != null) {
      Node<T> new_node = new Node<>(cur.getValue(), cur.getNext());
      cur.setNext(new_node);
      size++;
      cur = cur.getNext().getNext();
    }
  }

  public int count(T value) {
    int ans = 0;
    Node<T> cur = first;
    while(cur != null) {
      if(cur.getValue().equals(value))
        ans++;
      cur = cur.getNext();
    }
    return ans;
  }

  public void  removeAll(T value) {
    while(!isEmpty() && first.getValue().equals(value)) removeFirst();
    Node<T> cur = first;
    while(cur != null && cur.getNext() != null) {
      while(cur.getNext() != null && cur.getNext().getValue().equals(value)) {
        cur.setNext(cur.getNext().getNext());
        size--;
      }
      cur = cur.getNext();
    }
  }

}
