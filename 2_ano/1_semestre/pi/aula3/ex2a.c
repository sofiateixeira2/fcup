#include <stdio.h>

int main() {

  int num, n;
  int flag = 0;

  scanf("%d", &n);
  scanf("%d", &num);

  while(num != 0) {
    if(num%n != 0) {
      flag++;
      break;
    }
    scanf("%d", &num);
  }

  if(flag == 0) printf("Todos multiplos de %d\n", n);
  else printf("Nem todos multiplos de %d\n", n);

  return 0;
}
