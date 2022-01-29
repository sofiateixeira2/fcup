#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int l, u, n;

  srand((unsigned)time(NULL));

  printf("Introduza um intervalo do tipo (lower, upper)\n");
  scanf("%d %d", &l, &u);

  n=(rand()%(u-l+1))+l;

  printf("%d\n", n);

  return 0;
}
