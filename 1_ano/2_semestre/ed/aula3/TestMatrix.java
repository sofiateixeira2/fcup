import java.util.Scanner;

class Matrix {
  int data[][];
  int rows;
  int cols;

  Matrix(int r, int c) {
    data = new int [r][c];
    rows = r;
    cols = c;
  }

  public void read(Scanner in) {
    for(int i = 0; i < rows; i++)
      for(int j = 0; j < cols; j++)
        data[i][j] = in.nextInt();
  }

  public String toString() {
    String ans = "";
    for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++)
        ans += data[i][j] + " ";
      ans += "\n";
    }
    return ans;
  }
}

public class TestMatrix {
   public static void main(String[] args) {
      Scanner stdin = new Scanner(System.in);
      Matrix m = new Matrix(stdin.nextInt(), stdin.nextInt());
      m.read(stdin);
      System.out.print(m);

      throw new RuntimeException("My very first custom error.");
   }
}
