import java.util.*;

public class TestED248 {
  public static void main(String[] args) {
    int n = 1000000;
	  IntSet s = new BooleanArrayIntSet(n); // Criar array de booleanos para numeros no intervalo [1,n]
	  boolean tmp;

	  tmp = s.add(1); tmp = s.add(3); tmp = s.add(5); //tmp = s.add(7); tmp = s.add(8); tmp = s.add(2);
    System.out.println(tmp);
    System.out.println(s.size());
    System.out.println(s);
  }
}
