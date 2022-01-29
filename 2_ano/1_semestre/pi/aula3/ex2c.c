#include <stdio.h>

int main() {

  int n, num;
  int count = 1;

  scanf("%d", &num);
  scanf("%d", &n);

  if(num == n) count++;

  if(n == 0) {
    printf("Nao aplicavel\n");
  } else {
    scanf("%d", &num);

    while(num != 0) {
      if(num == n) count++;
      scanf("%d", &num);
    }

    printf("Ocorrencias = %d\n", count);
  }

  return 0;
}
