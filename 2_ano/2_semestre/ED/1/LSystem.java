public class LSystem {

  static String change(String s) {

    String r = "\0";

    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) == 'A') r = r.concat("AB");
      else r = r.concat("A");
    }

    return r;
  }

  public static void main(String[] args) {

    int n = 7;

    String s = "A";
    String r = "\0";

    System.out.println(s);
    for(int i = 1; i < 3; i++) {
      System.out.println("before: " + s);
      r = "\0";
      r = change(s);
      System.out.println("s1: " + s);
      System.out.println("r1: " + r);

      s = r;
      r = "\0";
      System.out.println("r2: " + r);
      System.out.println("s2: " + s);

    }

    //System.out.println(change("AB"));

  }
}
