#include <stdio.h>

int main() {

  int t, n, s, k = 0, max = 0;

  scanf("%d %d", &t, &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &s);
    if((s >= t - 2) && (s <= t + 2)) {
      k++;
      if(k > max) {
        max = k;
      }
    } else k = 0;
  }

  if(max > 1)
    printf("Durante %d dias consecutivos, temperaturas moderadas\n", max);
  else if(max == 1)
    printf("Temperaturas moderadas apenas em dias isolados\n");
  else
    printf("Sem registo de temperaturas moderadas\n");

  return 0;
}
