#include <stdio.h>

int main(void) {
  int a, b, c, d;

  printf("Introduza trẽs valores\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if (a>b && a>c) {
    printf("%d é o máximo\n", a);

    if (b>c) {
      printf("%d é o mínimo\n", c);
      d=a-c;
      printf("A amplitude é: %d\n", d);
    }
    if (c>b) {
        printf("%d é o mínimo\n", b);
        d=a-b;
        printf("A amplitude é: %d\n", d);
      }
    }

    if (b>a && b>c) {
    printf("%d é o máximo\n", b);

    if (a>c) {
      printf("%d é o mínimo\n", c);
      d=b-a;
      printf("A amplitude é: %d\n", d);
    }
    if (c>a){
        printf("%d é o mínimo\n", a);
        d=b-c;
        printf("A amplitude é: %d\n", d);
      }
    }

    if (c>a && c>b) {
    printf("%d é o máximo\n", c);

    if (b>a) {
      printf("%d é o mínimo\n", a);
      d=c-a;
      printf("A amplitude é: %d\n", d);
    }
    if (a>b){
        printf("%d é o mínimo\n", b);
        d=c-b;
        printf("A amplitude é: %d\n", d);
      }
    }

  return 0;

}
