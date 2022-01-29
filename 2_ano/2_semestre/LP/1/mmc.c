#include <stdio.h>

int mmc(int n, int m) {

  int r, a, b;

  a = n; b = m;

  do {
    r = a%b;
    a = b;
    b = r;
  } while(r != 0);

  return (n * m) / a;
}

int main() {

  int n, m;
  scanf("%d %d", &n, &m);

  printf("%d\n", mmc(n, m));

  return 0;
}
