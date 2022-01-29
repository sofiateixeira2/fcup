#include <stdio.h>

int main() {

  int i;
  float a, xo;

  printf("Introduza um valor\n");
  scanf("%f", &a);

  xo=a/2;
  xo=0.5*(xo + a/xo);

  for (i=0; i!=10; i++) {

    xo=0.5*(xo+(a/xo));

    printf("Raiz quadrada de %.2f (%d): %f (aproximadamente)\n", a, (i+1), xo);

  }

  return 0;

}
