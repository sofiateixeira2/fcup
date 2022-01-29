#include <stdio.h>

int main() {

  int r1, r2;
  scanf("%d %d", &r1, &r2);

  int count = 0, maxcount = 0;
  int n;

  while((r1 != -1) && (r2 != -1)) {
    n = 0;
    if((r1 == 1) && (r2 == 1))
      count++;
    else if((r1 == 1) && (r2 == 0)) {
      count = 0;
      while(n == 0)
        scanf("%d", &n);
    }
    if(count > maxcount) maxcount = count;
    scanf("%d %d", &r1, &r2);
  }

  printf("%d\n", maxcount);

  return 0;
}
