#include <stdio.h>

int main(void) {

  int n;

  printf("Introduza um número inteiro não-negativo\n");
  scanf("%d", &n);

  printf("Os fatores primos são:\n");

  for(int i=2; n!=1; i++) {
    if (n%i==0) {
      while(n%i==0) {
        printf(" %d", i);
        n=n/2;
      }
    }
  }

  printf("\n");

  return 0;

}
