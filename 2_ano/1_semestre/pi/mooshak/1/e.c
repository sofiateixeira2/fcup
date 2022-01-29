#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int green = 0, blue = 0, yellow = 0;

  while(n != -1) {
    if(n >= 1 && n <= 10) blue++;
    if(n >= 11 && n <= 23) green++;
    if(n >= 24 && n<= 40) yellow++;
    scanf("%d", &n);
  }

  printf("azul: %d\n", blue);
  printf("amarelo: %d\n", yellow);
  printf("verde: %d\n", green);

  return 0;
}
