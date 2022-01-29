import java.util.*;
import java.lang.*;

public class ED007 {

  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    String line;
    int flag;
    int n = stdin.nextInt();

    stdin.nextLine();

    for(int i = 0; i < n ; i++) {

      flag = 0;
      line = stdin.nextLine();
      int size = line.length();

      MyStack<Character> comp = new LinkedListStack<>();

        for(int j = 0; j < size; j++) {

          if(line.charAt(j) == '[' || line.charAt(j) == '(') {
            comp.push(line.charAt(j));
          } else if(line.charAt(j) == ']' || line.charAt(j) == ')') {
            if(comp.isEmpty()) {
              System.out.println("Erro na posicao " + j);
              flag++;
              break;
            }
            if(line.charAt(j) == ']' && comp.top() == '(') {
              System.out.println("Erro na posicao " + j);
              flag++;
              break;
            }
             else if(line.charAt(j) == ')' && comp.top() == '['){
               System.out.println("Erro na posicao " + j);
               flag++;
               break;
             }
            else if(line.charAt(j) == ']' && comp.top() == '[')
              comp.pop();
            else if(line.charAt(j) == ')' && comp.top() == '(')
              comp.pop();
          } else continue;

        }

        if(comp.isEmpty()) {
          if(flag == 0)
            System.out.println("Expressao bem formada");
        } else if(comp.top() == '(' || comp.top() == '[') {
          if(flag == 0)
            System.out.println("Ficam parenteses por fechar");
        }

        while(!comp.isEmpty())
          comp.pop();
    }

  }
}
