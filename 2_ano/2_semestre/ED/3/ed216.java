import java.util.*;

class SMatrix {
  char data[][];
  int rows;
  int cols;

  SMatrix(int r, int c) {
    data = new char[r][c];
    rows = r;
    cols = c;
  }

  public void read(Scanner stdin) {
    for(int i = 0; i < rows; i++)
      data[i] = stdin.nextLine().toCharArray();
  }

  public String toString() {
    String ans = "";
    for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++)
        ans += data[i][j] + " ";
      ans += "\n";
    }
    return ans;
  }

  public int segMax() {
    int max = 0;
    int count1 = 0, count2 = 0;
    for(int i = 0; i < rows; i++)
      for(int j = 0; j < cols; j++) {
        if(data[i][j] == '#') count1++;
        if(data[i][j] == '#' && data[i][j+1] != '#') {
          if(count1 > max) max = count1;
          count1 = 0;
        }
      }

    SMatrix t = new SMatrix(cols, rows);
    for(int i = 0; i < t.rows; i++)
      for(int j = 0; j < t.cols; j++)
        t.data[i][j] = data[j][i];

    for(int i = 0; i < t.rows; i++) {
      for(int j = 0; j < t.cols; j++) {
        if(t.data[i][j] == '#') count2++;
        if((j+1 >= t.cols) || (t.data[i][j+1] != '#')) {
          if(count2 > max) max = count2;
          count2 = 0;
        }
      }
    }

    return max;
  }

  public int segCount() {

    SMatrix t = new SMatrix(rows, cols);
    for(int i = 0; i < t.rows; i++)
      for(int j = 0; j < t.cols; j++)
        t.data[i][j] = data[i][j];

    int m = t.segMax();
    int count1 = 0, count2 = 0, s = 0;
    for(int i = 0; i < t.rows; i++)
      for(int j = 0; j < t.cols; j++) {
        if(data[i][j] == '#') count1++;
        if(data[i][j] == '#' && data[i][j+1] != '#') {
          if(count1 == m) s++;
          count1 = 0;
        }
      }

    SMatrix f = new SMatrix(cols, rows);
    for(int i = 0; i < f.rows; i++)
      for(int j = 0; j < f.cols; j++)
        f.data[i][j] = data[j][i];

    for(int i = 0; i < f.rows; i++) {
      for(int j = 0; j < f.cols; j++) {
        if(f.data[i][j] == '#') count2++;
        if((j+1 >= f.cols) || (f.data[i][j+1] != '#')) {
          if(count2 == m) s++;
          count2 = 0;
        }
      }
    }
    return s;
  }
}

public class ed216 {
  public static void main(String[] args) {

    Scanner stdin = new Scanner(System.in);
    SMatrix m = new SMatrix(stdin.nextInt(), stdin.nextInt());
    stdin.nextLine();
    m.read(stdin);
    System.out.println(m.segMax() + " " + m.segCount());
  }
}
