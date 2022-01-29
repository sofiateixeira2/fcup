#include <stdio.h>

int main() {

  int n, num;
  int count = 1;

  scanf("%d", &n);

  if(n == 0) {
    printf("0\n");
  } else {
    scanf("%d", &num);

    while(num != 0) {
      if(num == n) count++;
      scanf("%d", &num);
    }

    printf("%d\n", count);
  }

  return 0;
}
