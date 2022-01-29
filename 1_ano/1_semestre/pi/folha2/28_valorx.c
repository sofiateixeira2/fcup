#include <stdio.h>

int main(void) {
  float x, r;

  printf("Introduza um valor de x\n");
  scanf("%f", &x);

  r=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;

  printf("O resultado é: %.1f\n", r);

  return 0;

}
