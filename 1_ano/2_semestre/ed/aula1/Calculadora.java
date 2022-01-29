public class Calculadora {

  public static void inverter(int[] n, int s) {

      for (int i = 0; i < s; i++) {
        for (int j = s-1; j >= 0; j--) {
          n[i] = n[j];
        }
      }
  }

  public static void main(String[] args) {

    int[] number = {1, 0, 5, 6, 7};
    int size = 5;

    inverter(number, size);

    for (int i = 0; i < size; i++) {
      System.out.print(number[i]);
    }

    System.out.println();
  }
}
