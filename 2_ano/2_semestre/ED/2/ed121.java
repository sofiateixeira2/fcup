import java.util.*;

public class ed121 {

  static String change(String s) {

    String r = "";
    for(int i = 0; i < s.length(); i++) {
      if(Character.isLetter(s.charAt(i))) r = r + Character.toLowerCase(s.charAt(i));
    }
    return r;
  }


  static boolean isPalindrome(String s) {

    //remover espaços e pontuações
    s = change(s);

    //função para inverter string
    String r = "";
    for(int i = s.length()-1; i >= 0; i--) {
      r = r + s.charAt(i);
    }

    //comparador manual
    /*for(int i = 0; i < s.length(); i++) {
      System.out.println(s.charAt(i) + " -> " + r.charAt(i));
      if(s.charAt(i) != r.charAt(i)) return false;
    }*/

    if(s.equals(r)) return true;
    else return false;
  }


  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    int n = stdin.nextInt();
    System.out.println(n);
    stdin.nextLine();

    for(int i = 0; i < n; i++) {
      String s = stdin.nextLine();
      if(isPalindrome(s)) System.out.println("sim");
      else System.out.println("nao");
    }

  }
}
