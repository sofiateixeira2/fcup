#include <stdio.h>

int binary(int n) {

  int v=0, exp=1;

  while(n!=0) {
    v+=(n%2)*exp;
    n/=2;
    exp*=10;
  }

  return v;

}

int main(void) {

  int n;

  printf("Introduza um número\n");
  scanf("%d", &n);

  printf("%d\n", binary(n));

  return 0;
}
