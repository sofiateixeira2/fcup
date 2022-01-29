#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int maior = n;
  int menor = n;

  while(n != 0) {
    if(n > maior) maior = n;
    if(n < menor) menor = n;

    scanf("%d", &n);
  }

  if(maior == menor) printf("Maior = Menor = %d\n", maior);
  else printf("Maior = %d e Menor = %d\n", maior, menor);

  return 0;
}
