#include <stdio.h>

int main() {

  int prev, next;
  int count = 1, maxcount = 1;

  scanf("%d", &prev);

  int n = prev;

  while(prev != 0) {
    scanf("%d", &next);
    if(prev == next-1) {
      count++;
    } else count = 1;
    if( count > maxcount) {
      maxcount = count;
      n = prev - maxcount + 2;
    }
    prev = next;
  }

  printf("%d %d\n", n, maxcount);

  return 0;
}
