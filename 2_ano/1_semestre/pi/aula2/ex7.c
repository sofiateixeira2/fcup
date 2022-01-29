#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int best = n;

  while(n != 0) {
    if(n > best) best = n;
    scanf("%d", &n);
  }

  printf("%d\n", best);

  return 0;
}
