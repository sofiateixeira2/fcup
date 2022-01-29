class BooleanArrayIntSet implements IntSet {

  private int size;
  private boolean[] isElem = new boolean[102];

  BooleanArrayIntSet() {
    size = 0;
  }

  public boolean contains(int x) {
    if (isElem[x] == true)
      return true;
    return false;
  }

  public boolean add(int x) {
    if(!contains(x)) {
      isElem[x] = true;
      return true;
    }
    return false;
  }

  public boolean remove(int x) {
    if(contains(x)) {
      isElem[x] = false;
      return true;
    }
    return false;
  }

  public int size() {
    size = 0;
    int length = isElem.length;
    for(int i=0; i<length; i++)
      if(isElem[i] == true)
        size++;
    return size;
  }

  public void clear() {
    size = 0;
  }

}
