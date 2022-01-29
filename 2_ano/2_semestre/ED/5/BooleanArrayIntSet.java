import java.util.*;

class BooleanArrayIntSet implements IntSet {
   private int size;   // Numero de elementos do conjunto
   private boolean isElem[]; // Array que contem os elementos em si
   private int max=0;
   private int prev=0;

   BooleanArrayIntSet(int maxSize) {
      isElem = new boolean[maxSize];
      size = 0;
   }

   public boolean add(int x) {
      if (!contains(x)) {
         isElem[x-1] = true;
         System.out.println(x + " " + isElem[x-1]);
         if(max < x) {
           prev = max;
           max = x;
         }
         System.out.println(max);
         return true;
      }
      return false;
   }

   public boolean remove(int x) {
      if (contains(x)) {
        isElem[x-1] = false;
        if(max == x) {
          max = prev;
        }
        return true;
      }
      return false;
   }


   public boolean contains(int x) {
      if(isElem[x-1]) return true;
      else return false;
   }

   public void clear() {
     Arrays.fill(isElem, Boolean.FALSE);
      size = 0;
   }

   public int size() {
      size = 0;
      for(int i = 0; i < isElem.length; i++) {
        if(isElem[i]) size++;
      }
      return size;
   }

   public boolean equals(IntSet s) {
     if(size != s.size()) return false;
     for(int i = 0; i < size; i++) {
       if(!s.contains(i)) return false;
     }
     return true;
   }

   public IntSet intersection(IntSet s) {
     IntSet ans = new ArrayListIntSet(size);
     for(int i = 0; i < size; i++) {
       if(s.contains(i)) ans.add(i);
     }

     return ans;
   }

   @Override
   public String toString() {
      String res = "{";
      for (int i=0; i<max; i++) {
         if (i>0) res += ",";
         res += isElem[i];
      }
      res += "}";
      return res;
   }
}
