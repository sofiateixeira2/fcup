#include <stdio.h>

int soma_divisores(int n) {

   int i, soma=0;

   for (i=1; i<n; i++) {
     if (n%i==0){
       soma+=i;
     }
    }

    return soma;

}

int main(void) {

  int n;

  printf("Introduza um valor\n");
  scanf("%d", &n);

  printf("A soma dos seus divisores é: %d\n", soma_divisores(n));

  return 0;
}
