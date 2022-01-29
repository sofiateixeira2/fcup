import java.util.*;

public class daa010 {

  public static int bsearch(Integer[] v, int low, int high, int key) {

    while(low < high) {
      int middle = low + (high - low) / 2;
      if(v[middle] < key) low = middle + 1;
      else high = middle;
    }

    if(v[low] < key) return -1;
    return low;
  }

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);

    int n = stdin.nextInt();

    int[] v = new int[n];

    for(int i = 0; i < n; i++)
      v[i] = stdin.nextInt();


    List<Integer> somas_temp = new ArrayList<>();

    for(int i = 0; i < n; i++) {
      for(int j = i+1; j < n; j++) {
        somas_temp.add(v[i] + v[j]);
      }
    }

    Collections.sort(somas_temp);
    Integer[] somas = new Integer[somas_temp.size()];
    somas = somas_temp.toArray(somas);

    int size = somas.length;
    int q = stdin.nextInt();

    for(int i = 0; i < q; i++) {
      int p = stdin.nextInt();
      int r = bsearch(somas, 0, size-1, p);

      if(r == -1) System.out.println(somas[size-1]);
      else if(r != 0 && (p - somas[r-1] < somas[r] - p))
        System.out.println(somas[r-1]);
      else if(r != 0 && (p - somas[r-1] == somas[r] - p))
        System.out.println(somas[r-1] + " " + somas[r]);
      else System.out.println(somas[r]);
    }
  }
}
