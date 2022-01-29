#include <stdio.h>

int potencia(int x, int n) {
//x é base e n é a potência//
  int i;
  long long result;

  scanf("%d %d", &x, &n);

  if (n==0 || x==1){
    result=1;
  } else
  for (i=2; i<=n; i++) {
  result *= x;
  }

  return result;
}

int main(void) {
  int x, n;

  scanf("%d %d", &x, &n);

  printf("%d ^ %d = %d\n", x, n, potencia(x,n));

  return 0;
}
