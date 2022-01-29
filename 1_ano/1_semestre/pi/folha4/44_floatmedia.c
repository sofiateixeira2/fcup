#include <stdio.h>

int main(void) {

  float n, soma=0, media=0;

  printf("Introduza os valores. 0 termina\n");
  scanf("%f\n", &n);

  int i=1;

  while (n!=0) {
    soma+=n;
    scanf("%f", &n);
    i++;
  }

  media=soma/(i-1);

  printf("A soma é: %.2f\n", soma);
  printf("A média aritmética é: %.2f\n", media);

  return 0;
}
