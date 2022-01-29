#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int delta = b*b - 4*a*c;
  if(delta < 0) printf("sem raizes\n");
  if(delta > 0) printf("duas raizes distintas\n");
  if(delta == 0) printf("raiz dupla\n");

  return 0;
}
