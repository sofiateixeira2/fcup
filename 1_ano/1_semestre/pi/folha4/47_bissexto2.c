#include <stdio.h>

int prox_bissexto(int n) {

  while ((n%4!=0) || (n%400!=0 && n%100==0)) {
    n++;
  }

  return n;
}

int main(void) {

  int n;

  printf("Introduza um ano\n");
  scanf("%d", &n);

  printf("O próximo ano bissexto é: %d\n", prox_bissexto(n));

  return 0;

}
