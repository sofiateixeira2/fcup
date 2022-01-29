#include <stdio.h>

int main(void) {

  int a, b, i=0;

  printf("Introduza dois valores\n");
  scanf("%d %d", &a, &b);

  printf("mdc(%d,%d) = ", a, b);

  while(a!=b) {
    if (a>b){
      a=a-b;
    } else {
    b=b-a;
  }
    printf("mdc(%d,%d) = ", a, b);
    i++;
  }

  printf("%d\n", a);
  printf("%d interações\n", i);

  return 0;

}
