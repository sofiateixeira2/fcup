#include <stdio.h>

int main() {
  int i, j, *p, *q;
  i = 5;
  p = &i;
  printf("i = %d\np = %p\n", i, p);
  printf("---------------------\n");
  *p = 7;
  j = 3;
  printf("end i = %p\n", &i);
  printf("i = %d\nj = %d\np = %p\n", i, j, p);
  printf("---------------------\n");
  p = &j;
  printf("i = %d\nj = %d\np = %p\n", i, j, p);
  printf("---------------------\n");
  q = p;
  p = &i;
  printf("i = %d\nj = %d\np = %p\nq = %p\n", i, j, p, q);
  printf("---------------------\n");
  *q = 2;

  printf("i = %d\nj = %d\np = %p\nq = %p\n", i, j, p, q);
  printf("---------------------\n");

  return 0;
}
