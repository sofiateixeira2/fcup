#include <stdio.h>

int main() {

  int a, b;
  scanf("%d %d", &a, &b);

  int sum_a = 0, sum_b = 0;

  for(int i = 1; i <= a/2; i++) {
    if(a%i == 0) sum_a+=i;
  }

  for(int i = 1; i <= b/2; i++) {
    if(b%i == 0) sum_b+=i;
  }

  if((a == sum_b) && (b == sum_a)) printf("Amigos!\n");
  else printf("Não são amigos\n");

  return 0;
}
