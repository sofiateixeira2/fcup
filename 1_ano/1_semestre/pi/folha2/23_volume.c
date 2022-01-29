#include <stdio.h>
#define PI 3.14
int main (void) {
  int r;
  float v;
  printf("Introduza o raio\n");
  scanf("%d", &r);
  v=(4.0)/(3.0)*PI*r*r*r;
  printf("O volume é: %.2f\n", v);

  return 0;
}
