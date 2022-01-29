import java.util.*;

public class ed005 {
  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int n = stdin.nextInt();
    stdin.nextLine();

    for(int i = 0; i < n; i++) {
      String exp_tmp = stdin.nextLine();
      String[] exp = exp_tmp.split(" ");

      int num, flag = 0;

      //System.out.println(Arrays.toString(exp));

      MyStack<Integer> s = new LinkedListStack<Integer>();
      for(int j = 0; j < exp.length; j++) {
        try {
          num = Integer.parseInt(exp[j]);
          s.push(num);
        } catch (Exception e1) {
          try {
            int a = s.pop();
            int b = s.pop();
            if(exp[j].equals("+")) s.push(b+a);
            if(exp[j].equals("-")) s.push(b-a);
            if(exp[j].equals("*")) s.push(b*a);
            if(exp[j].equals("/")) s.push(b/a);
          } catch (Exception e2) {
            flag++;
          }
        }
      }
      if(s.size() == 1) System.out.println(s.pop());
      else if(flag != 0) System.out.println("Expressao Incorrecta");
      else System.out.println("Expressao Incorrecta");
    }
  }
}
