#include <stdio.h>
#include <math.h>

double serie_log(double x, int n) {

  double sum=0, y, z=x;

  for (int i=1; i<=n; i++) {

    if (i%2==0) {
      y =-1;
    } else {
      y=1;
    }

    sum += y*(z/i);
    z *= x;
  }

  return sum;
}

int main(void) {

  double x;
  int n;

  printf("Introduza o valor de log(x):\n");
  scanf("%d", &n);

  printf("O x é (aproximadamente): %.2f\n", serie_log(x,n));

  return 0;
}
