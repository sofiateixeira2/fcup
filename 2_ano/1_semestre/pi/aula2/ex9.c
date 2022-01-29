#include <stdio.h>

int main() {

  int x, y, r;
  int n;
  int a, b;

  scanf("%d %d %d", &x, &y, &r);
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    int d = 0;
    scanf("%d %d", &a, &b);

    d = (a-x)*(a-x) + (b-y)*(b-y);

    if(d == r*r) printf("(%d,%d): na fronteira\n", a, b);
    if(d > r*r) printf("(%d,%d): no exterior\n", a, b);
    if(d < r*r) printf("(%d,%d): no interior\n", a, b);
  }

  return 0;
}
