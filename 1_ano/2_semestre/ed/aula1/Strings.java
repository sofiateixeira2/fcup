public class Strings {

  public static void main(String[] args) {

    //String a = 1007;
    String b = "1007";
    String c = "CC";
    String d = c + b;
    String e = c + 1007;

    System.out.println("d = " +d);
    System.out.println("e = " +e);

    System.out.println("d==e?" + (d==e));
    System.out.println("d.equals(e)?" + d.equals(e));

    int size = d.length();
    System.out.println("tamanho de d = " + size);

    System.out.println("d.charAt(0) = " + d.charAt(0));
    System.out.println("d.charAt(2) = " + d.charAt(2));

    String sub = d.substring(1,4);
    System.out.println("d.substring(1,4) = " + sub);

    char ch = '7';
    int pos = d.indexOf(ch);
    System.out.println("d.indexOf(" + ch +") = " + pos);

  }
}
