class MyIntSet implements IntSet {

  private int size;
  private int[] elem = new int[102];

  MyIntSet() {
    size = 0;
  }

  public boolean contains(int x) {
    for(int i=0; i<size; i++)
      if (elem[i] == x)
        return true;
    return false;
  }

  public boolean add(int x) {
    if (!contains(x)) {
      elem[size] = x;
      size++;
      return true;
    }
    return false;
  }

  public boolean remove(int x) {
    if (contains(x)) {
      int pos = 0;
      while(elem[pos] != x) pos++;
      size--;
      elem[pos] = elem[size];
      return true;
    }
    return false;
  }

  public int size() {
    return size;
  }

  public void clear() {
    size = 0;
  }
}
