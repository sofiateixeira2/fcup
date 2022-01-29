#include <stdio.h>

int main() {

  int n, num;
  int count = 0;

  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &num);
    if((num%2 == 0 || num%3 == 0) && num%6 != 0)
      count++;
  }

  printf("Numero de multiplos ou de 2 ou de 3 = %d\n", count);

  return 0;
}
