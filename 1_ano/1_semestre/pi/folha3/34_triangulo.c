#include <stdio.h>

int main(void) {
  int l1, l2, l3;

  printf("Introduza os lados do triângulo\n");
  scanf("%d %d %d", &l1, &l2, &l3);

  if (l1==l2 && l2==l3)
    printf("O triângulo é equilátero\n");
    else if (l1==l2 && l2!=l3)
      printf("O triângulo é isósceles\n");
        else
        printf("O triângulo é escaleno\n");

  return 0;
}
