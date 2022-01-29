#include <stdio.h>

int potencia(int x, int n) {
//x é base e n é a potência//
  int i, result=1;

  if (n==0 || x==1){
    result=1;
  }

  else if (n==1) {
    result=x;
  }

  else
  for (i=1; i<=n; i++) {
  result *= x;
  }

  return result;
}

int main(void) {
  int x, n;

  printf("Introduza os valores\n");

  scanf("%d %d", &x, &n);

  printf("%d ^ %d = %d\n", x, n, potencia(x,n));

  return 0;
}
