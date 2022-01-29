#include <stdio.h>

int main(void) {
  int a, b, c, mediana;

  printf("Introduza 3 valores\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if ((a>b && b>c) || (c>b && b>a)) {
  mediana=b;
  printf("A mediana é: %d\n", mediana);
} else if ((b>a && a>c) || (c>a && a>b)) {
    mediana=a;
    printf("A mediana é: %d\n", mediana);
  } else if ((a>c && c>b) || (b>c && c>a)) {
    mediana=c;
    printf("A mediana é: %d\n", mediana);
  }

  return 0;
}
