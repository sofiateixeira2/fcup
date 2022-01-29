#include <stdio.h>

int main(void) {
  int d1, d2, n1, n2, num, den;

  printf("Introduza o primeiro numerador\n");
  scanf("%d", &n1);
  printf("Introduza o primeiro denominador\n");
  scanf("%d", &d1);
  printf("Introduza o segundo numerador\n");
  scanf("%d", &n2);
  printf("Introduza o segundo numerador\n");
  scanf("%d", &d2);

  num=n1*d2+n2*d1;
  den=d1*d2;

  printf("(%d*%d+%d*%d)",n1,d2,n2,d1);
  printf("/(%d*%d)\n",d1,d2);
  printf("%d/%d\n", num, den);

  return 0;

}
