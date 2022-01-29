#include <stdio.h>

int main() {

  int n, a;
  scanf("%d", &n);
  int max = 0, min = 100, cmax = 1, cmin = 1;
  int sum = 0, r = 0;

  for(int i = 0; i < n; i++) {
    scanf("%d", &a);
    sum += a;

    if(a > max) {
      max = a;
      cmax = 1;
    } else if(a == max) cmax++;

    if(a < min) {
      min = a;
      cmin = 1;
    } else if(a == min) cmin++;
  }

  if(cmin != 1 && cmax != 1) r = sum / n;
  else if(cmax != 1 && cmin == 1) r = (sum - min) / (n-1);
  else if(cmax == 1 && cmin != 1) r = (sum - max) / (n-1);
  else r = (sum - max - min) / (n-2);

  printf("%d\n", r);

  return 0;
}
