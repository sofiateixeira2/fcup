#include <stdio.h>

int main() {

  int first;
  scanf("%d", &first);

  int n;
  scanf("%d", &n);

  int count = 0, f_maior = 0, last = n;

  while(n != 0) {
    if(n > first) {
      count += n;
      f_maior++;
    }
    last = n;
    scanf("%d", &n);
  }

  if(f_maior == 0) {
    if(first%last == 0) printf("%d multiplo de %d\n", first, last);
    else printf("%d nao multiplo de %d\n", first, last);
  } else printf("%d\n", count);

  return 0;
}
