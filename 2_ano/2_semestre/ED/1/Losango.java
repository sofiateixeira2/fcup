public class Losango {

  public static void main(String[] args) {

    int n = 7;

    //top part
    int white = (n-1)/2;
    int fill = 1;

    while(white > 0) {
      for(int i = 0; i < white; i++)
        System.out.print(" ");
      for(int i = 0; i < fill; i++)
        System.out.print("#");
      System.out.println();

      white--; fill += 2;
    }

    //middle and bottom parte
    white = 0;
    fill = n;

    while(fill > 0) {
      for(int i = 0; i < white; i++)
        System.out.print(" ");
      for(int i = fill; i > 0; i--)
        System.out.print("#");
      System.out.println();

      white++; fill -= 2;
    }

  }
}
