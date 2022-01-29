#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int prev, mid, next;
  scanf("%d %d %d", &prev, &mid, &next);
  int count = 0;

  for(int i = 2; i < n; i++) {
    if((mid > 2*prev) && (mid > 2*next))
      count++;
    prev = mid;
    mid = next;
    scanf("%d", &next);
  }

  printf("%d\n", count);

  return 0;
}
