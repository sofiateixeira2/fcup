import java.util.*;

public class ed007 {
  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int n = stdin.nextInt();
    stdin.nextLine();

    for(int i = 0; i < n; i++) {
        String in = stdin.nextLine();
        String[] exp = in.split("");
        int flag = 0;

        //System.out.println(Arrays.toString(exp));

        MyStack<String> s = new LinkedListStack<String>();
        for(int j = 0; j < exp.length; j++) {
          if(exp[j].equals("(") || exp[j].equals("[")) s.push(exp[j]);
          //System.out.println(s);

          if(exp[j].equals(")")) {
            if(s.isEmpty() || s.top().equals("[")) {
              System.out.println("Erro na posicao " + j);
              flag++;
              break;
            } else if(s.top().equals("(")) s.pop();
          }
          if(exp[j].equals("]")) {
            if(s.isEmpty() || s.top().equals("(")) {
              System.out.println("Erro na posicao " + j);
              flag++;
              break;
            } else if(s.top().equals("[")) s.pop();
          }


          /*if(exp[j].equals(")") && s.top().equals("(") && !s.isEmpty()) {
            s.pop();
          }
          //System.out.println(s);
          else if(exp[j].equals("]") && s.top().equals("[") && !s.isEmpty()) {
            s.pop();
          }
          else if(exp[j].equals("]") && s.top().equals("(")) {
            System.out.println("Erro na posicao " + j);
            break;
          }
          else if(exp[j].equals(")") && s.top().equals("[")) {
            System.out.println("Erro na posicao " + j);
            break;
          }
          if(s.isEmpty() && (exp[j].equals(")") || exp[j].equals("]"))) {
            System.out.println("Erro na posicao " + j);
            break;
          }*/
        }
        if(flag == 0) {
          if(s.isEmpty()) System.out.println("Expressao bem formada");
          else System.out.println("Ficam parenteses por fechar");
        }
    }
  }
}
