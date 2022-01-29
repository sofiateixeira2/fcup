#include <stdio.h>
#include <math.h>

int main() {

  float l, area=0;

  printf("Introduza o lado do triângulo equilátero\n");
  scanf("%f", &l);

  area=(sqrt(3.0)/4)*(l*l);

  printf("A área do triângulo é: %.2f\n", area);

  return 0;
}
