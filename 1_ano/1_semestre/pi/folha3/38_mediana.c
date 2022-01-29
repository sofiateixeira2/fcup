#include <stdio.h>

int mediana(int a, int b, int c) {
  int max, min, med;

  if (a>=b && a>=c) {
    max=a;
    if (b>c)
    min=c;
    if (c>b)
    min=b;
    if (b==c)
    min=b;
  }

  if (b>=a && b>=c) {
    max=b;
    if (a>c)
    min=c;
    if (c>a)
    min=a;
    if (a==c)
    min=a;
  }

  if (c>=b && c>=a) {
    max=c;
    if (b>a)
    min=a;
    if (a>b)
    min=b;
    if (b==a)
    min=b;
  }

  med=a+b+c-max-min;

  return med;

}

int main(void) {
  int x, y, z;

  printf("Introduza 3 valores\n");
  scanf("%d %d %d", &x, &y, &z);

  printf("A mediana é: %d\n", mediana(x, y,z));

  return 0;
}
