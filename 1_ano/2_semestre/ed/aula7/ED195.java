import java.lang.*;

public class ED195 {

  public static boolean balanced(String s) {

    int size = s.length();

    if(size%2 != 0) return false;

    MyStack<Character> comp = new LinkedListStack<>();

    for(int i = 0; i < size; i++) {
      if(s.charAt(i) == '[' || s.charAt(i) == '(')
        comp.push(s.charAt(i));

      if(s.charAt(i) == ']' || s.charAt(i) == ')') {
        if(comp.isEmpty()) return false;
        if(s.charAt(i) == ']' && comp.top() == '[')
          comp.pop();
        if(s.charAt(i) == ')' && comp.top() == '(')
          comp.pop();
      }
    }

    if(comp.isEmpty()) return true;
    else return false;
  }

  public static void main(String[] args) {
    String s = "[(])";
    System.out.println(balanced(s));
  }
}
