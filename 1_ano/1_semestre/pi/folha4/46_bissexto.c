#include <stdio.h>

int bissexto(int n) {

  if ((n%4==0 || n%400==0) && n%100!=0) {
    return 1;
  } else
  return 0;
}

int main(void) {

  int n;

  printf("Introduza um ano\n");
  scanf("%d", &n);

  printf("%d\n", bissexto(n));

  return 0;
}
