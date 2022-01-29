#include <stdio.h>

int main(void) {
  int a, b, c;

  printf("Introduza 3 valores\n");
  scanf("%d %d %d", &a, &b, &c);

  if (a==b && b==c) {
  printf("1 número distinto\n");
  }
  if (a==b && b!=c) {
  printf("2 algarismos distintos\n");
  }
  if (a!=b && b==c) {
  printf("2 algarismos distintos\n");
  }
  if (a!=b && b!=c) {
  printf("3 algarismos diferentes\n");
  }

  return 0;

}
