#include <stdio.h>

int main() {

  int r, g, b, n;
  scanf("%d %d %d %d", &r, &g, &b, &n);

  int r1, g1, b1;
  int count = 0;

  for(int i = 0; i < n; i++) {
    scanf("%d %d %d", &r1, &g1, &b1);
    if((r1 == r) && (g1 == g) && (b1 == b)) count++;
  }

  printf("%d\n", count);

  return 0;
}
