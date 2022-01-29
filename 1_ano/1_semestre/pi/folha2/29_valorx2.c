#include <stdio.h>

int main(void) {
  float x, r;

  printf("Introduza um valor de x\n");
  scanf("%f", &x);

  r=((((3*x+2)*x-5)*x-1)*x+7)*x-6;

  printf("O resultado é: %.1f\n", r);

  return 0;

}
