#include <stdio.h>

int pot(int b, int k) {

  int r = b;

  for(int i = 1; i < k; i++) r *= b;

  return r;
}

int main() {

  int b, k, n;

  scanf("%d %d %d", &b, &k, &n);

  int p = pot(b, k);

  for(int i = k+1; i <= n; i++)
    p += pot(b, i);

  printf("%d\n", p);
  return 0;
}
