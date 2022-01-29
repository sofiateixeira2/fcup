class Fraction {
  int n;
  int d;

  Fraction() {
    n = 1;
    d = 1;
  }

  Fraction(int a, int b) {
    n = a;
    d = b;
  }

  public String toString() {
    String ans = "";
    int u = n/d;
    //System.out.println(u);
    int r = n - u*d;
    if(r == 0) ans = ans + u;
    else if(u == 0) ans = ans + r + "/" + d;
    else ans = ans + u + " " + "+ " + r + "/" + d;
    return ans;
  }

  public Fraction add(Fraction f) {
    Fraction ans = new Fraction();
    if(d == f.d) {
      ans.d = d;
      ans.n = n + f.n;
    } else if(d%f.d == 0 || f.d%d == 0) {
      if(d > f.d) {
        int ntmp = f.n * d/f.d;
        int dtmp = f.d * d/f.d;
        ans.n = n + ntmp;
        ans.d = d;
      } else if(f.d > d) {
        int ntmp = n * f.d/d;
        int dtmp = d * f.d/d;
        ans.n = ntmp + f.n;
        ans.d = dtmp;
      }
    } else {
      ans.n = n * f.d;
      ans.d = d * f.n;
    }
    return ans;
  }

  public Fraction multiply(Fraction f) {
    Fraction ans = new Fraction();
    ans.n = n * f.n;
    ans.d = d * f.d;
    return ans;
  }

  private int mdc(int a, int b) {
    if(b == 0)
      return a;
    else
      return mdc(b, a%b);
  }

  public void simplify() {
    int m = mdc(n, d);
    n /= m;
    d /= m;
  }
}

public class TestFraction {
  public static void main(String[] args) {

    Fraction f1 = new Fraction(7, 3);
    //System.out.println(f1);
    Fraction f2 = new Fraction(5, 6);
    Fraction f3 = new Fraction();
    f3 = f1.add(f2);
    //System.out.println(f3);
    Fraction f4 = new Fraction();
    f4 = f1.multiply(f2);
    //System.out.println(f4);
    Fraction f5 = new Fraction(18, 48);
    f5.simplify();
    System.out.println(f5);

  }
}
