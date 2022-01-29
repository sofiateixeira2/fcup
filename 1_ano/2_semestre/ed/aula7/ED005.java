import java.util.*;
import java.lang.*;

public class ED005 {

  public static void main(String[] args) {

    MyStack<Integer> s = new LinkedListStack<Integer>();
    Scanner stdin = new Scanner(System.in);
    String line;
    int size = 0;
    int n = stdin.nextInt();
    int ans;

    stdin.nextLine();

    for(int i = 0; i < n; i++) {
      line = stdin.nextLine();
      String[] line_split = line.split(" ");

      size = line_split.length;
      if(size%2 == 0) {
        System.out.println("Expressao Incorrecta");
        continue;
      }

      for(int j = 0; j < size; j++) {
        try {
          int number = Integer.parseInt(line_split[j]);
          s.push(number);
        } catch(Exception e) {
          if(s.size() <= 1) {
            System.out.println("Expressao Incorrecta");
            continue;
          }
          int x = s.pop(); int y = s.pop();
          String operador = line_split[j];
          if(operador.equals("+"))
            s.push(y+x);
          if(operador.equals("-"))
            s.push(y-x);
          if(operador.equals("*"))
            s.push(y*x);
          if(operador.equals("/"))
            s.push(y/x);
        }
      }
      ans = s.pop();
      System.out.println(ans);
    }

  }
}
