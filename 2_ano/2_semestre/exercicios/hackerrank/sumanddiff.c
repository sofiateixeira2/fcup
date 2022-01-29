#include <stdio.h>

int main() {

  int n1, n2;
  int soma1=0, diff1=0;

  scanf("%d", &n1);
  scanf("%d", &n2);

  soma1=n1+n2;
  diff1=n1-n2;

  float f1, f2;
  float soma2=0, diff2=0;

  scanf("%f", &f1);
  scanf("%f", &f2);

  soma2=f1+f2;
  diff2=f1-f2;

  printf("%d %d\n", soma1, diff1);
  printf("%.1f %.1f\n", soma2, diff2);

  return 0;
}
