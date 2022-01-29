#include <stdio.h>

int main (void) {
  int a, c, l, v;
  printf("Altura = ?\n");
  scanf("%d", &a);
  printf("Comprimento = ?\n");
  scanf("%d", &c);
  printf("Largura = ?\n");
  scanf("%d", &l);
  v=a*c*l;
  if (a==c && c==l)
    printf("É um quadrado de volume: %d\n", v);
  else
    printf("É um retângulo de volume: %d\n", v);
  return 0;
}
