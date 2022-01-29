public class Ocorrencia {

  public static void main(String[] args) {

    int[] a = {1, 2, 4, 5, 2, 4, 1, 2};
    int size = 8;
    int n = 2;
    int ocorr = 0;

    for (int i = 0; i <= size; i++) {
      if(a[i] == n) {
        ocorr++;
      }
    }

    System.out.println("Número de ocorrencias: " + ocorr);
  }
}
