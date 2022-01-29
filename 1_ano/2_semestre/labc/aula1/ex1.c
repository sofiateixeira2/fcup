#include <stdio.h>

int main() {
  int i = 5;
  int *p = &i;

  printf("%p %d %d\n", p, *p, i);

  p++;
  printf("%p %d %d\n", p, *p, i);

  *p++ = 0;
  printf("%p %d %d\n", p, *p, i);

  return 0;
}
