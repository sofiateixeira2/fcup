#include <stdio.h>

int main() {

  int n, c;

  printf("Introduza um número\n");
  scanf("%d", &n);

  for (int i=1; i<=n; i++) {  //divisor

    c=0;
    if (n%i==0) {
      c++;
    }
    if (c==2) {
      printf("%d", i);
    }

  }

  printf("\n");

  return 0;
}
