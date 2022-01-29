#include <stdio.h>

int main(void) {

  int a, b, c, maior;

  scanf("%d %d %d", &a, &b, &c);

  if (a>b && a>c) {
    maior=a;
    printf("%d\n", maior);
  } else if (b>a && b>c) {
    maior=b;
    printf("%d\n", maior);
  } else {
    maior=c;
    printf("%d\n", maior);
  }
    return 0;
}
