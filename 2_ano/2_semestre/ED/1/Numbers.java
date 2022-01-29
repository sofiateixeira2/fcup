public class Numbers {
  public static void main(String[] args) {
    int n = 500;
    int sum = 0;
    System.out.println("Soma dos numeros entre 1 a " + n + ":");
    for(int i = 1; i <= n; i++)
      sum += i;
    System.out.println(sum);
  }
}
