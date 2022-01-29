public class CountChar {

  static int count(String s, char c) {

    int r = 0;
    for(int i = 0; i < s.length(); i++)
      if(c == s.charAt(i)) r++;
    return r;
  }

  public static void main(String[] args) {

    String s = "Algoritmos";
    char c = 'o';

    System.out.println("count: " + count(s, c));

  }

}
