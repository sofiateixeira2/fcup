#include <stdio.h>
int main (void) {;
  int valor;
  float valori;
  printf("Introduza o valor: EUR\n");
  scanf("%d", &valor);
  valori=valor*1.23;
  printf("O valor sem IVA é: %.2d\n", valor);
  printf("O valor com IVA é: %.2f\n", valori);

  return 0;
}
